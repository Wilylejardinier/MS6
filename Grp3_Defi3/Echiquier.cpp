#include "Echiquier.h"

Echiquier::Echiquier()
{
    InitialiserEchiquier();
}
void Echiquier::InitialiserEchiquier()
{
    // Initialisation du tableau
    tabEchiquier[0][0] = 't';
    tabEchiquier[0][1] = 'c';
    tabEchiquier[0][2] = 'f';
    tabEchiquier[0][3] = 'd';
    tabEchiquier[0][4] = 'r';
    tabEchiquier[0][5] = 'f';
    tabEchiquier[0][6] = 'c';
    tabEchiquier[0][7] = 't';
    tabEchiquier[7][0] = 'T';
    tabEchiquier[7][1] = 'C';
    tabEchiquier[7][2] = 'F';
    tabEchiquier[7][3] = 'D';
    tabEchiquier[7][4] = 'R';
    tabEchiquier[7][5] = 'F';
    tabEchiquier[7][6] = 'C';
    tabEchiquier[7][7] = 'T';
    for(int j=0 ; j<8 ; j++)
    {
        tabEchiquier[1][j] = 'p';
        tabEchiquier[6][j] = 'P';
    }
    for(int i=2 ; i<=5 ; i++)
    {
        for(int j=0 ; j<8 ; j++)
        {
            tabEchiquier[i][j] = ' ';
        }
    }
    jBlancs.DonnerLeTrait();
    jNoirs.RetirerLeTrait();
}

bool Echiquier::EstVide(int ligne, int colonne)
{
    if(tabEchiquier[ligne][colonne] == ' ')
        return true;
    return false;
}

bool Echiquier::EstUnePieceBlanche(int ligne, int colonne)
{
    if(tabEchiquier[ligne][colonne] >= 'A' && tabEchiquier[ligne][colonne] <= 'Z')
        return true;
    return false;
}

bool Echiquier::EstUnePieceNoire(int ligne, int colonne)
{
    if(tabEchiquier[ligne][colonne] >= 'a' && tabEchiquier[ligne][colonne] <= 'z')
        return true;
    return false;
}

string Echiquier::VisualiserEchiquier()
{
    string str = "";
    for(int i=0; i<8 ; i++)
    {
        for(int j=0; j<8 ; j++)
        {
            str = str + tabEchiquier[i][j];
        }
        str = str + '\n';
    }
    return str;
}

bool Echiquier::Deplacer(int idep, int jdep, int iarr, int jarr, char piecePromotion)
{
    char piece;
    if(idep==iarr && jdep==jarr)
        return false;
    if( idep>=0 && idep<=7 && jdep>=0 && jdep<=7 &&
        iarr>=0 && iarr<=7 && jarr>=0 && jarr<=7 &&
        ((jBlancs.Trait() && EstUnePieceBlanche(idep, jdep) && !EstUnePieceBlanche(iarr,jarr))
        ||
        (jNoirs.Trait() && EstUnePieceNoire(idep, jdep) && !EstUnePieceNoire(iarr,jarr))) )
    {
        piece = tabEchiquier[idep][jdep];
        if(piecePromotion != ' ')
        {
            tabEchiquier[iarr][jarr] = piecePromotion;
        }
        else
        {
            tabEchiquier[iarr][jarr] = piece;
        }
        tabEchiquier[idep][jdep] = ' ';
        ChangerTrait();
        return true;
    }
    return false;
}

void Echiquier::ChangerTrait()
{
    if(jBlancs.Trait())
    {
        jBlancs.RetirerLeTrait();
        jNoirs.DonnerLeTrait();
    }
    else
    {
        jNoirs.RetirerLeTrait();
        jBlancs.DonnerLeTrait();

    }    
}

char Echiquier::LireTabEchiquier(int ligne, int colonne)
{
    return tabEchiquier[ligne][colonne];
}

void Echiquier::ModifierTabEchiquier(char cPiece, int ligne, int colonne)
{
    tabEchiquier[ligne][colonne] = cPiece;
}
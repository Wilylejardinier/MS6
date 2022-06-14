#include <iostream>
#include "Echiquier.h"

using namespace std;

int main()
{
    int idep, jdep, iarr, jarr;
    char piecePromo = ' ';
    cout << "LE JEU D'ECHEC" << endl;
    Echiquier monEchiquier;

    do {
        cout << monEchiquier.VisualiserEchiquier();
        cout << "Saisir le coup : ";
        cin >> idep;
        if(idep != -1)
        {
            cin >> jdep >> iarr >> jarr;
            // Vérification de la promotion
            if(monEchiquier.LireTabEchiquier(idep, jdep) == 'P' && iarr == 0)
            {
                cout << "Saisir votre promotion -> D C F T : ";
                cin >> piecePromo; 
            }
            else if(monEchiquier.LireTabEchiquier(idep, jdep) == 'p' && iarr == 7)
            {
                cout << "Saisir votre promotion -> d c f t : ";
                cin >> piecePromo; 
            }
            else
            {
                piecePromo = ' ';
            }
            monEchiquier.Deplacer(idep,jdep,iarr,jarr,piecePromo);
        }
    }while(idep!=-1);
    cout << "Fin du jeu."<< endl;
}
#ifndef ECHIQUIER_H
#define ECHIQUIER_H

#include "Joueur.h"
#include <string>

using namespace std;

class Echiquier 
{
    private :
        char tabEchiquier[8][8];
        Joueur jBlancs;
        Joueur jNoirs;
    public :
        Echiquier();
        bool EstUnePieceNoire(int ligne, int colonne);
        bool EstUnePieceBlanche(int ligne, int colonne);
        bool EstVide(int ligne, int colonne); 
        bool Deplacer(int idep, int jdep, int iarr, int jarr, char piecePromotion);
        string VisualiserEchiquier();
        void InitialiserEchiquier();
        void ChangerTrait();
        char LireTabEchiquier(int ligne, int colonne);
        void ModifierTabEchiquier(char cPiece, int ligne, int colonne);


};

#endif
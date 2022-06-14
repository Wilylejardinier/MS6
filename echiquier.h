//---------------------------------------------------------------------------

#ifndef echiquierH
#define echiquierH
#include <string.h>
//---------------------------------------------------------------------------
#endif



class Echiquier
{
 private:

 char [8][8] tabEchiquier;
 int demiCoup;

 public :

 Echequier()
 char LireCaseEchiquier(int ligne,int colonne);
 void InitialiserEchiquier();
 string VisualiserEchiquier();
 string Les64Caracteres();
 void ChargerEchiquierComplet(char* Les64Caracteres);
 void ModifierCaseEchiquier(char cPiece,int ligne,int colonne);
 bool EstUnePieceNoire(int ligne,int colonne);
 bool EstUnePieceBlanche(int ligne,int colonne);
 bool EstVide(int ligne,int colonne);
 void ChangerLeTrait();
 bool Deplacer(int idep,int jdep,int iarr,int jarr,char piecePromotion);
 string Trait();
 int DemiCoup();
 void SauvegarderEchiquierBMP(char* fichier);



};


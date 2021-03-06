//---------------------------------------------------------------------------

#pragma hdrstop
#include  <string>
#include  <tchar.h>
#include  <iostream>
#include "echiquier.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

using namespace std;
 void Echiquier::InitialiserEchiquier()
 {
	 tabEchiquier[0][0] = 't'; tabEchiquier[0][1] = 'c';
	 tabEchiquier[0][2] = 'f'; tabEchiquier[0][3] = 'd';
	 tabEchiquier[0][4] = 'r'; tabEchiquier[0][5] = 'f';
	 tabEchiquier[0][6] = 'c'; tabEchiquier[0][7] = 't';
	 tabEchiquier[7][0] = 'T'; tabEchiquier[7][1] = 'C';
	 tabEchiquier[7][2] = 'F'; tabEchiquier[7][3] = 'D';
	 tabEchiquier[7][4] = 'R'; tabEchiquier[7][5] = 'F';
	 tabEchiquier[7][6] = 'C'; tabEchiquier[7][7] = 'T';

	 for (int j=0; j < 8; j++)
	 {
	   tabEchiquier[1][j]= 'p';
	   tabEchiquier[6][j]= 'P';
	 }
	  for (int i=2; i<=5; i++)
	  {
	   for (int j=0;  j<=7; j++)
	   {
		tabEchiquier[i][j]= ' ';
	   }
	 }
 }
 Echiquier::Echiquier()
 {
    InitialiserEchiquier();
 }
 string Echiquier::VisualiserEchiquier()
 {
	 string str;
	 int j,i;
	 str="";
	 for (i=0; i < 8; i++) {
		 for (j=0; j < 8; j++) {
		  str=str+tabEchiquier[i][j];
		 }
		 str=str+"\n";
	 }
	  return str;
 }

 char Echiquier::LireCaseEchiquier(int ligne,int colonne)
 {
	 return tabEchiquier[ligne][colonne];
 }
 void Echiquier::ModifierCaseEchiquier(char cPiece, int ligne, int colonne)
 {
   tabEchiquier[ligne][colonne]=cPiece;
 }

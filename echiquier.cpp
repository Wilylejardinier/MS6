//---------------------------------------------------------------------------

#pragma hdrstop
#include  <string.h>
#include  <tchar.h>
#include  <iostream>
#include  <cstring>
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
	   tabEchiquier[7][j]= 'p';
	 }
	  for (int i=2 i<=5; i++)
	  {
	   for (int j=0;  j<=7; j++)
	   {
		tabEchiquier[i][j]= '';
	   }
	 }
 }

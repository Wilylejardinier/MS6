#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include  <string>
#include  <tchar.h>
#include  <iostream>
#include <stdio.h>
#include "echiquier.h"

using namespace std;

 int _tmain(int argc, _TCHAR* argv[]) 
{
		int idep;
		int jdep;
		int iarr;
		int jarr;
Echiquier monEchiquier;
while (true)
	{

		string s = monEchiquier.VisualiserEchiquier();
		cout << s;
		cin>>idep>>jdep>>iarr>>jarr;
		char piece = monEchiquier.LireCaseEchiquier(idep, jdep);
	}
	return 0;
}

//================================================================
// File Name	: main.cpp
//
// Purpose		: main module to test Tower of Hanoi
//
// Author		: Abdullah Alharbi
//----------------------------------------------------------------
// Revision List	
// Version	Author	Date				 Changes
// 1.0		AA			Oct 16, 2017 	 New version
//================================================================
#include <iostream>
#include <stdlib.h>
#include "TOH.h"
using namespace std;

int main(int argc, char *argv[])
{
   int numOfDisks;
   if(argc == 2)
   {
      numOfDisks = atoi(argv[1]);
      if(numOfDisks <= 7)
      {
         TOH t(numOfDisks);
      }
      else
      {
         cout << "***Maximum allowed is 7 disks***" << endl;
      }
   }
   else
   {
      TOH t;
   }
   
   return 0;
}

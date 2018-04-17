//================================================================
// File Name	: TOH.h
//
// Purpose		: The module for Tower of Hanoi
//
// The library "unistd.h" is environment dependent. It works with
// Ubuntu and Debian Otter. The function used in this module is
// usleep() in the private method delayedPrint().
//
// Author		: Abdullah Alharbi
// Date			: Oct 16, 2017
//----------------------------------------------------------------
// Revision List	
// Version	Author	Date				 Changes
// 1.0		AA			Oct 16, 2017 	 New version
// 1.0		AA			Oct 23, 2017 	 New variables (base, tags, diskSize)
//================================================================
#include<iostream>
#include <unistd.h>
#include <stdlib.h>
#include"Pole.h"

using namespace std;

class TOH
{
   public:
      TOH();
      TOH(int);
      ~TOH();
      void print();
      
      void solveTOH(int, Pole*, Pole*, Pole*);  // Recursive function
      void move(Pole*, Pole*);


   private:
      Pole* A;
      Pole* B;
      Pole* C;
      int n;
      int diskSize;
      
      int numOfMove;
      void delayedPrint(bool);
      
      string base;
      string tags;
      void buildBase(int);
};

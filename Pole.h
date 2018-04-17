//================================================================
// File Name	: Pole.h
//
// Purpose		: model of a pole for Tower of Hanoi
//
// Author		: Abdullah Alharbi
// Date			: Oct 16, 2017
//----------------------------------------------------------------
// Revision List	
// Version	Author	Date				 Changes
// 1.0		AA			Oct 16, 2017 	 New version
// 1.0		AA			Oct 23, 2017 	 emptyDisk
//================================================================

#include<iostream>
#include"Disk.h"
using namespace std;


class Pole
{
   public:
      Pole();
      Pole(int);
      ~Pole();
      void push(Disk*);
      Disk* pop();
      void print();
      
   private:
      string emptyDisk;
      void constructEmptyDisk();
      struct PolePosition
      {
         bool isOccupied;
         Disk *d;
      };
      PolePosition *p;
      int firstEmptyPosition;
      int maximum;
      
      int printIndex; // This is to align all disks of different poles
};

//================================================================
// File Name	: Disk.h
//
// Purpose		: model of a disk for Tower of Hanoi
//
// Author		: Abdullah Alharbi
// Date			: Oct 16, 2017
//----------------------------------------------------------------
// Revision List	
// Version	Author	Date				 Changes
// 1.0		AA			Oct 16, 2017 	 New version
// 1.0		AA			Oct 23, 2017 	 buildDisk(int)
//================================================================

#include<iostream>
using namespace std;


class Disk
{
   public:
      Disk();
      Disk(int, int);
      ~Disk();
      void print();

   private:
      void buildDisk(int, int);
      int size;
      string d;
};

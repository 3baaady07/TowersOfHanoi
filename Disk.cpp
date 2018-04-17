//================================================================
// File Name	: Disk.h
//
// Purpose		: model of a disk for Tower of Hanoi
//
// Author		: Abdullah Alharbi AA
// Date			: Oct 16, 2017
//----------------------------------------------------------------
// Revision List	
// Version	Author	Date				 Changes
// 1.0		AA			Oct 16, 2017 	 New version
// 1.0		AA			Oct 23, 2017 	 New version
//================================================================
#include"Disk.h"

Disk::Disk()
{
}

Disk::Disk(int s, int max)
{
   buildDisk(s, max);
}

Disk::~Disk()
{
}

void Disk::print()
{
   cout << d;
}

void Disk::buildDisk(int s, int m)
{
   int max = m-1;
   
   d="";
   for(int i = max; i > s; i--)
   {
      d = d + " ";
   }
   

   /*
      Constructing the disk in the shape [|], or [*|*]
   */
   d = d + "[";
   for(int i = 0; i < s; i++)
   {
      d = d + "<";
   }
   d = d + "|";
   for(int i = 0; i < s; i++)
   {
      d = d + ">";
   }
   d = d + "] ";
   
   for(int i = max; i > s; i--)
   {
      d = d + " ";
   }

}

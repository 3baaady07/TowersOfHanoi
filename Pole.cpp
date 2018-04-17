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
#include"Pole.h"

Pole::Pole()
{
   maximum = 7;
   constructEmptyDisk();
   p = new PolePosition[maximum];
   for(int i=0; i<maximum; i++)
   {
      p[i].isOccupied = false;
   }
   
   firstEmptyPosition = maximum-1;
   
   printIndex = 0;
}

Pole::Pole(int n)
{
   maximum = n;
   if(n<7)
   {
      maximum = 7;
   }
   
   constructEmptyDisk();
   p = new PolePosition[maximum];
   for(int i=0; i<maximum; i++)
   {
      p[i].isOccupied = false;
   }
   
   firstEmptyPosition = maximum-1;
   
   printIndex = 0;
}

Pole::~Pole()
{
   for(int i = 0; i < maximum; i++)
   {
      if(p[i].isOccupied)
      {
         delete p[i].d;
      }
   }
   
   delete [] p;
}

// pushes the disk into the pole
void Pole::push(Disk* disk)
{
   if(firstEmptyPosition >= 0)
   {
      p[firstEmptyPosition].isOccupied = true;
      p[firstEmptyPosition].d = disk;
      firstEmptyPosition--;
   }
   else
   {
      cout << "***Pole is full***" << endl;
   }
}

// pops the disk from the pole
Disk* Pole::pop()
{
   firstEmptyPosition++;
   p[firstEmptyPosition].isOccupied = false;
   
   return p[firstEmptyPosition].d;
}

// prints an individual segment at [printIndex] of the pole
void Pole::print()
{
   if(printIndex < maximum)
   {
      if(p[printIndex].isOccupied)
      {
         p[printIndex].d -> print();
      }
      else
      {
         cout << emptyDisk;
      }
      printIndex++;
   }
   
   if(printIndex >= maximum)
   {
      printIndex = 0;
   }
}

void Pole::constructEmptyDisk()
{
   emptyDisk = "";
   for(int i = 0; i < maximum; i++)
   {
      emptyDisk = emptyDisk + " ";
   }
   emptyDisk = emptyDisk + "|";
   for(int i = 0; i < maximum; i++)
   {
      emptyDisk = emptyDisk + " ";
   }
   emptyDisk = emptyDisk + " ";
}

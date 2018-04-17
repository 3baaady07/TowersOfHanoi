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
// 1.0		AA			Oct 23, 2017 	 New variables (base, tags)
//================================================================
#include"TOH.h"

TOH::TOH()
{
   n = 7;
   diskSize = n;
   buildBase(7);
   numOfMove = 0;
   A = new Pole();
   B = new Pole();
   C = new Pole();
   for(int i = n-1; i >= 0; i--)
   {
      Disk* disk = new Disk(i, n);
      A -> push(disk);
   }
   delayedPrint(false);
   solveTOH(n, A, B, C);
}

TOH::TOH(int d)
{
   n = d;
   diskSize = n;
   if(n<7)
   {
      diskSize = 7;
   }
   buildBase(diskSize);
   numOfMove = 0;
   A = new Pole(n);
   B = new Pole(n);
   C = new Pole(n);
   for(int i = n-1; i >= 0; i--)
   {
      Disk* disk = new Disk(i, diskSize);
      A -> push(disk);
   }

   delayedPrint(false);
   solveTOH(n, A, B, C);
}

TOH::~TOH()
{
   delete A;
   delete B;
   delete C;
}

void TOH::print()
{
   cout << endl;
   cout << " Move: " << numOfMove << endl << endl;
   for(int i = 0; i<diskSize; i++)
   {
      A -> print();
      B -> print();
      C -> print();
      cout << endl;
   }
   cout << base << endl;
   cout << tags << endl << endl;
   cout << "exit: Ctrl+C" << endl << endl;
}

void TOH::solveTOH(int x, Pole* a, Pole* b, Pole* c) // a is source and c is destination
{
   if(x < 1)
   {
      return;
   }
   else
   {
      solveTOH(x-1, a, c, b);
      move(a, c);
      solveTOH(x-1, b, a, c);
   }
}


void TOH::move(Pole* a, Pole* c)
{
   Disk *d = a -> pop();
   c -> push(d);
   numOfMove++;
   delayedPrint(true);
}


void TOH::delayedPrint(bool delay)
{
   if(delay)
      usleep(100000);
      
   system("clear");
   print();
}

void TOH::buildBase(int d)
{
   base = "";
   tags = "";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
      tags = tags +" ";
   }
   base = base +"=";
   tags = tags +"A";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
      tags = tags +" ";
   }
   base = base +"=";
   tags = tags +" ";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
      tags = tags +" ";
   }
   base = base +"=";
   tags = tags +"B";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
      tags = tags +" ";
   }
   base = base +"=";
   tags = tags +" ";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
      tags = tags +" ";
   }
   base = base +"=";
   tags = tags +"C";
   for(int i = 0; i < d; i++)
   {
      base = base +"=";
   }
}

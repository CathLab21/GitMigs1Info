#include <iostream>
using namespace std;
#include "PileCorr.h"

Pile:: Pile(int t)
{
  dim=t;
  adr=new int[t];
  size=0;
}
Pile :: Pile ( const Pile & P)
{
  adr = new int[P.dim];
  size = P.size;
  dim = P.dim;
  for (int i=0;i<dim;i++) adr[i]=P.adr[i];
}

Pile::~Pile()
{
  delete[] adr;

}

void Pile::Push(int n)
{
  adr[size]=n;size++;
}

int Pile:: Pop()
{
  size--;
  return adr[size];
}

bool Pile:: Empty() const
{
  return (size==0);
}

bool Pile :: Full() const
{
  return (size==dim);
}

int Pile::Get_size() const
{
  return size;
}

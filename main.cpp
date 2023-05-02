#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#include "PileCorr.h"

int main()
{
    Pile P(20);
    int i=0;
    while (! P.Full()){P. Push(rand()%100);}
    while(!P.Empty()) cout << P.Pop()<< endl;
    return 0;
}

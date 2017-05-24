#include <iostream>
#include <cstdlib>
#include <ctime>

#include "random.h"

using namespace std;

void Randommize()
{
    srand((int)time(NULL));
}

int GenerateRandomNumber(int low, int high)
{
    double d;
    if (low > high)
    {
        cout << "get error!" << endl;
        exit(1);
    }
    d = (double)rand()/((double)RAND_MAX+1.0);
    return (low + (int)(d*(high-low+1)));
}
#include <iostream>

#include "random.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    int a=0,b=0,c=0,d=0,e=0;
    Randommize();
    for (int i = 0; i < 5000000; i++)
    {
        int t = GenerateRandomNumber(0,4);
        switch(t)
        {
            case 0:
                a++;    break;
            case 1:
                b++;    break;
            case 2:
                c++;    break;
            case 3:
                d++;    break;
            case 4:
                e++;    break;
        }
        
    }
    cout << "a :" << a << endl;
    cout << "b :" << b << endl;
    cout << "c :" << c << endl;
    cout << "d :" << d << endl;
    cout << "e :" << e << endl;
    return 0;
}
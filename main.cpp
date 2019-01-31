#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;
int i, j;

int main()
{
    double tab[5][5];
    for(i=4; i<5; i++)
    {
        tab[i][4] = 5;
        tab[4][i] = 5;
    }
    for(i=3; i<5; i++)
    {
        tab[i][3] = 4;
        tab[3][i] = 4;
    }
    for(i=2; i<5; i++)
    {
        tab[i][2] = 3;
        tab[2][i] = 3;
    }
    for(i=0; i<5; i++)
    {
        tab[i][1] = 2;
        tab[1][i] = 2;
    }
    for(i=0; i<5; i++)
    {
        tab[i][0] = 1;
        tab[0][i] = 1;
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
}

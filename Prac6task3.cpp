// Prac6task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("C:\\Users\\61449\\source\\repos\\Prac6task3\\neat.txt");

    if (fout.fail()) {
        cout << "Output file opening failed.\n";
        exit(1);
    }

   
    const int chMap[] = { 0, 0, 0, 0};
    int copyMap[] = { 0,0,0,0 };
    for (int i = 0; i < 3; i++)
    {
        int r;
        r = rand() % 10;
        copyMap[i] += copyMap[r];
    }
    fout << copyMap[2];

    int x = 2;
    int y = 3;

    fout << "x + y = " << x - y;

    fout.close();
    return 0;
}
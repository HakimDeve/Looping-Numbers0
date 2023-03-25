// Problem_Solving_160.cpp : This file contains the 'main' function. Program execution begins and ends there.
//PrintNumberFrom1ToN

#include <iostream>
using namespace std;

int ReadNumber()
{
    short Number;
    cout << "Enter Number for looping Numbrers" << endl;
    cin >> Number;

    return Number;
}

short PrintLoopNumbers(int Number)
{
    for (int Start = 0; Start <= Number; Start++)
    {
        cout << "The Number is ------> " << Start << endl;
    }

    return Number;
}

int main()
{

    
    PrintLoopNumbers(ReadNumber());

    return 0;
}


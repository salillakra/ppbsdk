/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

// Input Format: N = 3
// Result:
//   *
//  ***
// *****
// Input Format: N = 6
// Result:
//      *
//     ***
//    *****
//   *******
//  *********
// ***********

#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;

    printPattern(n);
    return 0;
}
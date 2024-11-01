/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

// pascal triangle
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1


#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void printPascalTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;

    printPascalTriangle(n);
    return 0;
}
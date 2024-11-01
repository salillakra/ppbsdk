/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/


#include <iostream>
using namespace std;

void printUltaTriangle(int n)
{
    // *****
    // ****
    // ***
    // **
    // *

    while (n > 0)
    {
        int j = 1;
        while (j <= n)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        n--;
    }
}

void printBelowPattern(int n)
{
    // 12345
    // 1234
    // 123
    // 12
    // 1

    while (n > 0)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        n--;
    }
}

int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;

    printBelowPattern(n);
    printUltaTriangle(n);
    return 0;
}

/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

// 0
// 01
// 011
// 0112
// 01123
// 011235
// 0112358

#include <iostream>
using namespace std;

void printFibbo(int n)
{
    int a = 0;
    int b = 1;

    if (n >= 1)
        cout << a;

    if (n >= 2)
        cout << b;

    for (int i = 3; i <= n; i++)
    {
        int next = a + b; // Calculate the agla Fibonacci no.
        cout << next;     // Print the agla Fibonacci no.
        a = b;            // Update a to the last no.
        b = next;         // Update b to the agla no.
    }
    cout << endl;
}

void printPattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printFibbo(i);
    }
}

int main()
{

    printPattern(8);
    return 0;
}
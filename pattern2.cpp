/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

/*
 * Copyright (c) 2024 Salil Lakra
 * All rights reserved.
 * Licensed under the MIT License.
 * https://instagram.com/officialsalillakra/
*/

// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

void printRtTriangle(int n)
{
    // *
    // **
    // ***
    // ****
    // *****

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

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
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
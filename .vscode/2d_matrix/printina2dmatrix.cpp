#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Taking input of row and column
    int row;
    cin >> row;
    int col;
    cin >> col;
    // Initialising a 2D array
    int arr[row][col];
    // Declare a 2D matrix 
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // Taking input of 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = arr1.size();
    int col = arr1[0].size();
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;

        while (start <= end)
        {
            swap(arr1[i][start], arr1[i][end]);
            start++;
            end--;  
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr1[i][j]<<" ";
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int rows = arr1.size();
    int col = arr1[0].size();

    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr1[i][j] << " ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
}
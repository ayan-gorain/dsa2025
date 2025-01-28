#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows,cols,ini;
    cin>>rows>>cols>>ini;

    vector<vector<int>> matrix;
    vector<vector<int>> matrix2(rows,vector<int>(cols,ini));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){

            cout<<matrix2[i][j]<<" ";

        }
        cout<<endl;
    }


    return 0;

}
#include <iostream>
using namespace std;


int main(){

    int mat[4][3];
    int row = 4;
    int col = 3;

    //input
     
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin >> mat[i][j];
        }
    
    }

    //output

    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }



    
}
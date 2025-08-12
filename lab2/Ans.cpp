#include<iostream>
using namespace std;

int main(){
    const int col = 3, row = 3;
    int matrix[col][row];

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix[i][j]=0;
        }
    }
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
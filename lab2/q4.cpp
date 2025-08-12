#include <iostream>
using namespace std;

int main() {
    const int row=3, col=3;
    int matrix[row][col]={{1,0,0},{0,1,1},{0,0,1}};
    int flag = 0;
    if(row==col){  
        for (int i = 0; i<row; i++){
            for (int j = 0; j < col; j++){
                if(i==j && matrix[i][j]!=1 || i!=j && matrix[i][j]!=0){
                    flag+=1;
                }
            }}
        cout << "identity matrix:" << (flag==0);
   }
    return 0;
}

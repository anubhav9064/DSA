#include <iostream>
using namespace std;
bool is_square(int rows, int cols) {
    return rows == cols;
}

int main() {
    const int row=3, col=2;
    int square[row][col];
    
    if(row==col){
        cout << "Is a square matrix";
    }else{
        cout << "Is not a square matrix";
    }
    return 0;
}

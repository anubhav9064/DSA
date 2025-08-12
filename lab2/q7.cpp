#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[rows][cols],matrix2[rows][cols],matrix3[rows][cols];

    cout << "Enter the elements of the 2D array1:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the 2D array2:" << endl;
      for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    cout << "The elements of the 2D array3 are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

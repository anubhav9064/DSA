#include <iostream>
using namespace std;

int main() {
    cout << "Saddle Point Finder!\n";

    int rows, cols;
    while (true) {
        cout << "Enter rows (m): ";
        cin >> rows;
        cout << "Enter columns (n): ";
        cin >> cols;
        if (rows <= 0 || cols <= 0) {
            cout << "Positive integers only. Try again.\n";
        } else {
            break;
        }
    }

    double** matrix = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }

    cout << "\nEnter " << rows << "x" << cols << " matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            while (true) {
                cout << "M[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
                if (cin.fail()) {
                    cout << "Invalid. Enter number.\n";
                    cin >> matrix[i][j];
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
        }
    }

    bool foundSaddle = false;
    cout << "\nSaddle points:\n";

    for (int i = 0; i < rows; ++i) {
        double rowMin = matrix[i][0];
        int colOfRowMin = 0;
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colOfRowMin = j;
            }
        }

        bool isColMax = true;
        for (int k = 0; k < rows; ++k) {
            if (matrix[k][colOfRowMin] > rowMin) {
                isColMax = false;
                break;
            }
        }

        if (isColMax) {
            cout << "Saddle point at (" << i + 1 << ", " << colOfRowMin + 1 << "): " << rowMin << "\n";
            foundSaddle = true;
        }
    }

    if (!foundSaddle) {
        cout << "None found.\n";
    }


    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

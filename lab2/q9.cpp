#include <iostream>

using namespace std;

int main() {
    cout << "Matrix Transposer!\n";

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
                cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
                if (cin.fail()) {
                    cout << "Invalid. Enter number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
        }
    }

    double** transposed_matrix = new double*[cols];
    for (int i = 0; i < cols; ++i) {
        transposed_matrix[i] = new double[rows];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }

    cout << "\n--- Original Matrix A ---\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "-------------------------\n";

    cout << "\n--- Transposed Matrix AT ---\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposed_matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "---------------------------\n";

    cout << "\nDone!\n";
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < cols; ++i) {
        delete[] transposed_matrix[i];
    }
    delete[] transposed_matrix;

    return 0;
}

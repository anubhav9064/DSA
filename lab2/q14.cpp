#include <iostream>
using namespace std;

int main() {
    cout << "3D Array Sum!\n";

    int size = 2;

    double*** arr = new double**[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new double*[size];
        for (int j = 0; j < size; ++j) {
            arr[i][j] = new double[size];
        }
    }

    cout << "\nEnter " << size << "x" << size << "x" << size << " elements:\n";
    for (int i = 0; i < size; ++i) { // Layer
        for (int j = 0; j < size; ++j) { // Row
            for (int k = 0; k < size; ++k) { // Column
                while (true) {
                    cout << "Arr[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "]: ";
                    cin >> arr[i][j][k];
                    if (cin.fail()) {
                        cout << "Invalid. Num only.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    } else {
                        break;
                    }
                }
            }
        }
    }

    double totalSum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                totalSum += arr[i][j][k];
            }
        }
    }

    cout << "\nSum: " << totalSum << "\n";

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    cout << "3D Array Search!\n";

    int size = 3;

    double*** arr = new double**[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new double*[size];
        for (int j = 0; j < size; ++j) {
            arr[i][j] = new double[size];
        }
    }

    cout << "\nEnter " << size << "x" << size << "x" << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) { 
            for (int k = 0; k < size; ++k) {
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

    double searchElem;
    cout << "\nEnter element to search: ";
    cin >> searchElem;

    bool found = false;
    cout << "\nPositions:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                if (arr[i][j][k] == searchElem) {
                    cout << "Found at (Layer: " << i + 1 << ", Row: " << j + 1 << ", Col: " << k + 1 << ")\n";
                    found = true;
                }
            }
        }
    }

    if (!found) {
        cout << "Element not found.\n";
    }


    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

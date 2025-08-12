#include <iostream>

using namespace std;

int main() {
    cout << "3D Array Traversal!\n";

    int arr[2][3][4] = {
        {
            {10, 11, 12, 13},
            {14, 15, 16, 17},
            {18, 19, 20, 21}
        },
        {
            {22, 23, 24, 25},
            {26, 27, 28, 29},
            {30, 31, 32, 33}
        }
    };

    cout << "\nAll elements:\n";
    for (int i = 0; i < 2; ++i) { 
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cout << arr[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "\n"; 
    }

    cout << "\nElements layer by layer:\n";
    for (int i = 0; i < 2; ++i) { 
        cout << "--- Layer " << i + 1 << " ---\n";
        for (int j = 0; j < 3; ++j) { 
            for (int k = 0; k < 4; ++k) { 
                cout << arr[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "--------------------\n";
    }

  
    return 0;
}

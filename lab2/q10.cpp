#include <iostream>

using namespace std;

int main() {
    cout << "2x2 Determinant!\n";

    double a11, a12, a21, a22;

    cout << "Enter a11: ";
    cin >> a11;
    cout << "Enter a12: ";
    cin >> a12;
    cout << "Enter a21: ";
    cin >> a21;
    cout << "Enter a22: ";
    cin >> a22;

    double determinant = (a11 * a22) - (a12 * a21);

    cout << "\nMatrix:\n";
    cout << a11 << "\t" << a12 << "\n";
    cout << a21 << "\t" << a22 << "\n";

    cout << "\nDeterminant: " << determinant << "\n";

    cout << "\nDone!\n";
    return 0;
}

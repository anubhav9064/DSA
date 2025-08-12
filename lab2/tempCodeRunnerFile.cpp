
    cout << "\nAll elements:\n";
    for (int i = 0; i < 2; ++i) { // Layers
        for (int j = 0; j < 3; ++j) { // Rows
            for (int k = 0; k < 4; ++k) { // Columns
                cout << arr[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "\n"; // Separator between layers for overall display
    }

    cout << "\nElements layer by layer:\n";
    for (int i = 0; i < 2; ++i) { // Layers
        cout << "--- Layer " << i + 1 << " ---\n";
        for (int j = 0; j < 3; ++j) { // Rows
            for (int k = 0; k < 4; ++k) { // Columns
                cout << arr[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "--------------------\n";
    }

    return 0;
}
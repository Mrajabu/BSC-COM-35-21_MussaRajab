#include <iostream>
using namespace std;

int main() {
    int x, y;

    
    do {
        cout << "Enter the number of rows (maximum 3): " << endl;
        cin >> x;
        if (x > 3 || x <= 0) {
            cout << "Invalid input. Please enter a number between 1 and 3." << endl;
        }
    } while (x > 3 || x <= 0);

    do {
        cout << "Enter the number of columns (maximum 3): " << endl;
        cin >> y;
        if (y > 3 || y <= 0) {
            cout << "Invalid input. Please enter a number between 1 and 3." << endl;
        }
    } while (y > 3 || y <= 0);

    
    double **array = new double*[x];
    for (int i = 0; i < x; ++i) {
        array[i] = new double[y];
    }

    
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << "Enter value for element at row " << i + 1 << ", column " << j + 1 << ": " << endl;
            cin >> array[i][j];
        }
    }

    
    cout << endl << "Array elements:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < x; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

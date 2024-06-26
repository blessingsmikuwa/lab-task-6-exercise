#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    if (rows > 3 || rows <= 0) {
        cout << "Invalid input! Number of rows must be between 1 and 3." << endl;
        return 1;
    }
    cout << "Enter the number of columns (max 3): ";
    cin >> cols;
    if (cols > 3 || cols <= 0) {
        cout << "Invalid input! Number of columns must be between 1 and 3." << endl;
        return 1;
    }
    double **array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

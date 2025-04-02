#include <iostream>
#include <string>

using namespace std;


// Task 2: Dynamic allocation of a 2D array of doubles
void task2() {
    int rows, cols;

    // Get dimensions from user (must not exceed 3)
    do {
        cout << "Enter number of rows (1-3): ";
        cin >> rows;
    } while (rows < 1 || rows > 3);
    
    do {
        cout << "Enter number of columns (1-3): ";
        cin >> cols;
    } while (cols < 1 || cols > 3);

    // Dynamic allocation of 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output values
    cout << "2D Array Values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
    task2();
    cout << "\n";
   
    return 0;
}

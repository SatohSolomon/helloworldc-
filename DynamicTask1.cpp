#include <iostream>
#include <string>

using namespace std;

// Task 1: Dynamic allocation of an integer and a string
void task1() {
    int* num = new int;
    string* str = new string;

    // User input
    cout << "Enter an integer: ";
    cin >> *num;
    cin.ignore(); // Ignore the newline character left in the buffer
    
    cout << "Enter a string: ";
    getline(cin, *str);

    // Output the values
    cout << "Dynamically allocated integer: " << *num << endl;
    cout << "Dynamically allocated string: " << *str << endl;

    // Deallocate memory
    delete num;
    delete str;
}

int main() {
    task1();
    cout << "\n";
    
    return 0;
}


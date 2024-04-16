#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream Myfile("exampleFile.txt");
    if ( Myfile.is_open())
    {
        Myfile << "This is a line.\n";
        Myfile << "This is another line.\n";
        Myfile << "C++ is amazing.\n";

        Myfile.close();

    }
    else{
        cout << "Unable to open a file.";
    }

    return 0;
    
} // namespace std;


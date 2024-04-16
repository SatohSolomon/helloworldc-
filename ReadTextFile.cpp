#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

    ifstream Myfile("exampleFile.txt");

    string line;

    if ( Myfile.is_open())
    {
      while (getline(Myfile, line))
      {
        cout << line << '\n';
      }
      Myfile.close(); 
    }
    else{
        cout << "Unable to open a file.";
    }

    return 0;
    
} // namespace std;


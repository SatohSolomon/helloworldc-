//obtaining the size of a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
  streampos begin;
  streampos end;

  ifstream myfile("afile.dat" , ios::binary);
  begin = myfile.tellg();
  myfile.seekg(0, ios::end);
  end = myfile.tellg();
  myfile.close();
  
  cout << "Size is: " << (end-begin) << "bytes.\n";
  return 0;
    
} // namespace std;


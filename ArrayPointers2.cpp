#include <iostream>

using namespace std;


using namespace std;

const int MAX = 5;

int main () {
   int  numberArray[MAX] = {10, 20, 30, 40, 50};
   int  *pPointer = nullptr;

   // let us have array address in pointer.
   pPointer = numberArray;

   //iterate and output all the elements and their address in the array
   for (int n = 0; n< MAX; n++) {
      cout << "Address of numberArray[" << n << "] = ";
      cout << pPointer << endl;

      cout << "Value of numberArray[" << n << "] = ";
      cout << *pPointer << endl;

      // point to the next address location
      pPointer++;
   }
   
   return 0;
}
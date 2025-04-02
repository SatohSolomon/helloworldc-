#include <iostream>

using namespace std;


using namespace std;


int main () {
   //null pointer
   int *pPointer = nullptr;

   int numberArray[3] = {10, 20, 30};
   
   //assign the address of the first element to pointer
   pPointer = numberArray;
  
   //output the address of the element
   cout<< "address at pPointer is: " << pPointer << endl;
   cout<< "address at numberArray[0] is: " << numberArray << endl;
  
   //output the value of the first element using pointer and Indirection
   cout<< "value at PPointer is: " << *pPointer << endl;

   //output the value of the second element
   cout<< "value at ++pPointer is: " << *(++pPointer) << endl;

   //assign the address of the first element to pointer
   pPointer = numberArray;

   //output the value of the first element
   cout<< "value at pPointer++ is: " << *(pPointer++) << endl;

   //output the value of the third element
   pPointer = &numberArray[1];
   cout<< "value at pPointer++ is: " << *(++pPointer) << endl;
   
   return 0;
}
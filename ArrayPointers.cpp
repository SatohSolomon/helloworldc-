#include <iostream>

using namespace std;

int main(){

    int numberArray[5];
    int *pPointer = nullptr;

    //assign the address of the first element to the pointer
    pPointer = numberArray;

    *pPointer = 10; //assign a value to the first element

    /*increment the pointer using pointer arithmetic to 
    assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; //assign a value to the second element

    //assign the address of the third element to the pointer
    pPointer = &numberArray[2];
    *pPointer = 30; // assign a value to the third element

    /*assign the address of the fourth element to the pointer
    using the pointer arithmetic*/
    pPointer = numberArray + 3;
    *pPointer = 40; //assign a value to the fourth element

    // assign a value to the fifth element using Indirction and pointer arithmetic
    pPointer = numberArray + 4; 
    *pPointer = 50;

    //iterate and output all the elements in the array
    for(int n = 0; n < 5; n++){
        cout<< numberArray[n] << ", ";
      
    }


    return 0;
}
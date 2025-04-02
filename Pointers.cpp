#include <iostream>

using namespace std;

int main(){

    //declare a pointer and initialize it 
    //so that it does not store a random address
    int *pPointer = nullptr;

    int firstVal;
    int secondVal;

    //assign the pointer with address of firstVal
    pPointer = &firstVal;
    *pPointer = 10; //Indirection

    //assign the pointer with address of secondVal
    pPointer = &secondVal;
    *pPointer = 20; //Indirection

    //output the value of firstval
    cout<< "firstVal is: " << firstVal<< '\n';

    //output the value of firstval
    cout << " secondVal is: " << secondVal<< endl;
    return 0;
}
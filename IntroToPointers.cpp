#include <iostream>

using namespace std;

int main(){

    //declare a pointer and initialize it 
    //so that it does not store a random address
    int *pPointer = nullptr;

    int integerVar = 5;

    //assign the pointer to address of object
    pPointer = &integerVar;

    //output the value of integerVar
    cout<< "IntegerVar is: " << integerVar <<endl;

    //output the address of integerVar
    cout<< "Address of integerVar is: " << &integerVar << endl;

    //output the address assigned to ppointer
    cout<< "Address assigned to pPointer is: " << pPointer << endl;

    //output the address of ppointer
    cout<< "Address of Ppointer is: " << &pPointer << endl;

    //Value of *pPointer variable
    cout << "Value of *pPointer variable is: " << *pPointer << endl;
    return 0;
}
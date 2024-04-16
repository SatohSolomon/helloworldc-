#include <iostream>
using namespace std; 

int main() { 
 int a = 21;
 int b = 10;
 int c; 
 
 c = a % b;
 cout << "c is: "<< c << endl; 

 c = a++;
 cout << "c is: "<< c << endl; 

 c = a--;
 cout << "c is: "<< c << endl; 

 return 0; 
} 
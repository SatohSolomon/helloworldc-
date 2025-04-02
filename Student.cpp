#pragma once //this tells the compiler to include the header once.
#include<iostream>
#include <string>
using namespace std;

class Student{
    //members variable
    string mFisrtName;
    string mLastName;
    unsigned int mAge;
    float mWeight;

    //members Function.
    void initialize();
    void CalculateAge(int yearBorn, int currentYear);
};
#include <Student.h>
#include <iostream>
using namespace std;

void Student::initializer()
{
    string mFisrtName;
    string mLastName;
    unsigned int mAge = 0;
    float mWeight = 0.0f;
}

void Student::CalculateAge(int yearBorn, int currentYear)
{
    mAge = currentYear - yearBorn;
}
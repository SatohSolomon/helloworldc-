#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "Welcome"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

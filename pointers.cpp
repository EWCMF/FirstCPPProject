#include<iostream>

using namespace std;

int main() 
{
    // declare an int pointer
    int* pointVar;

    // dynamically allocate memory
    // for an int variable 
    pointVar = new int;

    // assign value to the variable memory
    *pointVar = 45;

    // print the value stored in memory
    cout << *pointVar; // Output: 45

    // deallocate the memory
    delete pointVar;
    return 0;
}
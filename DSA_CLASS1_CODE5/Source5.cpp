#include <iostream>
//These lines include the necessary header files for inputand output operations in C++.
using namespace std;

int main()
{
    // Declare an array of integers with 5 elements
    int mynumbers[5] = { 10, 20, 30, 40, 50 };

    // Display the total size (in bytes) of the entire array
    cout << "Size of mynumbers array: " << sizeof(mynumbers) << " bytes" << endl;

    // Display the size (in bytes) of a single integer
    cout << "Size of int data type: " << sizeof(int) << " bytes" << endl;

    return 0;
}


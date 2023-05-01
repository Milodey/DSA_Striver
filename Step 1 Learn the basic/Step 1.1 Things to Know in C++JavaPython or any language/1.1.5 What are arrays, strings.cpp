#include <bits/stdc++.h>
using namespace std;
int main()
{
    char choice;
    cout << "Enter 'A' for array or 'S' for string: "; // Added double quotes for the string output
    cin >> choice;

    if (choice == 'A')
    {
        cout << "An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier. Five values of type int can be declared as an array without having to declare five different variables (each with its own identifier).";
    }
    else if (choice == 'S')
    {
        cout << "In C++, a string is a sequence of characters stored in a variable. It is a data type that represents a collection of characters, which can include letters, digits, and other symbols.\n\nC++ provides a standard library class called std::string that can be used to create, manipulate, and store strings. This class provides a wide range of functions for performing operations on strings, such as concatenating, comparing, finding, and replacing substrings.";
    }
    else
    {
        cout << "Invalid input. Please enter 'A' or 'S'." << endl; // Modified error message
    }
    return 0;
}
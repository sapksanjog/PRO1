#include <iostream>
using namespace std;

// Task: Write a program that reads an alphabetical character 
//       and tells whether it is a letter (uppercase or lowercase) or a number.

// Input: an alphabetical character (never a punctuation sign).
// OutPut: Print a line indicating the type of the character given.
//         Follow the format of the examples.

int main(){
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') cout << "Uppercase Letter" << "\n";
    else if (ch >= '0' && ch <= '9') cout << "Number" << "\n";
    else cout << "Lowercase Letter" << "\n";
}

// ALTERNATIVE 1:
// Check lowercase explicitly instead of relying on the final else.
//
// if (ch >= 'A' && ch <= 'Z')
//     cout << "Uppercase Letter\n";
// else if (ch >= 'a' && ch <= 'z')
//     cout << "Lowercase Letter\n";
// else
//     cout << "Number\n";
//
// This is also correct because the input is guaranteed
// to be a letter or a number.


// ALTERNATIVE 2:
// Use ASCII character codes directly.
//
// if (ch >= 65 && ch <= 90)
//     cout << "Uppercase Letter\n";
// else if (ch >= 48 && ch <= 57)
//     cout << "Number\n";
// else
//     cout << "Lowercase Letter\n";
//
// DON'T prefer this.
// 'A', 'Z', '0', and '9' are much clearer than 65, 90, 48, 57.


// FUTURE ALTERNATIVE:
// Use functions from <cctype>.
//
// #include <cctype>
//
// if (isupper(ch))
//     cout << "Uppercase Letter\n";
// else if (isdigit(ch))
//     cout << "Number\n";
// else
//     cout << "Lowercase Letter\n";
//
// This is cleaner, but you probably haven't learned
// these functions yet.
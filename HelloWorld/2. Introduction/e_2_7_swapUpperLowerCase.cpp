#include <iostream>
using namespace std;

// Input: a letter
// Output: Print a line with the given letter in lowercase if it was uppercase, 
//or in uppercase if it was lowercase.

int main(){
    char ch;
    cin >> ch;
    if ('A' <= ch && ch <= 'Z') ch = ch - 'A' + 'a';
    else ch = ch - 'a' + 'A';
    cout << ch << "\n";
}

// ALTERNATIVE 1:
// Use ASCII offset directly.
//
// if ('A' <= ch && ch <= 'Z')
//     ch += 32;
// else
//     ch -= 32;
//
// Works, but your version is clearer.
// Don't prefer magic numbers like 32.


// ALTERNATIVE 2:
// Use cctype functions when you learn them.
//
// #include <cctype>
//
// if (isupper(ch))
//     ch = tolower(ch);
// else
//     ch = toupper(ch);
//
// This is more readable, but uses library functions
// that you probably haven't learned yet.
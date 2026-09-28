#include <iostream>
using namespace std;

// Task: Write a program that reads two numbers 
//       and prints their minimum.

// Input: Two integers
// Output: Print a line with the minimum of the two numbers.

int main(){
    int x, y;
    cin >> x >> y;
    if (x < y) cout << x << endl; // '\n' is generally preferred 
    // because endl also forces the output buffer to flush.
    else cout << y << endl;
}


// BETTER ALTERNATIVE (when min() is allowed):
//
// #include <algorithm>
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << min(x, y) << '\n';
// }


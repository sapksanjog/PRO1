#include <iostream>
using namespace std;

// Task: Write a program that reads three numbers and prints their minimum.

// Input: Three different integer numbers.
// Output: Print a line with the minimum of the three numbers.

int main() {
    int x, y, z, min;

    cin >> x >> y >> z;

    min = x;

    if (y < x) min = y;
    if (z < y) min = z;

    cout << min << '\n';
}


// BETTER ALTERNATIVE:
// Compare each number with the current minimum.
//
// min = x;
//
// if (y < min) min = y;
// if (z < min) min = z;


// ANOTHER ALTERNATIVE:
// Use if / else if / else.
//
// if (x < y && x < z)
//     cout << x;
// else if (y < z)
//     cout << y;
// else
//     cout << z;


// FUTURE ALTERNATIVE:
// When you are allowed to use min() from <algorithm>.
//
// #include <algorithm>
//
// cout << min(x, min(y, z)) << '\n';
//
// Or:
//
// cout << min({x, y, z}) << '\n';
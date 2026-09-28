#include <iostream>
using namespace std;

// Write a program that reads three numbers 
// and prints the sum of their minimum and maximum values.

// Input: three integers
// Output: sum of maximum and minimum of three integers 

int main(){
    int x, y, z, min, max;
    cin >> x >> y >> z;
    min = x;
    max = x;
    if (y < min) min = y;
    if (y > max) max = y;
    if (z < min) min = z;
    if (z > max) max = z;
    cout << min + max << "\n";
}

// FUTURE ALTERNATIVE:
// When min() and max() are allowed:
//
// #include <algorithm>
//
// int minimum = min({x, y, z});
// int maximum = max({x, y, z});
//
// cout << minimum + maximum << '\n';
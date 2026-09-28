#include <iostream>
using namespace std;

/*
int main(){
    int x, y, z;
    bool c;

    cin >> x >> y >> z;

    c = false;

    if (2 * z == x + y) c = true;
    if (2 * y == x + z) c = true;
    if (2 * x == y + z) c = true;

    if (c) cout << "YES\n";
    else cout << "NO\n";
}
*/

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    bool c;
    c = false;

    if (z == (x + y) / 2.) c = true;
    if (y == (x + z) / 2.) c = true;
    if (x == (y + z) / 2.) c = true;
    if (c) cout << "YES \n";
    else cout << "NO \n";
}

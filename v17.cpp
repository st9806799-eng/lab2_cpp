#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double Z;

    cout << "Enter x: ";
    cin >> x;

    if (x >= 0) {
        Z = cos(x) - pow(sin(x), 3);
    } else {
        Z = x * exp(-x) + 1.0 / (x - 1.3);
    }

    cout << "Z = " << Z << endl;

    return 0;
}

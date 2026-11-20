#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, a, b, c, beta;
    double Y;

    cout << "Enter x, a, b, c, beta: ";
    cin >> x >> a >> b >> c >> beta;

    if (x >= 1.5) {
        Y = ((pow(x, 3) + 3.0 * a) * c) / (a - b + x);
    } else {
        Y = pow(sin(a), 2) * pow(sin(beta), 2);
    }

    cout << "Y = " << Y << endl;

    return 0;
}

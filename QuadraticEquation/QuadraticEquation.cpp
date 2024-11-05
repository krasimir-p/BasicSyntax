#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double d, x1, x2;

    d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "no roots" << endl;
    }
    else if (d == 0) {
        x1 = -b / 2.0 / a;
        cout << x1 << endl;
    }
    else {
        x1 = (-b + sqrt(d)) / 2.0 / a;
        x2 = (-b - sqrt(d)) / 2.0 / a;
        cout << x1 << " " << x2 << endl;
    }

    return 0;
}

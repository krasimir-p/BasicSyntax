#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int tNum = number;
    int strNum = 0;

    if (number == 0) {
        cout << "no" << endl;
        return 0;
    }

    while (tNum) {
        int digit = tNum % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        strNum += factorial;
        tNum /= 10;
    }

    if (strNum == number) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

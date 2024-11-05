#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;

    while (cin >> number && number % 2) {
        cout << "Please write an even number." << endl;
    }

    cout <<"The number is: " << abs(number) << endl;

    return 0;
}

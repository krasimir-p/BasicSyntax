#include <iostream>

using namespace std;

int main()
{
    float grade;
    cin >> grade;

    if (grade >= 3.0) {
        cout << "Passed!" << endl;
    }
    else {
        cout << "Failed!" << endl;
    }
    return 0;
}

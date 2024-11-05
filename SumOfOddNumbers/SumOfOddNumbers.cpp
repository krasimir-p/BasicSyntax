#include <iostream>

using namespace std;

int main()
{
    int numbers;
    cin >> numbers;

    int i = 1;
    int wantedNumber = 0;
    int sum = 0;

    while (i <= numbers) {
        wantedNumber++;
        if (wantedNumber % 2) {
            cout << wantedNumber << endl;
            i++;
            sum += wantedNumber;
        }
    }
   
    cout << "Sum: " << sum << endl;

    return 0;
}

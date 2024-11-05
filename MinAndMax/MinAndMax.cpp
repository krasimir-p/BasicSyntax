#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxNum = INT_MIN, minNum = INT_MAX, number;
    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (number > maxNum) {
            maxNum = number;
        }
        if (number < minNum) {
            minNum = number;
        }
    }

    cout << minNum << " " << maxNum << endl;

    return 0;
}

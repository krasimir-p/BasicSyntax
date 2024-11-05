#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int gcd, reverse;
    if (n2 < n1) {
        reverse = n1;
        n1 = n2;
        n2 = reverse;
    }
    
    int i = n1;

    while (n1 % i || n2 % i) {
        i--;
    }

    cout << i;

    return 0;
}

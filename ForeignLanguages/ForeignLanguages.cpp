#include <iostream>

using namespace std;

int main()
{
    string country;
    cin >> country;

    if (country == "England" || country == "USA") {
        cout << "English" << endl;
    }
    else if (country == "Spain" || country == "Argentina" || country == "Mexico") {
        cout << "Spanish" << endl;
    }
    else {
        cout << "unknown" << endl;
    }

    return 0;
}

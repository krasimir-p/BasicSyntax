#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string studentName;
    int age;
    float averageGrade;
    getline(cin, studentName);
    cin >> age >> averageGrade;

    cout << "Name: " << studentName << ", Age: " << age << ", Grade: " << fixed << setprecision(2) << averageGrade << endl;

    return 0;
}

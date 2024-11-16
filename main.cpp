#include <iostream>
using namespace std;

int main() {
    int number, number2;
    cout << "Enter a first number: ";
    cin >> number;

    cout << "Enter a second number: ";
    cin >> number2;

    if (number == number2) {
        cout << "The number is positive" << endl;
    }
    else {
        cout << "The number is negativ" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Error" << endl;
    }
    else {
        int first = number / 1000;
        int second = number % 1000;

        int sumF = (first / 100) + ((first / 10) % 10) + (first % 10);
        int sumS = (second / 100) + ((second / 10) % 10) + (second % 10);

        if (sumF == sumS) {
            cout << "The number is lucky" << endl;
        }
        else {
            cout << "The number is not lucky" << endl;
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter  number: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error" << endl;
    }
    else {
        int d1 = (number / 1000) % 10;
        int d2 = (number / 100) % 10;
        int d3 = (number / 10) % 10;
        int d4 = number % 10;

        int swap = d2 * 1000 + d1 * 100 + d4 * 10 + d3;

        cout << "The swapped number is: " << swap << endl;
    }

    return 0;
}




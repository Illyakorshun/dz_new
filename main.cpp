#include <iostream>
using namespace std;

int main() {
    int numbers[7];
    cout << "Enter:  " << endl;

    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];
    }

    int max = numbers[0];
    for (int i = 1; i < 7; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "The maximum number: " << max << endl;

    return 0;
}





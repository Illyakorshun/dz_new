#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    int mnshe = (number1 < number2) ? number1 : number2;
    cout << "The smaller number is: " << mnshe << endl;

    return 0;
}

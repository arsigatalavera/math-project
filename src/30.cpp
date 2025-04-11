#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0) {
        if (num2 > 0) {
            if (num1 % num2 == 0) {
                cout << num1 / num2 << " is the greatest common divisor of " << num1 << " and " << num2 << endl;
            } else {
                cout << "The numbers are not coprime." << endl;
            }
        } else {
            if (num2 % num1 == 0) {
                cout << "The numbers are divisible by " << num1 << endl;
            } else {
                cout << "The numbers are not coprime." << endl;
            }
        }
    } else {
        if (num2 > 0) {
            if (num1 % num2 == 0) {
                cout << num1 / num2 << " is the greatest common divisor of " << num1 << " and " << num2 << endl;
            } else {
                cout << "The numbers are not coprime." << endl;
            }
        } else {
            if (num1 % num2 == 0) {
                cout << num1 / num2 << " is the greatest common divisor of " << num1 << " and " << num2 << endl;
            } else {
                cout << "The numbers are not coprime." << endl;
            }
        }
    }
}

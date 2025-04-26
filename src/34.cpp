#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else if (num1 < 0 && num2 <= 0) {
        cout << "The first number is negative and the second one is non-positive." << endl;
    } else {
        cout << "Both numbers are negative." << endl;
    }
    
    return 0;
}

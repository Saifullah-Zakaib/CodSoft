#include <iostream>
using namespace std;

int main() {
    float num1, num2;    // declaring the two numbers
    char operation;
    cout << "Enter two Numbers: ";
    cin >> num1;
    cin >> num2;
    cout << "Enter the Operator: ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2 != 0) {   //checking that if num2 =0 or not
            cout << num1 / num2;  
        } else {
            cout << "Error! Division by zero is not possible";
        }
        break;
    default:
        cout << "Invalid Operation";
    }

    return 0;
}

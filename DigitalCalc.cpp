//
// Created by Omar Hegazy on 2/2/23.
//

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter an operator: +, -, *, /: " << endl;
    cin >> op;

    cout << "Enter two operands: " << endl;
    cin >> num1 >> num2;

    switch (op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        default:
            cout << "Invalid operator! Please try again." << endl;
    }

    return 0;
}

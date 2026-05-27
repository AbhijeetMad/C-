#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "====================================\n";
    cout << "         Console Calculator         \n";
    cout << "====================================\n";

    // Step 1: Request the operation type from the user
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Step 2: Request the two numeric values
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "------------------------------------\n";

    // Step 3: Evaluate the operator and print the result
    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
            break;
            
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
            break;
            
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
            break;
            
        case '/':
            // Error handling to prevent runtime crashes from dividing by zero
            if (num2 != 0.0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
            } else {
                cout << "Error: Division by zero is mathematically undefined.\n";
            }
            break;
            
        default:
            // Error handling for invalid characters
            cout << "Error: The operator '" << op << "' is not supported.\n";
            break;
    }

    cout << "====================================\n";
    return 0;
}

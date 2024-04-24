#include <iostream>

using namespace std;

void displayMenu();
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
int modu(int a, int b);

int main() {
    char choice;
    int num1, num2;
    do {
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;

        switch (choice) {

            case '1':
                cout << "Result: " << addition(num1, num2) << endl;
                break;

            case '2':
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;

            case '3':
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;

            case '4':
                if (num2 == 0) {
                    cout << "The second integer is zero, divide by zero" << endl;
                } else {
                    cout << "Result: " << division(num1, num2) << endl;
                }
                break;

            case '5':
                cout << "Result: " << modu(num1, num2) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "5 - Modulus" << endl;

}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return static_cast<float>(a) / b;
}

int modu(int a, int b) {
    return a % b;

}

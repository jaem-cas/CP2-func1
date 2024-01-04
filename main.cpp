#include <iostream>

using namespace std;

int Add(int a, int b) {

    return a + b;
}

int Sub(int a, int b) {

    return a - b;
}

int Multi(int a, int b) {

    return a * b;
}

int Divi(int a, int b) {

    return a / b;
}

int main()
{
    int n1, n2, op, toContinue;
    int result = 0;

    do {

        cout << "\nChoose an arithmetic operation\n"
            << "1. Addition\n"
            << "2. Subtraction\n"
            << "3. Multiplication\n"
            << "4. Division\n"
            << "Enter Choice: ";
        cin >> op;

        cout << "\nEnter the first number: ";
        cin >> n1;

        cout << "\nEnter the second number: ";
        cin >> n2;

        switch (op) {

        case 1: result = Add(n1, n2);
            break;

        case 2: result = Sub(n1, n2);
            break;

        case 3: result = Multi(n1, n2);
            break;

        case 4: result = Divi(n1, n2);
            break;

        default: cout << "Incorrect Input";
        }

        cout << "The result of the operation is " << result;

        cout << "\n\nPress 1 to CONTINUE\n"
            << "Press 0 to END PROGRAM\n"
            << "Choice: ";
        cin >> toContinue;

    } while (toContinue != 0);

    return 0;
}

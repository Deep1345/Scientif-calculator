#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int choice;
    double x, b;
    int n;

    while (true) {

        cout << "\n===== Scientific Calculator =====\n";
        cout << "1. Square Root (√x)\n";
        cout << "2. Factorial (x!)\n";
        cout << "3. Natural Log (ln x)\n";
        cout << "4. Power (x^b)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 1) {
            cout << "Enter number: ";
            cin >> x;

            if (x < 0)
                cout << "Square root not defined for negative numbers\n";
            else
                cout << "Result = " << sqrt(x) << endl;
        }

        else if (choice == 2) {
            cout << "Enter integer: ";
            cin >> n;

            if (n < 0) {
                cout << "Factorial not defined for negative numbers\n";
            }
            else {
                long long fact = 1;
                for (int i = 1; i <= n; i++)
                    fact = fact * i;

                cout << "Result = " << fact << endl;
            }
        }

        else if (choice == 3) {
            cout << "Enter number (>0): ";
            cin >> x;

            if (x <= 0)
                cout << "Log undefined\n";
            else
                cout << "Result = " << log(x) << endl;
        }

        else if (choice == 4) {
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter b: ";
            cin >> b;

            cout << "Result = " << pow(x, b) << endl;
        }

        else if (choice == 5) {
            cout << "Exiting calculator\n";
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
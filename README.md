#include <iostream>

using namespace std;

int main() {

    char continueChoice;


    do {
    string line="==========================";

    cout<<line<<endl<<"Menu"<<endl<<line<<endl;

        int choice;

        cout << "1.Addition\n";

        cout << "2.Subtraction\n";

        cout << "3.Multiplication\n";

        cout << "4.Division\n";
        cout<<endl<<line<<endl;

        cout << "Enter your choice: ";

        cin >> choice;

        int num1, num2;


        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        if (choice == 1) {

            cout << "Result: " << num1 + num2 << endl;

        } else if (choice == 2) {

            cout << "Result: " << num1 - num2 << endl;

        } else if (choice == 3) {

            cout << "Result: " << num1 * num2 << endl;



        } else if (choice == 4) {

            if (num2 == 0) {

                cout << "The second integer is zero, divide by zero" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
        } else {
            cout << "Invalid choice\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;


    } while (continueChoice == 'y' || continueChoice == 'Y');



    return 0;
}

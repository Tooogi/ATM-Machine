#include <iostream>
using namespace std;

//Show main menu where you can choose what you would like to have a look at
void showMenu() {
    cout << "*****MENU*****" << endl;

    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}


int main()
{
    int option;
    //Your current balance
    double balance = 500;

    //Select an option from the main menu
    do {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option) {
        case 1: cout << "Balance is: " << "\x9C" << balance << endl; break;
        case 2: cout << "Deposit amount: ";
            //Add your deposit to your balance
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: ";
            //Withdraw an amount from your balance
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;
            break;
        }
    }while (option != 4);
}
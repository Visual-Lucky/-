#include <iostream>
using namespace std;
int main() {
    float amount = 3000;
    int choice;
    cout << "Remaining Balance is : " << amount << endl;
    cout << "Choose Your Operation: \n[1].BALANCE ENQUIRY\n[2].DEPOSIT\n[3].WITHDRAWL.\n[4].EXIT";
    cin>>choice;

    switch(choice) {
        case 1: main();
        case 2:     int deposit;
            cout << "Enter Amount to deposit : ";
            cin >> deposit;
            amount = amount + deposit;
            main();
        case 3:     int temp;
            cout << "Enter Amount to withdraw : ";
            cin >> temp;
            if(temp > amount) {
                cout << "Insufficient Balance:";
                main();
            }else {
                amount = amount - temp;
                main();
            }
        case 4: cout << "Thanks Visit Again!";
            break;
        default:cout << "Please Choose a Valid Choice from Menu:";
            main();
    }
    return 0;
}
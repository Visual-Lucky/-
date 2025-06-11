#include <iostream>
using namespace std;

float operations(float amount) {
    int choice;
    cout<< "Remaining Balance is : " << amount << endl;
    cout << "Choose Your Operation: \n[1].BALANCE ENQUIRY\n[2].DEPOSIT\n[3].WITHDRAWL.\n[4].EXIT";
    cin>>choice;
    switch (choice) {
        case 1: return operations(amount);

        case 2: int deposit;
             cout << "Enter Amount to deposit : ";
              cin >> deposit;
                 amount = amount + deposit;
                return operations(amount);

        case 3:int temp;
            cout << "Enter Amount to withdraw : ";
            cin >> temp;
            if(temp >= amount) {
                cout << "Insufficient Balance: " << endl;
               return operations(amount);
            }else {
                amount = amount - temp;
               return operations(amount);
            }
        case 4: cout << "Thanks Visit Again!";
                break;

        default:  cout << "Please Choose a Valid Choice from Menu:"<<endl
            ;
                return operations(amount);
    }
    return 0;
}

int main() {
    float amount = 3000;
    operations(amount);
    return 0;
}
//WHILE LOOP
#include<iostream>
using namespace std;

//POWER CALCULATION
int main(){
    int num, counter = 0;
    cout << "Enter a Number";
    cin >> num;

    while(num > 0) {
        num = num/10;
    }
    cout << num << endl;
    return 0;
}

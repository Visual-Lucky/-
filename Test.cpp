#include <iostream>
using namespace std;

float GA(int age, int gender, float ANS)
{
    // this calculates the discounted value

    if (age <= 18)
    {
        if (gender == 1)
        {
            return (ANS*.90) + 50;
        }else if (gender == 0)
        {
            return (ANS + 50);
        }
    }
    else if (age <= 30)
    {
        if (gender == 1)
        {
        return (ANS*0.90) + 300;
        }else if (gender == 0) {
            return (ANS + 300);
        }
    }
    else if (age > 30) {
        return 0;
    }

}

float TSD(float time, int SD) {
    if(SD == 1) {   // agar special din hai
        if(time <= 120) {
            return time*0.75;
        }else {
            return 90+(time-120)*1.0;
        }
    }
    else {
        if(time <= 120) {
            return (time*0.50);
        }else {
            return (60 + (time-120)*1.0);
        }
    }
}

float mallBill(int age, int SD, float time, int gender) {
    float ANS = TSD(time,SD);

    float discountedBill = GA(age, gender, ANS);

    return discountedBill;
}

int main() {
    int age, gender, SD;
    float time;

    cout<<"Enter Your Age : ";
    cin>>age;

    cout<<"\nfor Ladies [1]  and for Lads [0]\n";
    cout<<"Enter Your Gender : ";
    cin>>gender;

    cout<<"\nfor yes drop->[1] or for NO drop->[0]\n\n";
    cout<<"is Today is Any Special Ocassion : ";
    cin>>SD;

    cout << "Drop Spended Time (MUST in HRs): ";
    cin >> time;

    time = time*60;

    float bill = mallBill(age,SD,time,gender);

    if (bill == 0)
    {
        cout << "Ye Baccho ke khelne ki jgh hai!!";
    }else {
        cout << "Your Bill is : " << bill << "\nThanks Visit Again!!" ;
    }

    return 0;
}
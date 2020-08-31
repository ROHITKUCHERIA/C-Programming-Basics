#include <iostream>
using namespace std;

//  *****************inline function ******************

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline function
    //static int c=0; //This executes only once
    // c=c+1;       // next time this function is run, the value of c will be retained
    //return a*b+c;
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// ********************* constant arguments in c++ ************************
// int strlen(const char *p){

// }

int main()
{
    int a, b;
    //cout<<"Enter the value of a and b :";
    //cin>>a>>b;

    // cout<<"The product of a and b: "<<product(a,b);
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP : If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << " Rs after 1 year";

    return 0;
}
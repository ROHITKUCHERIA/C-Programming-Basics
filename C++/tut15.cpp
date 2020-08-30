#include <iostream>
using namespace std;

/* ************ Normal function in C++  *****************

int sum(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"Enter First : ";
    cin>>num1;
    cout<<"Enter Second : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2);
     return 0;
}


*/

// **************** Function Prototype ********************
//Syntex ==>  type function-name (arguments);

int sum(int a, int b); //  Here is define function prototype
void g(void);            // Acceptable
//void g();              // Acceptable
//int sum(int a, b);     // Not Acceptable
//int sum(int ,int);     // Acceptable
int main()
{
    int num1, num2;
    cout << "Enter First : ";
    cin >> num1;
    cout << "Enter Second : ";
    cin >> num2;

    // num1 & num2 are the actual parameters
    cout << "The sum is : " << sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{

    // Formal Parameters a and b will be taking values from actual parameters num1 & num2

    int c = a + b;
    return c;
}

void g()
{
    cout << "\n\nHello, Good Morning..!\n\n";
}
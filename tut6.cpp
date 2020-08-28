#include <iostream>
/*
There are two types of header files:

1: System header files : it comes with the compiler
2: User defined header files : It is written by the programmer
Example:
#include "this.h"  => this will produce an error if "this.h" is not persent in the current directory  

*/
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "Operators in C++ " << endl;
    cout << "Following are the types of operators in C++ " << endl;
    // Arithmethic operators
    cout << " The value of a+b is : " << a + b << endl;
    cout << " The value of a-b is : " << a - b << endl;
    cout << " The value of a*b is : " << a * b << endl;
    cout << " The value of a/b is : " << a / b << endl;
    cout << " The value of a%b is : " << a % b << endl;
    cout << " The value of a++ is : " << a++ << endl;
    cout << " The value of a-- is : " << a-- << endl;
    cout << " The value of ++a is : " << ++a << endl;
    cout << " The value of --a is : " << --a << endl<<endl;

    /* Assignment Operators => used to assign values to variables
    int a= 3,b=4;
    char f='d';
    */

   cout<<"Comparison Operators "<<endl;

   cout<<"The value of a == b is : "<<(a==b)<<endl;
    cout<<"The value of a != b is : "<<(a!=b)<<endl;
     cout<<"The value of a > b is : "<<(a>b)<<endl;
      cout<<"The value of a < b is : "<<(a<b)<<endl;
       cout<<"The value of a <= b is : "<<(a<=b)<<endl;
        cout<<"The value of a >= b is : "<<(a>=b)<<endl<<endl;
   
   //Logical Operators
      cout<<"Following are the logical operators in C++"<<endl;
      cout<<"The value of ((a==b)  && (a<b)) logical and operator is : "<<((a==b)  && (a<b))<<endl;
      cout<<"The value of ((a==b)  || (a<b)) logical or operator is : "<<((a==b)  || (a<b))<<endl;
      cout<<"The value of (!(a==b)) logical not operator is : "<<(!(a==b))<<endl;

    return 0;
}

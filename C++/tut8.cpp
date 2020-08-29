#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a = 34;
    // cout<<"The value of a was : "<<a<<endl;
    // a=45;
    // cout<<"the value of a is : "<<a;

    //***************Constants in C++********************
    

    //const int a = 3;                // Here " const " keyword is Constants
    // cout<<"The value of a was : "<<a<<endl;
    // a = 45;          //you will get an error because a is a constant
    // cout<<"the value of a is : "<<a;


//  ******************* Manipulators in C++ *********************


  //  1  =>  endl
  //  2  =>  setw()    from "iomanip" library

//    int a =359, b=78, c=345;
//    cout<<"the value of a without setw is : "<<a<<endl;
//    cout<<"the value of b without setw is : "<<b<<endl;
//    cout<<"the value of c without setw is : "<<c<<endl;

//    cout<<"the value of a is : "<<setw(4)<<a<<endl;
//    cout<<"the value of b is : "<<setw(4)<<b<<endl;
//    cout<<"the value of c is : "<<setw(4)<<c<<endl;


//************** Operator Precedence ***************************

int a =3, b=4;
// int c= (a*5)+b;
int c= (a*5)+b-45+87;
cout<<c;

return 0;
}

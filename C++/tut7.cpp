#include <iostream>
using namespace std;
//int c = 45;
int main()
{
    //******************Build in Data Types *************************

    // int a, b, c;
    // cin >> a >> b;
    // c = a + b;
    // cout << "Sum is : " << c << endl;
    // cout << "This is the value of global C : " << ::c;  // " :: " Scope resolution Operator

    
    // cout << "the value of d is : " << d << endl
    //      << "the value of e is : " << e;
    
    
    //******************* float, double and long double Literals  *************************

    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4f is : "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;
    // cout << "the value of d is : " << d << endl
    //      << "the value of e is : " << e;

    //****************** Reference Variables ******************************
    
    //Rohan Das ----> Monty ----> Rohu ---->  Dangerous Coder

    // float x = 455;
    // float & y =x;          // Here "&y" is the reference variable
    // cout<<x<<endl;
    // cout<<y<<endl;

    //********************** Type Casting **********************
        int a = 45;
        float  b = 42.46;
        cout<<"The value of a in float is : "<<(float)a<<endl;         // int =>  "(float)a" is the type casting
        cout<<"The value of b in float is : "<<b<<endl;
        cout<<"The value of b in int is : "<<(int)b<<endl;           // float => "(int)b" is the type casting
        cout<<"The value of b in int is : "<< int(b)<<endl<<endl;          // 2nd method of representation of type casting  
   
        int c= int(b);

        cout<<"The Expression is : "<<a+b<<endl;
        cout<<"The Expression is : "<<a+int(b)<<endl;
        cout<<"The Expression is : "<<a+(int)b<<endl;
    return 0;
}

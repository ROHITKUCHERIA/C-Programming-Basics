#include <iostream>
using namespace std;

int main()
{
    // What is a Pointer ?  ---->  data type which holds the address of other data types

    int a = 3;
    int* b = &a;               // method 1.
        //   int* b;         // method 2.
           //  b = &a;         // method 2.
   
   // ' & ' ---> ( Address of ) operator
  
  //  cout<<"The adderss of a is : "<<&a<<endl;
  //  cout<<"The adderss of a is : "<<b<<endl;

 //  ' * '  ---> ( Dereference ) operator 
 
  // cout<<"The value at adderss of b is : "<<*b<<endl;

        //******************* Pointer to Pointer ***************************
        int** c=&b;
        cout<<"The Address of b is : "<<&b<<endl;
        cout<<"The Address of b is : "<<c<<endl;
        cout<<"The value at address c is : "<<*c<<endl;
        cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
    return 0;
}

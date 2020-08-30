#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will  not swap  a and b
//    void swap(int a,int b){
//       int temp = a;
//       a=b;
//       b=temp;
//   }

// This will swap a and b  ********* "pointer reference" ( Call by Reference )*************
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variables 

//int &
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;                      // temp   a   b
    b = temp;                   //  4     4   5  <== Given
   // return a;                 //  4     5   5
}                               //  4     5   4  <== Output

int main()
{
    int a = 4, b = 5;
    cout << "The sum is : " << sum(a, b);
    cout << "\nThe value of a is " << a << " and the value of b is :" << b << endl;

    
    //swap(a,b);             // This will  not swap  a and b
    //swapPointer(&a, &b);   // This will swap a and b using pointer reference
    swapReferenceVar(a,b);   // This will swap a and b using reference variables
    //swapReferenceVar(a,b)=766;   // This will swap a and b using reference variables


    cout << "The value of a is " << a << " and the value of b is :" << b << endl;

    return 0;
}
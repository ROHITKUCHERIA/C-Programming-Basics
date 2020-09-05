#include <iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    // Creating a constructor
    // Constructor os a special member function with same name as if the class. It is automatically invoked when ever an object is created.
    // it is used to initializ the object of its class
    Complex(void); // Constructor declaration

    void printData()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)   // Default Constructor 
{
    a = 10;
    b = 0;
   cout<<"hello world"<<endl;
}

int main()
{
    Complex c;
    c.printData();
    return 0;
}



/*
Properties of constructor

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/
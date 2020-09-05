#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // below line means that non menber  - sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2); //Friend function    friend className(arg1,arg2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 12);
    c1.printNumber();

    c2.setNumber(1, 12);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend function 

1.  Not in the scope in the  class 
2.  since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3.  Can be invoked without the help of any object.
4.  Usually contans the object as arguments. 
5.  Can be declared inside public or private section of the class.
6.  It cannot access the members directly by their names and need object _name .member_name to access any member.

*/
// ************************* Copy Constructor in C++ *********************

#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(){}                    // default constructor   
    A(int x1,int y1){
        a=x1; b=y1;
    }
    A(A &obj){               // pass the reference parameter of the object 
        a=obj.a;             // using reference parameter copy the value from x1 to a  
        b=obj.b;
    }
    void show(){
        cout<<"Value of X : "<<a<<endl;
        cout<<"Value of Y : "<<b<<endl<<endl;
    }
};

int main(){
     
     A j(12,15);   // 1.Mathod to  calling constructor
     A i(j);       // 2.Mathod to  calling constructor
//   A k=j;        // 3.Mathod to  calling constructor
     i.show();
//   k.show();
     j.show();
 
return 0;
}
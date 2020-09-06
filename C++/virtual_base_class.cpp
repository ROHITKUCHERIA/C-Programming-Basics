#include<iostream>
using namespace std;
     /*      virtual class Inheritance

                        A   
                      / | \
                     B  |  C
                      \ | /
                        D
*/

class A{
    int a;
    public:
    void displayA(){
        a=10;
        cout<<"Class A "<<a<<endl;
    }
};
//class B : public  A {
class B : public virtual A {
    int b;
    public:
    void displayB(){
        b=20;
        cout<<"Class B "<<b<<endl;
    }
};
//class C : public  A {
class C : public virtual A {
    int c;
    public:
    void displayC(){
        c=30;
        cout<<"Class C "<<c<<endl;
    }
};
class D : public B,public C {
    int d;
    public:
    void displayD(){
        d=40;
        // B::displayA();
        // displayB();
        // displayC();
        cout<<"Class D "<<d<<endl;
    }
};
int main(){
  D obj;
  
  //obj.B::displayA();
  obj.displayA();
  obj.displayB();
  obj.displayC();
  obj.displayD();   
     return 0;
}
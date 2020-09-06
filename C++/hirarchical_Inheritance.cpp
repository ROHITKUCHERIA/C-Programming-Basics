#include<iostream>
using namespace std;

/*   Hirarchical Inheritance

               A           ------->  Base Class
               |
         ------------------
         |       |        |
         B       C        D   -----> Drived class
*/

class A{                        
protected:
int no;
public:
void get_no(){
    cout<<"Enter the Number : ";
    cin>>no;
}
};
class B : public A{
    public:
    void square(){
        cout<<"The square of the number : "<<(no*no)<<endl;
    }
    // void cube(){
    // cout<<"The cube of the Number : "<<(no*no*no)<<endl;
    // }
};
class C : public A{
public:
void cube(){
    cout<<"The cube of the Number : "<<(no*no*no)<<endl;
    }
};

int main(){
     B b1;
     C c1;
     b1.get_no();
     b1.square();
     b1.cube();
   
    // c1.get_no();
    // c1.cube();

     return 0;
}
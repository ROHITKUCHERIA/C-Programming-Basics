#include<iostream>
using namespace std;


/*  multiple Inheritance

             A       B    ---> Base class
             |       | 
             |       |
             ---------
                 | 
                 C        ---> Drived class 
*/


class A {
    protected:
        int m;
    public:
        void get_m(int);
};
void A :: get_m(int x){
    m=x;
}
class B{
    protected:
    int n;
    public:
    void get_n(int);
};
void B :: get_n(int y){
    n=y;
}
class C : public A,public B{
    int sum;
    public:
    void add();
    void display();
};
void C :: add(){
    
    sum=m+n;
}
void C :: display(){
    cout<<"The value of a is : "<<m<<endl;
    cout<<"the value of b is : "<<n<<endl;
    cout<<"sum is : "<<sum<<endl;
}

int main(){
     int m,n;
    cout<<"value of m is : ";
    cin>>m;
    cout<<"value of n is : ";
    cin>>n;
     C obj;
     obj.get_m(m);
     obj.get_n(n);
     obj.add();
     obj.display();
     return 0;
}
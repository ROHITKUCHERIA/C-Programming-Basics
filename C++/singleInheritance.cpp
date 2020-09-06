#include<iostream>
using namespace std;


/*      single Inheritance

             A   ------> base class 
             |
             B   ------> drived class
*/
class A{
    int a;
    public:
    void getval_a(int);
    int get_a();
};
class B : public A{
    int b,c;
    public:
    void getval_b(int);
    void add();
    void display();
};

void A :: getval_a(int x){
    a=x;
}
int A :: get_a(){
    return a;
}
void B :: getval_b(int x){
    b = x;
}
void B :: add(){
    c = get_a();
    c=c+b;

}
void B :: display(){
    cout<<"value of a : "<<get_a()<<endl;
     cout<<"value of b : "<<b<<endl;
     cout<<"addtion of " <<get_a()<<" and "<<b <<" is : "<< c <<endl;
}

int main(){
    int a,b;
    B obj;
    cin>>a>>b;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.display();
     return 0;
}
#include<iostream>
using namespace std;

class Base{
    public:
    void disp(void){
        cout<<"Base class disp"<<endl;
    }
    virtual show(void){
        cout<<"Base class show"<<endl;
    }
};

class Drived : public Base{
    public:
    void disp(void){
        cout<<"Drived class disp"<<endl;
    }
      show(void){
        cout<<"Drived class show"<<endl;
    }
};
int main(){
     Base *p;
     Base objb;
     Drived objd;
     p= & objb;
     p->disp();
     p->show();
     p=& objd;
     p->disp();
     p->show();
     return 0;
}
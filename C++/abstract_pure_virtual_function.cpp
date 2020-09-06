#include <iostream>
using namespace std;

class Base{            // ---> Abstract  Base  class
public:
    virtual void disp() = 0;
};
class D : public Base{
public:
    void disp(){
        cout << "Drived Class";
    }
};

int main()
{
    D obj; 
    Base *ptr;
    ptr = & obj;
    ptr->disp();

   // obj.disp();
    return 0;
}
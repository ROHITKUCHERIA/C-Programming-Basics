/*      OOps  - Classes and objects

        C++  --> initially called   -->  C with classes by stroustrop
        class  --> extension of structures (in C)
        structures  had limitations
             - members are public
             - No methods
        classes --> structures + more         
        Classes --> can have methods and properties 
        Classes --> can make few members as private & few as public
        Structures in c++ are typedefed
        you can declare objects along with the class declarion like this :

            class Employee{
                Class defination
            }        rohit,rohan,lovish;

        harry.salary = 8 makes no sense if salary os private

        
*/

//   *************** Nesting of member functions **********************

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number : ";
    cin >> s;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format...! " << endl;
            exit(0);
        }
    }
    cout << "binary Number..!" << endl;
}

void binary ::ones(void)
{
            chk_bin();           //           Nesting of Member function in C++

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Display your binary number :";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << "\n";
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}
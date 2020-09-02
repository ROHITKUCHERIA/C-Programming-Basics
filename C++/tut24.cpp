// ******************* Static Data Members & Methods in c++ ****************

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // ek hi variable ko sare objects share krte h static varible me and by default value static variable ki 0 rhti h ...!!!!
public:
    void setData(void)
    {
        cout << "Enter the id : " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is : " << id << endl;
        cout << "The is of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
       // cout<<id;  //throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
// Count is the static datamember of class Employee
int Employee ::count = 1000; //Default value is 0
int main()
{

    Employee e1, r1, l2;
    // e1.id=1;   cannot do this as id and count are private
    e1.setData();
    e1.getData();
    Employee::getCount();
    
    r1.setData();
    r1.getData();
    Employee::getCount();
    
    l2.setData();
    l2.getData();
    Employee::getCount();
    
    return 0;
}
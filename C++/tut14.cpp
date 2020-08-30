#include<iostream>
using namespace std;
//  ************************  Structure in C++ *********************
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// **************** typedef function in C++ ********************

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// int main(){     
//      struct employee rohit;
     // struct ep rohit;         // ********* 'ep' ep ==> employee ( using typedef function ) *******
    
 /*   struct employee manish;
     struct employee ashok;
     struct employee rajesh;
*/

/*   rohit.eId = 1;
     rohit.favChar = 'c';
     rohit.salary = 120000;
     cout<<"The value is : "<<rohit.eId<<endl;  
     cout<<"The value is : "<<rohit.favChar<<endl;
     cout<<"The value is : "<<rohit.salary<<endl;
*/

// ********** union in C++ **********************
// union money
// {
//     int rice;      // 4 bytes
//     char car;      // 1 bytes
//     float pounds;  // 4 bytes 
// };
// int main(){
//         union money m1;
//         m1.rice = 34;
//         m1.car = 'c';
//         cout<<"value of rice : "<<m1.rice<<endl;     // In union we can use only one variable memory because union Share all the memory with all variable..That's way we can use only one variable memory. 
//         cout<<"value of car :"<<m1.car<<endl;    

// ****************  Enum in C++ **********************

// int main() {
//     enum Meal{ breakfast, lunch, dinner};
//     Meal m1 = breakfast;

//     cout<<"Value of m1 : "<<m1<<endl;
//     cout<<"True false condition : "<< (m1==1)<<endl<<endl;   // True condition  m1=1  & 1 also = 1 ==> true 
    
//     cout<<breakfast<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;


    return 0;
    }

     
       
#include<iostream>
using namespace std;
int main()
{
    /* Loops in C++ :
        There are three types of loops in C++:
            1. For loop
            2. While loop
            3. do-While loop 
    */
/*        for loop in C++

       int i=1;
       cout<<i;
       i++;
 */

 /*  ********* Syntax for for loop ********************
            for(initialization; condition; updation)
            {
                loop body(C++ code);
            }
*/

        // for (int i = 1; i <= 40; i++)
        // {
        //     /* code */
        //     cout<<i<<endl;
        // }
 
 
 //  ************ Example of infinite loop  *******************

        // for (int i = 1; 39 <= 40; i++)
        // {
        //     /* code */
        //     cout<<i<<endl;
        // }
    
    // ********************* While loop in c++ **********************

    /* Syntax :
        While (condition)
        {
            C++ statements;
        }
    */

   // Printing 1 to 40 using while loop

// int i=1,n;
// cin>>n;
//    while(i<=n){
//        cout<<i<<endl;
//        i++;
//    }
 
 // *********** infinite while loop ************

//  int i=1,n;
// cin>>n;
//    while(true){
//        cout<<i<<endl;
//        i++;
//    }

//******* D0 while loop ********************
/*  Syntax :
    do
        {
            C++ statements;
        }while(condition);
*/
// Printing 1 to 40 using while loop

// int i=1,n;
// cin>>n;
// do
// {
//     cout<<i<<endl;
//     i++;
// } while(i<=n);

//*************** Print 6 Multiplication table ********************* 
int i,n;
cout<<"enter the No of table You want : ";
cin>>n;
for(i=1;i<=10;i++){
    cout<<i<<" * "<<n<<" = "<<i*n<<endl;
}
       return 0;
}

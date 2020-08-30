#include<iostream>
using namespace std;

int main(){

    // ************************* Array Examples ************************** 
     int marks[4] = {23, 45, 56, 89};
        
        // cout<<"These are Marks"<<endl;
        // cout<<marks[0]<<endl;
        // cout<<marks[1]<<endl;
        // cout<<marks[2]<<endl;
        // cout<<marks[3]<<endl;
// You can change the value of an array 

       // marks[2]=455;
      //  cout<<"Changed value of Marks 2 : "<<marks[2]<<endl;
      //  cout<<marks[3]<<endl;

        // int mathMarks[4];
        // mathMarks[0]=34;
        // mathMarks[1]=98;
        // mathMarks[2]=12;
        // mathMarks[3]=63;

   // cout<<"These are math Marks"<<endl;
        // cout<<mathMarks[0]<<endl;
        // cout<<mathMarks[1]<<endl;
        // cout<<mathMarks[2]<<endl;
        // cout<<mathMarks[3]<<endl;

        // Print all the marks value using for loop 

// for ( int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks :" <<i<<" is "<<marks[i]<<endl;
// }

//************* Quick quiz :  Do the same using while and do-while loops ?  *****************

// ******************* using do-while loop ***************************************
// int i=0;
//  do
//  {
//     cout<<"The value of marks :" <<i<<" is "<<marks[i]<<endl;
//     i++;
//  } while (i<4);

//*************************** using while loop ***********************************
// int i=0;
// while(i<4)
// {
//     cout<<"The value of marks :" <<i<<" is "<<marks[i]<<endl;
//     i++;
// }

// **************** Pointer and Arrays *****************

int* p=marks;
cout<<*(p++)<<endl;
cout<<*(++p);
// cout<<"The value of *p is : "<<*(p+0)<<endl;
// cout<<"The value of *(p+1) is : "<<*(p+1)<<endl;
// cout<<"The value of *(p+2) is : "<<*(p+2)<<endl;
// cout<<"The value of *(p+3) is : "<<*(p+3)<<endl;

     return 0;
}
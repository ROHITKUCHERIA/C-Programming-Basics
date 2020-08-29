#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter the no : ";
    cin>>n;

//************* Break **********************

    // for ( i = 0; i < n; i++)
    // {
    //     cout<<i<<endl;
    //   if(i==5){
      
    //       break;
    //   }
      
    // }
//  **************** Continue **************

    for ( i = 0; i <= n; i++)
    {
      
      if(i==2){
          continue;
      }
        cout<<i<<endl;
      
    }
         
    return 0;
}
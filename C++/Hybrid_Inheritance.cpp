
#include<iostream>
using namespace std;

     
     /*      Hybrid Inheritance

               Student 
                  |
                test
                  |        Sports
                  |           |
                  | -----------
                result
*/

class Student {
    int roll;
    public:
    void getroll(int x){
        roll=x;
    }
    void put_roll(){
        cout<<"Roll number is : "<<roll<<endl;
    }
};
class test : public Student{
    protected:
    float t1,t2;
    public:
    void get_marks(float x,float y){
        t1=x;
        t2=y;
    }
    void put_marks(){
        cout<<"Marks Obtained "<<endl;
        cout<<"Test 1 : "<<t1<<endl;
        cout<<"Test 2 : "<<t2<<endl;
    }
};
class sports{
    protected:
    float s;
    public:
    void puts(float x){
        s = x;
    }
    void put_score(){
        cout<<"Sports Score : "<<s<<endl;
    }
};
class result : public test , public sports{
    float total;
    public:
    void display_total(){
      
        total = t1+t2+s;
        put_roll();
        put_marks();
        put_score();
        cout<<"Tatal Score : "<<total;
}
};
int main(){
result r1;
r1.getroll(101);
r1.get_marks(80.5,82.3);
r1.puts(30.3);
r1.display_total();
     return 0;
}

/*

// hybrid inheritance.cpp
#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B()      //constructor to initialize x in base class A
 	{
 	   x = 10;
 	}
};
class C
 {
 	public:
 	int y;
 	C()   //constructor to initialize y
 	{
 	    y = 4;
    }
};
class D : public B, public C   //D is derived from class B and class C
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	}
};

int main()
{
         D obj1;          //object of derived class D
 	obj1.sum();
 	return 0;
}               	//end of program
*/
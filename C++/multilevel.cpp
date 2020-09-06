#include<iostream>
using namespace std;

/*    multilevel Inheritance

               A    ------> base class
               |
               B    ------> Intermidate class 
               |
               C    ------> drived class
*/


class stu
{
 protected:
int roll;
public:
void get_roll(int);
void put_roll();
};    
void stu :: get_roll(int x){
    roll=x;
}
void stu :: put_roll(){
    cout<<"roll no : "<<roll<<endl;
}
class test  : public stu{
    protected:
    float m1,m2;
    public:
    void get_marks(float,float);
    void put_marks();
};
void test :: get_marks(float x,float y){
    m1=x;
    m2=y;
}
void test :: put_marks(){
    cout<<"marks in subject m1 is "<<m1<<" and m2 is "<<m2<<endl;
}
class result : public test{
    int total;
    public:
    void display();
};
void result :: display(){
    total = m1+m2;
    put_roll();
    put_marks();
    cout<<"Result is : "<<total<<endl; 
}


int main(){
 result obj;
 obj.get_roll(101);
 obj.get_marks(53.3,70.1);
 obj.display();    
     return 0;
}
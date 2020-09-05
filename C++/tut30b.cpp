#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}


class point{
  
	int x,y;
	friend void findDistance(point o1, point o2);
 
	public:
		point(int a, int b){
 
			x = a;
			y = b;
		}
};

void findDistance(point o1, point o2){
	double result;
	result = sqrt(pow((o2.x - o1.x),2)+ pow((o2.y - o1.y),2));
	cout<<result;
}"""

can you see the code

"""
int main(){
        point p1(5,6), p2(3,4);
       findDistance(p1, p2);
       return 0;
}

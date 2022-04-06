#include<iostream>

using namespace std;

class Point{
	double x;
	double y;
public:
	Point(){ x=0; y=0; cout << "Calling Default constructor" <<endl; } //default constructor
	Point(double x, double y) { x=x;y=y; cout << "Calling Parameterized constructor" <<endl;} //Parameterized constructor
	Point(const Point& rhs) {x=rhs.x;y=rhs.y; cout << "Calling copy constructor" << endl; } //copy constructor

	//getters 
	double getX() { return x; }
	double getY() { return y; }

};

int main(){
	
	Point p1;

	//this will call the parametrized constructor
	Point p2(1.5,1.3);
	
	//this will call the copy constructor
	Point p3 = p1;	

	
	cout << p3.getX() << endl;
	cout << p3.getY() << endl;
	
	return 0;
}

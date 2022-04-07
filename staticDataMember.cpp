#include<iostream>
#include<string>
using namespace std;

class Base{
public:
	int x;
	static int y;
	void printx()  { cout<< "x:" << x <<endl;} //nonstatic can make use of static and non static data member.
	static void printy()  { cout<< "y:" << y <<endl;}
//	static void printy()  { cout<< "y:" << y << " x:" << x <<endl;}   //static member function can only use static datamember not non-static member.

};

int Base::y; //for static data member explict memory allocation is required ouside the class.

int main(){
	Base b1,b2;
	b1.x=20;
	b1.y=30; // can be also written as Base::y=30;
	b2.x=40; 
	b2.y=50; //can be also written as Base::y=50;
	
	b1.printx();
	Base::printy();

	b2.printx();
	b2.printy();
	
	return 0;
}

#include<iostream>
using namespace std;

//this is to initialize data members of classes.
//two ways are there 
//using {} this is preffered as this gives warning in case narrowing conversion or anything like this happen
//using () this will not give warning and mey result unexpected behaviour.


class Base{
	int x;
	int y;
public:
	//Base(int a,int b):x{a},y{b} {}
	Base(int a,int b):x(a),y(b) {}
	void print() { cout << x << " " << y << endl;}

};
int main() {
	Base b(300,100);
	b.print();
	
	return 0;
}

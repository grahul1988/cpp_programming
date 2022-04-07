#include<iostream>
#include<string>

using namespace std;

class Circle{
	const float pi = 3.14;
	float r;
public:
	Circle(float a) {r=a;
	cout<<"P Constructor called radius initialized" <<endl;} 

	float getArea() {return r*r*pi;}
};

class Phone{
	const string pname;
	int memsize;
public: 
	//initializer list can only we used with constructors
	Phone(string name,int size):pname{name},memsize(size) {}
	
	string getPhoneName() { return pname;}
//	void changePhoneName(string str) {pname=str;} // this will not be allowed once object is initilized with a value, that value can'tbe change.
};


int main(){
	
	Circle c1(3.2),c2(10);
	c1.getArea();
	c2.getArea();

	Phone p1("MotoG4 play",32),p2("Iphone 5",8);

	cout << p1.getPhoneName() <<endl;
	cout<< p2.getPhoneName() <<endl;
	

	return 0;
}

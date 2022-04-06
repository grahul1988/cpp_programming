//TOPIC: const keyword on function overloading in c++
//
//1. C++ allow to overload member function on the basis of const and non-const
//2. const parameters allows to overload member functions and normal function but it should be reference/pointer.


#include<iostream>
using namespace std;

class Test{
	int x;
public:
	Test(int x=0):x{x} {}
// Below is not allowed
//	void print(int val) { cout << val << endl; }
//	void print(const int val) { cout << val << endl; }

// By reference
//	void print(int& val) { cout << val << endl; }
//	void print(const int& val) { cout << val << endl; } 

// By pointer
	void print(int* val) { cout << *val << endl; }
	void print(const int* val) { cout << *val << endl; }

	void toprint() { cout << "non- constant" << endl; }
	void toprint() const { cout << "constant" << endl; }	
};

int main(){
	Test t;
	const Test t1;
	int k =10;
	const int p=20;
	t.print(&k);
	t.print(&p);

	t.toprint();
	t1.toprint();
	
	return 0;
}

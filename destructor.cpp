#include<iostream>
using namespace std;

class Base {
	int *x;
public:
	Base() { cout <<"Default Constructor" <<endl; }
	Base(int *a):x{a} { cout << "Paramterized constructor" <<endl; }

	//destructor can not be a parameterized.
	~Base(){
		delete x;
		cout << "Destructor called" <<endl;
	}


};

int main(){
	
	Base b(new int(10)); //dynamically allocating memory using new operator. this will pass address to parametrized constructor and received by a pointer.
//	b.~Base(); // this is explicit call of destructor, so if we call it there will 2 call for destructors.
	return 0;
}

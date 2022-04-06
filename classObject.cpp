#include<iostream>
#include<string>

using namespace std;

//by default data members and members functions are private to class.
//Access specifiers: can be private public or protected.

class Phone{
	
	string p_name;
	string p_size;
public:
	//constructor
	Phone(string name,string size){

		p_name = name;
		p_size = size;	
	}

	void makeCall(){
		cout << "Making call from phone " << p_name <<endl;
	}

	void receiveCall(){
		cout << "Receiving call from phone " << p_name <<endl;
	}

};


int main(){
	
	//creating object
	Phone Iphone("I-phone","1048*768");
	Iphone.makeCall();
	Iphone.receiveCall();

	cout << endl;

	Phone gPixel("GooglePixel","1048*720");
	gPixel.makeCall();
	gPixel.receiveCall();


	return 0;
}

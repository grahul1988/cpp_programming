#include<iostream>
using namespace std;

void updatebyref(int& x){
	
	x = x+ 10;
	
}

int main(){
	
	int value=10;

	cout << "Value before update: " << value << endl;
	updatebyref(value);
	cout << "Value after update: " << value << endl;


	return 0;
}

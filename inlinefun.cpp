#include<iostream>
using namespace std;

inline void printMe(string str){
	cout << str << endl;
}

int main(){

	for(int i=0;i<1000;i++)
	{	
		printMe("Hello from inline func");
	}
	
	return 0;
}

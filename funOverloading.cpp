#include<iostream>
using namespace std;


//Scenario where we can think of overoading... say we have to write a function to get list of persons from DB based on different input types to the function 
//like DOB , by name, by string, by age etc. so we can have a functiion name say getPersonList with different argument type to  overload it.

// RULES where FUNCTION OVERLOADING WILL NOT WORK
// 1. Function declaration that differs only in th return type.
// 2. In class if we have similar function name and parameter but one is static and other non static.
// 3. When we recieve  array as pointer  or array both are similar.
// 4. const and volatile doen't  make any difference.
// 5. two functions parameteres are equire but they differ only by one of them is having default parameter.


/*
//As per rule 2 above such decalaration will not work for function overloading.

class Base{
public:
	static void fun(int x){}
	void fun(int x){}
};
*/

void add(int x,int y){
	
	cout <<"Calling add int function" << endl;
}

void add(double x,double y){
	
	cout <<"Calling add double function" << endl;

}

int main(){

	add(1,3);
	add(1.2,2.2);

	return 0;
}


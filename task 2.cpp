//Laiba Shakeel
//2024-csr-042
//lab1 -task 2

#include<iostream>
using namespace std;

int main () {
	int a=20;    //create variable a with value 20
	int*p =&a;   //pointer p stores address of a
	
	cout<< "a before:" <<a<< "\n";
	*p =*p + 5;    //deference p-> changes a value to 25
	cout<< "a after:" << a << "\n";   //prints 25
	return 0;
}

     //Laiba Shakeel
     //2024-csr-042
     //Lab 1-task 1

#include<iostream>      // include inpiut-output library
using namespace std;
int main() {
	int x = 42;      // create an integer variable  x with value 42
	int * p= &x;     // *p= value at address of x->42
	int**q =&p;      // **q = value at address of p->42
	
	//prints values step by step 
	cout<<"x:" << x<< "\n";
	cout<<"*p:"<<*p << "\n";
	cout<<"**q:" << **q <<"\n";
	
	**q=100;           //change x value via q
	cout<< "After **q =100, x:"  <<x <<"\n";   //prints 100
	return 0;
} 

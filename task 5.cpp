//Laiba Shakeel
//2024-csr-042
//lab 1- task 5


#include<iostream>
using namespace std;
int main () {
	int * p =new int(50);     //dynamically allocate memory for one int,ste value = 50;
	cout << "*p before delete: "<< *p << "\n";   //prints 50
	
	
	delete p;    // free the memory 
	
	cout<< "Pointer safely set to nullptr after delete.\n";
	return 0;
}

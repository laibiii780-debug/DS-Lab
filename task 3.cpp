//Laiba Shakeel
//2024-csr-042
//lab 1-task 2


#include<iostream>
using namespace std;
 int main () {
 	//Array  of pointers to string literals
 	const char*names[]= {"Ali","Sara","Azeem","Noor","Hamza"};
 	 // Find how many names are there in a array 
 	 int n =sizeof(names)/sizeof(names[0]);
 	    //print each name
 	    for (int i = 0;i < n; ++i) {
		 cout << "names["<< i <<"] ->" <<names[i] << "\n";
	}
	//change the 3rd element (Azeem) to point to "Fatima"
	const char*replacement ="Fatima ";
	names[2]=replacement;
	  
	  cout<<"After change,name[2] -> " << names[2] << "\n";
	  return 0;
 }

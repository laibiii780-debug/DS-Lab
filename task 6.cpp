//Laiba Shakeel
//2024-csr-042
//lab1-task 6

#include<iostream>
using namespace std;

   //function that leaks memory 
   void leaky() {
   	int* data=new int [100] ;   //allocate memory
   	//forget to free memory -> leak 
   }
      
       //function that frees memory properly
       void fixed() {
       	int*data =new int [100];    //allocate memory
       	delete[] data;
	   }
	   
	   int main () {
	   	   // call leaky function many items -> memory wated 
	   	   for (int i =0; i<10000; ++i) {
	   	   	fixed();
			  }
			  cout<<"Fixed loop done (no leaks).\n";
			  return 0;
	   }

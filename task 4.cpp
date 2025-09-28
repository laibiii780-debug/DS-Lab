//Laiba Shakeel
//2024-csr-042
//lab 1-task 3


#include<iostream>
using namespace std;
int main () {
	int n;
	cout<< "How many scores?" ;   //ask users from number of scores
	cin >> n;                    //input n from keyboard
	    // create an array of integers at runtime using 'new'
	    int * scores =new int [n];
	    
	    //Input the scores 
	    cout<< "Enter "<< n<< "scores :\n";
	    for (int i = 0; i <n; ++i) {
	    	cin >> scores[i];     //store each score in the array
		}
		//Calculate the sum of scores 
		long long sum = 0;
		for (int i =0;i<n; i++) {
			sum += scores[i];
		}
		//Print the average 
		cout<< "Average =" <<(double) sum / n << "\n";
		return 0;
	}
		  
		  
		  
	

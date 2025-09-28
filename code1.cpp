#include<iostream>        //include input/output library
using namespace std;       // use standard namespace
 int main ()   {
    int A[10] = { 2,6,8,7,1};    //array of size 10 but only 5 element
    int size = 5;
    int pos =3;
    int val = 9;

    //shift elements right from the end until position 
    for(int i = size; i> pos; --i) {
        A[i] = A[i-1];
    }
    A[pos]= val;    //insert the new value
    size ++;         // update logiacl size
    cout<< "After Insertion:" ;
    for(int i=0; i <size; i++)
    cout<<A[i] << "";   //print updated array
    cout<<endl;
    return 0;
 }


#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void Fibb (int n){

	int a = 0;
	int b = 1;
	
	int c;
	
		cout << "Your Fibonacci Series is : " <<a <<" , "<<b ;

	for (int i = 2; i < n; ++i)
	{
		
		c =  a + b;

 		cout<< " , "   << c ;
        
        a = b;
 	     b = c;
 		//arr[i] = temp;

	}
}


int main() {

	int n;

	cout << "Enter the number os elements you wish for your fibonacci series" << endl;
	cin >> n;


	Fibb(n);
}
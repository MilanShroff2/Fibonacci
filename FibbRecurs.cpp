#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int Fibb (int n){
    if(n == 0)
    return 0;
    
	if ( n == 1)
		return 1;

	if (n > 1)
		return Fibb(n - 1) + Fibb (n - 2);
}

int main() {

	int n;

	cout << "Enter the number os elements you wish for your fibonacci series" << endl;
	cin >> n;
	cout << "Fibonacci Series is: " ;
	for (int i = 0; i < n; i++){
	    cout <<" " << Fibb(i);
	}

}
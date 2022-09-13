#include <iostream>
using namespace std;

int main() {
	int number = 0;
	int sum = 0;
	
	do {
		sum += number;
		
		// take input from the user 
		cout<< "enter your number: ";
		cin >> number;
	}
	while (number >=0);
	
	//display the sum
	cout<< "\nthe sum is "<<sum<< endl;
	return 0;
}

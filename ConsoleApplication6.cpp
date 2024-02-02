/*Problem #1: Is it Even?
● Write a program that reads a positive integer and test if it is even or note
● Find at least 3 different ways for this task:
○ Using only %2
○ Using only /2
○ Using only %10*/
#include <iostream>
using namespace std;
int main()
{
	bool even;
	int n;
	cout << "Enter any number: ";
	cin >> n;
	even = n % 2;
	cout << "Number is even? by %2: " << !even << endl;
	even = n / 2.0 - n / 2;
	cout << "Number is even? by /2 : " << !even << endl;
	even = n % 10;
	cout << "Number is even? by %10(number must be >= 10): " << !even;


}


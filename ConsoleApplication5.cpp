//Problem #3: Our Remainder
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The reminder is: " << a - (a / b) * b;
}


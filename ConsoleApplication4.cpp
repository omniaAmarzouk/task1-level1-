/*Problem #2: Fractional Part
● Write a program that reads in 2 real numbers, a and b, and then divides
them (a/b), but prints out only the fraction part
● Input: 201 25
● Output: 0.04
○ Notice: 201 / 25 = 8.04
○ We only want the fraction part: 0.04*/

#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "Enter two real numbers: ";
	cin >> a >> b;
	cout << "the fraction part result by dividing two numbers is: " << (a / b) - (int)(a / b);
}


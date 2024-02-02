/*● For each expression:
○ Step-by-step, manually simplify these until they are simply T or F
○ Optional: write a line of code to verify your result
● T && T && F && T
● T && T && F && T || T && T
● T && T && T && T || T && (T || F)
● T && T && T || T && (F || (T && (T && T)))
● T && T || T && F && T || T && T && F || (T && (T || F))
● T && T || T && F && T || (T && T && F || (T && (T || F)))
● (T && T || T && F && T || T) && T && F || (T && (T || F))
● T && T || T && (F && T || T && T) && F || (T && (T || F))*/

#include <iostream>
using namespace std;
int main()
{
	cout << (1 && 1 && 0 && 1 )<< endl;
	cout << (1 && 1 && 0 && 1 || 1 && 1 )<< endl;
	cout << (1 && 1 && 1 && 1 || 1 && (1 || 0)) << endl;
	cout << (1 && 1 && 1 || 1 && (0 || (1 && (1 && 1)))) << endl;
	cout << (1 && 1 || 1 && 0 && 1 || 1 && 1 && 0 || (1 && (1 || 0))) << endl;
	cout << (1 && 1 || 1 && 0 && 1 || (1 && 1 && 0 || (1 && (1 || 0)))) << endl;
	cout << ((1 && 1 || 1 && 0 && 1 || 1) && 1 && 0 || (1 && (1 || 0))) << endl;
	cout << (1 && 1 || 1 && (0 && 1 || 1 && 1) && 0 || (1 && (1 || 0))) << endl;
}


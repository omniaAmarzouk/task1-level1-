﻿/*  Homework 2: Create your own Logic!
● Write a program that reads in integers for 3 classroom-related variables:
○ Number of boys (nb), number of girls (ng), number of teachers (nt)
● Prepare and print a boolean variable for these cases:
● nb greater than 25
● ng less than or equal to 30
● nb > 20 and nt > 2, or ng > 30 and nt > 4
● Either nb < 60 or ng < 70
● Neither nb >= 60 nor ng >= 70
● nb is 10 more than ng
● The difference between nb and ng is more than 10 or nt > 5
● Either nb is 10 more than ng, or ng is 15 more than nb*/
#include <iostream>
using namespace std;

int main()
{
    int nb, ng, nt;
    cout << "Enter number of boys,girls and teachers: ";
    cin >> nb >> ng >> nt;
    cout << (nb > 25) << endl;
    cout << (ng <= 30) << endl;
    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << endl;
    cout << (nb < 60 || ng < 70) << endl;
    cout << (!(nb >= 60 || ng >= 70)) << endl;
    cout << (10 * nb > ng) << endl;
    cout << ((nb - ng) > 10 || nt > 5) << endl;
    cout << (10 * nb > ng || 15 * ng > nb) << endl;
}


/*
COP 3014
Assignment 5
Date: 04/05/2024
Author: Ellie Garcia
*/
#include "Rationals.h"
#include<iostream>
using namespace Garcia_Rationals;
using namespace std;


int main()
{

Rationals test(4,3), test2; 
Rationals test1(5,2);

cout << "Please enter your rational number: " << endl; 
cin >> test2; 
cout << test2 << endl; 

cout << test1 << " + " << test2 << " = " << test1+test2 << endl; 
cout << test << " - " << test1 << " = " << test-test1 << endl; 
cout << test << " * " << test1 << " = " << test*test1 << endl; 
cout << test << " / " << test1 << " = " << test/test1 << endl; 

return 0; 
}
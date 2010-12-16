//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 3
//
//  Write a program that prompts the user to enter a number and then uses a 'for' loop to
//  calculate the faculty of the given number and writes it to the standard output.
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void) {
	int f;
	cout << "Number: ";
	cin >> f;
	int erg = 1;
	for(int i = 1; i <= f; i++){
		cout << i;
		if (i != f) cout << "*";
		erg = erg*i;
	}
	cout << endl <<"!" << f << " = " << erg << endl;
	return EXIT_SUCCESS;
}



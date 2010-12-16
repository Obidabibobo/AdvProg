//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 1
//
//  Write a program that prompts the user for two numbers and writes each number in the range
//  specified by the two numbers to the standard output.
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void) {
	int f,g;
	cout << "Number1: ";
	cin >> f;
	cout << "Number2: ";
	cin >> g;

	if(f > g){
		std::swap(f,g);
	}
	for(int i = f; i <= g; i++){
		cout << i << " ";
	}
	cout << endl;
	return EXIT_SUCCESS;
}




//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 9
//
//  Write a program to read two 'std::string's and report the sizes of the 'std::string's
//  and whether the 'std::string's are equal. If not, report which of the two is the larger.
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str1,str2;
	cout << "First Input: ";
	getline(cin,str1);
	cout << "Second Input: ";
	getline(cin,str2);

	cout << "Size of String1: " << str1.size() << endl;
	cout << "Size of String2: " << str2.size() << endl;
	if(str1 == str2)
		cout << "Strings are equal" << endl;
	else{
		cout << "Strings are not equal" << endl;
		if(str1.size() == str2.size())
			cout << "Size of Strings are equal" << endl;
		else if(str1 > str2)
			cout << "First string is larger" << endl;
		else
			cout << "Second string is larger" << endl;
	}
	return EXIT_SUCCESS;
}



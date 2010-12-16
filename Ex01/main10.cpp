//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 10
//
//  Write a program to strip the punctuation from a 'std::string'. The input to the program
//  should be a string of characters including punctuation; the output should be a 'std::string'
//  in which the punctuation is removed.
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h> 

using namespace std;


// Functor for caling ispunkt
struct MyIsPunct
{
   inline bool operator()(const char c) { return ispunkt(c); }
};

int main(void) {
	string str;
	cout << "Input: ";
	getline(cin,str);

	//erase remove idiom
	str.erase(remove_if(str.begin(), str.end(), MyIsPunct() ), str.end());

	cout << str << endl;
	return EXIT_SUCCESS;
}



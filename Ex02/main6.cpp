//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 6
//
//  Rewrite the previous program (main5.cpp), but this time use 'vector's instead of plain arrays.
//
//================================================================================================
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct PrintVec{
	inline void operator()(const int a){cout << a << " ";}
};

typedef int myType;

int main(void) {
	//Size of the Array
	const unsigned int size = 10;

	//Allocate Array
	vector<myType> vec;
	//Init Array
	for (unsigned int i=1; i<=size; ++i) vec.push_back(i);

	//Print Vecgtor
	for_each(vec.begin(),vec.end(),PrintVec());
	  cout << endl;

	//Allocate Second Array
	vector<myType> vec2 = vec;

	//Elementwise comparision
		for(unsigned int i = 0; i < size; i++)
			cout << (vec[i] == vec2[i]) << " ; ";
		cout << endl;

	//Print Vector
		for_each(vec.begin(),vec.end(),PrintVec());
		  cout << endl;

	return EXIT_SUCCESS;
}



//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 11
//
//  Write a program to create a 'std::vector<int>' with 10 elements of your choice. Print the
//  initial elements. Using an iterator, assign each element a value that is twice its current
//  value. Afterwards, print the content of the vector again (using 'const_iterator's).
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct PrintVec{
	inline void operator()(const int a){cout << a << " ";}
};

struct doubleVal{
	inline void operator()( int& a){ a *= 2;}
};


int main ()
{
  vector<int> vec;
  for (int i=1; i<=10; ++i) vec.push_back(i);

  for_each(vec.begin(),vec.end(),PrintVec());
  cout << endl;

  for_each(vec.begin(),vec.end(),doubleVal());

  for_each(vec.begin(),vec.end(),PrintVec());
  cout << endl;

  return EXIT_SUCCESS;
}



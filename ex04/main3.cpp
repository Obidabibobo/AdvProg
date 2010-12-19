//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 4 - Task 3
//
//  Write a function to produce the Fibonacci sequence. Use this function to fill a
//  'vector<string>' with the first ten Fibonacci numbers. Sort the vector lexicographically
//  and print the resulting sequence to the screen.
//
//=================================================================================================

#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

template <typename T>
struct PrintVec{
	inline void operator()(const T val){cout << val << " ";}
};

unsigned int fib(unsigned int n){
   if(n == 0 || n == 1) return 1;
   else return fib(n-2) + fib(n-1);
}

int main(void){
 
  vector<string> str_vec;

  for(unsigned int i = 0; i < 10;++i){
    stringstream sstream;
    sstream << fib(i);
    str_vec.push_back(sstream.str());
  }
  sort(str_vec.begin(),str_vec.end());
  
  //Print Vector
    for_each(str_vec.begin(),str_vec.end(),PrintVec<string>());
	  cout << endl;
    
    return 0;
  
  
}



//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 4 - Task 7
//
//  Using the following definition of 'ia', copy 'ia' into a 'vector' and into 'list'. Use the
//  single iterator form of 'erase' to remove the elements with odd values from your 'list' and
//  the even values from your 'vector'.
//
//  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
//
//=================================================================================================
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
struct PrintContainer{
	inline void operator()(const T val){cout << val << " ";}
};

int main(void){
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  vector<int> ivec(ia,ia+sizeof(ia)/sizeof(int));
  list<int> ilist(ia,ia+sizeof(ia)/sizeof(int));
  
  for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); ) {
     if (0 == *it % 2) it = ivec.erase(it);
     else ++it;
  }
  
  for (list<int>::iterator it = ilist.begin(); it != ilist.end(); ) {
     if (1 == *it % 2) it = ilist.erase(it);
     else ++it;
  }
  
    //Print Vector
    for_each(ivec.begin(),ivec.end(),PrintContainer<int>());
	  cout << endl;
    
      //Print List
    for_each(ilist.begin(),ilist.end(),PrintContainer<int>());
	  cout << endl;
}



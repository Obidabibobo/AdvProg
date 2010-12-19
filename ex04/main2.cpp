//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 4 - Task 2
//
//  Write a program to read in a file containing several words, sort them alphabetically, and
//  write them to a second file. Note that both filenames should be specified on the command
//  line: './main2 file1.in file2.out'.
//
//=================================================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
struct PrintVec{
	inline void operator()(const T val){cout << val << " ";}
};


int main(int argc, char* argv[]){
	if(argc != 3){
		cout << "Error: not enough arguments" << endl;
		cout << "Example: ./main2 file1.in file2.out" << endl;
	}
	
	string word;
    vector<string> vec_words;
    fstream filestr;
  
    filestr.open(argv[1],fstream::in);	
      while(filestr >> word) {vec_words.push_back(word);}
    filestr.close();
    
    //Print Vector
	for_each(vec_words.begin(),vec_words.end(),PrintVec<string>());
	  cout << endl;

   //Sort Vector
    sort(vec_words.begin(),vec_words.end());
    //Print Vector
	for_each(vec_words.begin(),vec_words.end(),PrintVec<string>());
	  cout << endl;
    
    filestr.open(argv[2],fstream::out);
    for ( vector<string>::iterator it=vec_words.begin() ; it < vec_words.end(); ++it )
        filestr << *it << " ";
    filestr.close();
	return 0;	
}

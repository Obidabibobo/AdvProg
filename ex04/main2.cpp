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

void tokenize(vector<string>& sub_str, string str, const char seperator){ 	
     size_t n = str.find(seperator); 	
     if(n != string::npos){ 		
          sub_str.push_back(str.substr(0,n)); 		
          //tokenize the remaining elements of the line 		
          tokenize(sub_str,str.substr(n+1,str.length()),seperator); 	
     } 	
     else{ 		
             //End of line reached 		
             sub_str.push_back(str); 	
     } 
}

template <typename T>
struct PrintVec{
	inline void operator()(const T val){cout << val << " ";}
};


int main(int argc, char* argv[]){
	if(argc != 3){
		cout << "Error: not enough arguments" << endl;
		cout << "Example: ./main2 file1.in file2.out" << endl;
	}
	
	string str_words;
    vector<string> vec_words;
    fstream filestr;
  
    filestr.open(argv[1],fstream::in);	  
    getline(filestr,str_words);
    filestr.close();
    tokenize(vec_words, str_words, ' ');
    //Print Vecgtor
	for_each(vec_words.begin(),vec_words.end(),PrintVec<string>());
	  cout << endl;
    sort(vec_words.begin(),vec_words.end());
    //Print Vecgtor
	for_each(vec_words.begin(),vec_words.end(),PrintVec<string>());
	  cout << endl;
    
    filestr.open(argv[2],fstream::out);
    for ( vector<string>::iterator it=vec_words.begin() ; it < vec_words.end(); ++it )
        filestr << *it << " ";
    filestr.close();
	return 0;	
}

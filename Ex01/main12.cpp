//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 12
//
//  Write a program, that reads in several words at once and stores them in a 'std::vector' of
//  'std::string's. Process all words by converting them to upper case strings and afterwards
//  print them in reverse order on the screen. Use both the subscript operator and iterators to
//  traverse the vector!
//
//=================================================================================================
#include <cstdlib>
#include <iostream>

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

struct PrintStr{
	inline void operator()(const string str){cout << str << " ";}
};

struct StringToupper{
	inline void operator()(string& str){
		for( size_t i = 0; str[i]; ++i)
	    	str[i] = toupper(str[i] );
	}
};

int main ()
{
  string line;
  cout << "Input Words: ";
  getline(cin,line);
  vector<string> words;

  //Split the input into Words
  tokenize(words,line,' ');
  
  //Convert to upper case
  for_each (words.begin(), words.end(),StringToupper());

  //Forward Printing
  /*for_each(words.begin(),words.end(),PrintStr());
  cout << endl;*/
  
  //Backward Printing
  for_each(words.rbegin(),words.rend(),PrintStr());
  cout << endl;

  return EXIT_SUCCESS;
}



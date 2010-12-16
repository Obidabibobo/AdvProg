//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 8
//
//  Rewrite the previous program (main7.cpp), but use 'vector's instead of plain arrays.
//
//=================================================================================================

#include <cstring>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
typedef int myType;

struct myVectorPrint{
    inline void operator() (myType val) {cout << val << "\t";}
};

struct myLinePrint {
  inline void operator() (vector<myType> line) {
    	for_each(line.begin(),line.end(),myVectorPrint());
	cout << endl;
    }
};


int main(void){
    unsigned int sizex,sizey;
    //unsigned int sizey;
    cout << "X Dim: ";
        cin >> sizex;
    cout << "Y Dim: ";
        cin >> sizey;

    vector<vector<myType> > matrix1(sizey,vector<int>(sizex,0));
	cout << "matrix1" << endl;
	for(unsigned int i = 0; i < sizey; ++i){
		for(unsigned int j = 0; j < sizex; ++j){
			matrix1[i][j] = (i*sizex +j);
		}	
	}
    	for_each(matrix1.begin(),matrix1.end(),myLinePrint());

    vector<vector<myType> > matrix2(matrix1);
	cout << "matrix2" << endl;
	for_each(matrix2.begin(),matrix2.end(),myLinePrint());

    return EXIT_SUCCESS;
}

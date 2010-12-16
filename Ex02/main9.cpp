//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 9
//
//  Modify the program of 'main7.cpp' such that the two-dimensional array is instead linearized
//  and allocated as an one-dimensional array. Print the array to resemble the output of
//  'main7.cpp'. Then copy the contents of the array to a second linearized array and print it.
//  Also repeat the valgrind test.
//
//=================================================================================================
#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;
typedef int myType;

template<class T>
void print_dyn_arr1D(T* ip,const unsigned int sizey, const unsigned int sizex){
	for (unsigned int i = 0; i < sizey; ++i){
		for(unsigned int j = 0; j < sizex; j++){
			cout << ip[i*sizex +j] << "\t";
		}
		cout << endl;
	}
}

int main(void) {
	unsigned int sizex,sizey;
	//unsigned int sizey;
	cout << "X Dim: ";
		cin >> sizex;
	cout << "Y Dim: ";
		cin >> sizey;

	//Allocate Array1
	myType *pArray = new myType[sizex*sizey];

	//Init Matrix 1
	for (unsigned int i = 0; i < sizey; ++i){
		for(unsigned int j = 0; j < sizex ; ++j)
			pArray[i*sizex + j] = i*sizex + j;
	}

	//Print Array 1
	cout << "Array 1: " << endl;
		print_dyn_arr1D(pArray,sizey,sizex);

	//Allocate Array2
	myType* pArray2 = new myType[sizex*sizey];

	//Copy row-wise
	memcpy(pArray2,pArray,sizey*sizex*sizeof(myType));

	cout << "Array 2: " << endl;
		print_dyn_arr1D(pArray2,sizey,sizex);

	delete [] pArray;
	delete [] pArray2;
	return EXIT_SUCCESS;
}

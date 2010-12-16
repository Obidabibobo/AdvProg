//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 7
//
//  Write a program to create a dynamically allocated, two-dimensional array filled with integers
//  of your choice, where the dimensions of the array should be given by the user on the command
//  line. Print the two-dimensional array in a matrix-like fashion. Then copy the values from the
//  array into a second two-dimensional array of the same dimensions and print it. Test for
//  invalid memory accesses and proper deletion of the memory with the tool valgrind (for a
//  valgrind tutorial, see the AdvPT web page).
//
//=================================================================================================
#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;
typedef int myType;

template<class T>
void print_dyn_arr(T* ip,const unsigned int size){
	for (unsigned int i = 0; i < size; ++i)
		cout << *(ip+i) << ";";
	cout << endl;
}

template<class T>
T** init_dyn_arr2D(T** pArr,unsigned int sizex, unsigned int sizey){
 	pArr = new T* [sizey];
	for (unsigned int i = 0; i < sizey; ++i)
		pArr[i] = new T[sizex];

	return pArr;
}

template<class T>
void delete_dyn_arr2D(T** pArr,unsigned int sizey){
	for (unsigned int i = 0; i < sizey; ++i){
			cout << i << endl;
			delete [] pArr[i];
	}
	delete [] pArr;
	cout << "end delete" << endl;
}



int main(void) {
	unsigned int sizex,sizey;
	//unsigned int sizey;
	cout << "X Dim: ";
		cin >> sizex;
	cout << "Y Dim: ";
		cin >> sizey;

	//Allocate Array1
	myType **pArray = init_dyn_arr2D<myType>(pArray,sizex,sizey);

	//Init Matrix 1
	for (unsigned int i = 0; i < sizey; ++i){
		for(unsigned int j = 0; j < sizex ; ++j)
			pArray[i][j] = i*sizex + j;
	}

	//Print Array 1
	cout << "Array 1: " << endl;
	for (unsigned int i = 0; i < sizey; ++i)
		print_dyn_arr(pArray[i],sizex);

	//Allocate Array2
	myType** pArray2 = init_dyn_arr2D<myType>(pArray2 ,sizex,sizey);

	//Copy row-wise
	for(unsigned int i = 0; i < sizey; ++i)
		memcpy(pArray2[i],pArray[i],sizex*sizeof(myType));

	cout << "Array 2: " << endl;
	for (unsigned int i = 0; i < sizey; ++i)
			print_dyn_arr(pArray2[i],sizex);

	delete_dyn_arr2D<myType>(pArray,sizey);
	delete_dyn_arr2D<myType>(pArray2,sizey);
	return EXIT_SUCCESS;
}

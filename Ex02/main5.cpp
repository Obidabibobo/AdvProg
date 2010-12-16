//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 1 - Task 5
//
//  Write a program to create a dynamically allocated array for 10 'int's. Assign each element
//  an 'int' of your choice. Copy this array into a second dynamically allocated array. Afterwards,
//  compare the two arrays element-wise. Print both arrays.
//
//=================================================================================================
#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
void print_dyn_arr(T* ip,const unsigned int size){
	for (unsigned int i = 0; i < size; ++i)
		cout << *(ip+i) << ";";
	cout << endl;
}

typedef int myType;

int main(void) {
	//Size of the Array
	const unsigned int size = 10;

	//Allocate Array
	myType* ip;
		ip = new myType[size];
	//Init Array
	for (unsigned int i = 0; i < size; ++i)
		*(ip+i) = i;
	//Print Array
	print_dyn_arr<myType>(ip,size);

	//Allocate Second Array
	myType* ip2;
		ip2 = new myType[size];
		//Copy Memory
		memcpy(ip2,ip,size*sizeof(myType));

	//Elementwise comparision
		for(unsigned int i = 0; i < size; i++)
			cout << (*(ip+i) == *(ip2+i)) << " ; ";
		cout << endl;

	//Print Array
	print_dyn_arr<myType>(ip2,size);



	delete [] ip;
	delete [] ip2;
	return EXIT_SUCCESS;
}

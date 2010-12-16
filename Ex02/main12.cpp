//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 2 - Task 12
//
//  The 'std::vector' function 'at' returns a reference to the accessed element. In case the
//  element does not exist, the function throws a 'std::out_of_range' exception that is derived
//  from 'std::logic_error'. Write code to provoke this error, catch the exception as
//  'std::logic_error', and print the error message on the screen.
//
//=================================================================================================
#include <iostream>
#include <vector>
#include <stdexcept>
int main(void){
	std::vector<int> v;
	
	try
	{
		v.at(10) = 10;
		return 0;
	}
	catch (std::logic_error& e)
	{
		std::cerr << "Error catched: " << e.what() << std::endl;
		return 1;
	}
}


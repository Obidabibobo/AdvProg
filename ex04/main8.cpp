//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 4 - Task 8
//
//  Create an arbitrarily filled 'set' of integers. Print the elements of the 'set'.
//  Afterwards remove all even values from the 'set' and reprint it.
//
//=================================================================================================

#include <iostream>
#include <set>

bool isEven (int i)
	{ return (0 == (i % 2)); }

int main(int argc, char **argv)
{
	std::set<int> sint;

	for (int i = 15; i > 0; --i)
		sint.insert(i * 3 + 2);

	for (std::set<int>::const_iterator it = sint.begin(); it != sint.end(); ++it)
		std::cout << *it << "\t";
	std::cout << std::endl;
	std::cout << std::endl;

	for (std::set<int>::iterator it = sint.begin(); it != sint.end(); ++it)
		if (isEven(*it)) sint.erase(it);

	for (std::set<int>::const_iterator it = sint.begin(); it != sint.end(); ++it)
		std::cout << *it << "\t";
	std::cout << std::endl;
}

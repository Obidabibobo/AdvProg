//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
//  Assignment 4 - Task 9
//
//  Create a 'set' of unsigned integers sorted according to the following rule: the elements
//  are sorted according to the first digit of the value. In case two values have the same
//  first digit, they are sorted according to the second digit, etc. Values with a smaller
//  number of digits are sorted before values with a higher number of digits. Fill the 'set'
//  with appropriate values and print all elements. Afterwards, erase all values, whose first
//  digit is 1 and reprint the set.
//
//=================================================================================================

#include <iostream>
#include <set>

struct Comp
{
	bool operator() (const unsigned int& first, const unsigned int& sec) const
		{ return first < sec; }	// the given ordering seem to be a simple arithmetic ordering...
};

bool firstDigIsOne (unsigned int i)
{
	while (i > 9) i /= 10;	// only regard the first digit
	return (1 == i);
}

int main(int argc, char **argv)
{
	std::set<unsigned int, Comp> sint;

	for (unsigned int i = 15; i > 0; --i)
		sint.insert(i * i + i * 3 + 2);

	for (std::set<unsigned int>::const_iterator it = sint.begin(); it != sint.end(); ++it)
		std::cout << *it << "\t";
	std::cout << std::endl;
	std::cout << std::endl;

	for (std::set<unsigned int>::iterator it = sint.begin(); it != sint.end(); ++it)
		if (firstDigIsOne(*it)) sint.erase(it);

	for (std::set<unsigned int>::const_iterator it = sint.begin(); it != sint.end(); ++it)
		std::cout << *it << "\t";
	std::cout << std::endl;
}



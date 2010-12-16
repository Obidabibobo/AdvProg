//=================================================================================================
//
//  Advanced Programming Techniques (AdvPT)
//  Winter Term 2010
// 	Author      : Felix Gundlack
//
//
//=================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
void a5(){
	//int double = 3.14159;
	//bool catch-22;
	float Float = 3.14f;
	char _;
	//char 1_or_2 = '1';
}
void a6(){
	int i = 100, sum = 0;
	for(int i = 0;i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
}

void a7(){
	const unsigned int length1 = 10, length2 = 12;
	unsigned int sum = 0;
	std::cout << length1-length2 << std::endl;
	for(unsigned int i = 0; i < length1-length2; ++i)
		sum += i;
	std::cout << "sum = " << sum << std::endl;
}

void a8(){
	unsigned int sum = 0;
	unsigned int i = 100;
	for(int i = 100; i >= 0; --i){
		sum += i;
	std::cout << sum << std::endl;
	}

	std::cout << "sum = " << sum << std::endl;
}

int main(void) {
	a8();
	return EXIT_SUCCESS;
}

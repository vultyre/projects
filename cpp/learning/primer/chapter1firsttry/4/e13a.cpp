/*
 * Write a program that uses a while to sum the numbers
 * from 50 to 100 using a for loop.
 */

#include <iostream>

int main()
{
	//Variable declaration
	int sum = 0;	//define the current sum as 0
	//Go through from 50 to 100
	for (int i = 50; i <= 100; i++) {
		sum += i;
	}
	
	//When done, print out the sum
	std::cout	<< "The sum of integers from 50 to 100 is "
				<< sum << std::endl;

	return 0;
}

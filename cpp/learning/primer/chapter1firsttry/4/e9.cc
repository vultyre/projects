/*
 * Write a program that uses a while to sum the numbers
 * from 50 to 100.
 */

#include <iostream>

int main()
{
	//Variable declaration
	int sum = 0, val = 50;	//define the current sum as 0, start count at 50
	
	//Go through from 50 to 100
	while (val < 100) {
		sum += val;	//add the value of val to sum
		val++;		//add one to val
	}
	
	//When done, print out the sum
	std::cout	<< "The sum of integers from 50 to 100 is "
				<< sum << std::endl;
}

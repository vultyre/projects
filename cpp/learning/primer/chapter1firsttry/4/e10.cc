//Print the numbers from 10 down to 0

#include <iostream>

int main()
{
	int val = 10;
	
	//Begin the while loop
	while (val >= 0) {
		std::cout << val << std::endl;
		val--;	//subtract 1 from val
	}
}

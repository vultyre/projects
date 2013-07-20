//Prompt for two integers and print all numbers in the range inclusive

#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;

	//Prompt
	std::cout << "Please enter two integers, smallest first: " << std::endl;
	std::cin >> v1 >> v2;

	//Create a blank line
	std::cout << "\n";

	//Loop
	while (v1 <= v2) {
		std::cout << v1 << std::endl;
		v1++;
	}
}

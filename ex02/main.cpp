#include "Array.hpp"

int	main(void)
{
	Array<int> emptyArray;
	std::cout << "emptyArray:\n" << emptyArray;
	
	unsigned int size = 4;
	Array<int> nums(size);

	srand(time(NULL));
	for (unsigned int i = 0; i < size; i++)
	{
		int random = rand() % 20;
		nums[i] = random;
	}
	std::cout << "nums:\n" << nums;

	emptyArray = nums;
	nums[0] = 100;
	emptyArray[0] = 1000;

	std::cout << "emptyArray:\n" << emptyArray;
	std::cout << "nums:\n" << nums;

	Array<int> copyArray(emptyArray);
	std::cout << "copyArray:\n" << copyArray;

	try
	{
		nums[-1] = 1;
	}
	catch(std::exception &exception)
	{
		std::cout << "Index is out of bounds: " << exception.what() << std::endl;
	}
	
	try
	{
		nums[size] = 1;
	}
	catch(std::exception &exception)
	{
		std::cout << "Index is out of bounds: " << exception.what() << std::endl;
	}

	std::cout << "nums:\n" << nums;

	const Array<int> constArray(nums);
	std::cout << "constArray[0] = " << constArray[0] << std::endl;
	return (EXIT_SUCCESS);
}
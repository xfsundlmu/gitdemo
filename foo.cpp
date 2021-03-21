#include <iostream>

int add(int x, int y)
{
	return x + y;
}
int main(int argc, char const *argv[])
{
	/* code */
	std::cout << "Hello world!" << std::endl;

	int num = add(1, 2);
	std::cout << num << std::endl;

	return 0;
}
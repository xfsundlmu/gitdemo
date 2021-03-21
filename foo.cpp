#include <iostream>

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	if(y != 0)
		return x / y;

	return 0;
}

void print()
{
	std::cout << "print something..." << std::endl;
	std::cout << "print something...--dev111111" << std::endl;
}

void print2()
{
	std::cout << "print something...22222" << std::endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	std::cout << "Hello world!" << std::endl;

	int num = add(1, 2);
	std::cout << num << std::endl;

	return 0;
}
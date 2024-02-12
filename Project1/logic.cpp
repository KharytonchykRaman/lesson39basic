#include <iostream>

using namespace std;

bool is_num_prime1(int number) {

	if (number < 2)
	{
		return false;
	}

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

bool is_num_prime2(int number) {

	if (number < 2)
	{
		return false;
	}

	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

bool is_num_prime3(int number) {

	if (number < 2)
	{
		return false;
	}

	for (int i = 2; i < sqrt(number); i++)
	{
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}
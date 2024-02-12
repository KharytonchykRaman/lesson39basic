#include <iostream>
#include <ctime>

using namespace std;

bool is_num_prime1(int number);
bool is_num_prime2(int number);
bool is_num_prime3(int number);

int main() {

	int number = 2147483647;

	long long startTime1 = time(0);
	int a = is_num_prime1(number);
	long long finishTime1 = time(0);
	cout << " " << finishTime1 - startTime1;

	long long startTime2 = time(0);
	a = is_num_prime2(number);
	long long finishTime2 = time(0);
	cout << " " << finishTime2 - startTime2;

	long long startTime3 = time(0);
	a = is_num_prime3(number);
	long long finishTime3 = time(0);
	cout << " " << finishTime3 - startTime3;

	return 0;
}
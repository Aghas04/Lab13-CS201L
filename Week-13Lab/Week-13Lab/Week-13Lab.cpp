//

#include <iostream>
//#include "function.h"
long factorial_r(long value) {
	if (value == 0) {
		return 1;
	}
	else {
		return value * factorial_r(value - 1);
	}

}
//Pre:start with a value passed into function
//Post:return the factoral of the value passed into it
int fibonacci_r(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci_r(n - 1) + fibonacci_r(n - 2);
	}
}
//Pre: starts with a value being entered into function
//Post: return the fibinaci value for the values term
bool is_prime_r(int value, int n) {
	if (n <= 1) {
		return true;
	}
	if (value % n == 0 && n != value) {
		return false;
	}
	else if (n > value / 2) {
		return true;
	}
	else { return is_prime_r(value, n + 1); }
}
//Pre: starts with a value
//Post: returns a bool of if the number is a prime number
int sum_r(int list[], int list_size) {
	if (list_size <= 0) {
		return 0;
	}
	else { return list[list_size - 1] + sum_r(list, list_size - 1); }
}
//Pre: starts with a array and a int value of the size of the array
//Post: returns a int of the sum of the values of the array
void output_reverse_list_r(int list[], int list_size) {
	if (list_size <= 0) {
		return;
	}
	else {
		std::cout << list[list_size - 1] << " ";
		output_reverse_list_r(list, list_size - 1);
	}
}
//Pre: starts with a array and a int value of the size of the array
//Post: outputs the array in reverse
using namespace std;
int main()
{
	long num;
	int pnum, arrnum;
	cout << "Enter an integer: " << endl;
	cin >> num;
	cout << endl;

    cout << num << "! = " << factorial_r(num) << endl << endl;

	cout << "fibonacci(" << num << ") = " << fibonacci_r(22) << endl << endl;

	cout << "Enter a number to check if it is a prime number: " << endl;
	cin >> pnum;
	cout << endl;
	cout << pnum;
	if (is_prime_r(pnum, 2)) {
		cout << " is a prime number" << endl << endl;
	}
	else {
		cout << " is not a prime number" << endl << endl;
	}
	int numbers[] = {0,0,0,0,0};
	cout << "Next we will enter 5 values into an array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter a value for index " << i << endl;
		cin >> arrnum;
		numbers[i] = arrnum;

	}
	cout << "The sum of all the values is " << sum_r(numbers, 5) << endl;
	cout << "the list output in reverse is " << endl;
	output_reverse_list_r(numbers, 5);
    return 0;
}


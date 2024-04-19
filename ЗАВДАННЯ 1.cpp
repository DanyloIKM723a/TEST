#include <iostream>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int num1, num2;

	std::cout << "Number 1: ";
	std::cin >> num1;

	std::cout << "Number 2: ";
	std::cin >> num2;

	int result = sum(num1, num2);

	std::cout << "Summa: " << result << std::endl;

	return 0;
}

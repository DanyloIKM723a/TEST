#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid input: Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    int result = factorial(num);
    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}

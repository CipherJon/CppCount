#include <iostream>
#include "calculator.h"

int main() {
    double a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> b;

    double result = 0.0;
    switch(op) {
        case '+': result = add(a, b); break;
        case '-': result = subtract(a, b); break;
        case '*': result = multiply(a, b); break;
        case '/': result = divide(a, b); break;
        default: std::cerr << "Invalid operator" << std::endl; return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}
#include <cassert>
#include <iostream>
#include <stdexcept>
#include "calculator.h"

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-2, -3) == -5);
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-3, -2) == -1);
}

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-2, -3) == 6);
}

void test_divide() {
    assert(divide(6, 3) == 2);
    try {
        divide(1, 0);
    } catch (const std::invalid_argument& e) {
        assert(true);
    }
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
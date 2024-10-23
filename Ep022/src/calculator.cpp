#include "calculator.h"
#include <stdexcept> // Necessário para std::runtime_error

int Calculator::add (int a, int b) {
    return a + b;
}

int Calculator::sub (int a, int b) {
    return a - b;
}

int Calculator::mul (int a, int b) {
    return a * b;
}

int Calculator::div (int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Divisão por zero não é permitida.");
    }
    return a / b;
}

int Calculator::mod (int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Módulo por zero não é permitido.");
    }
    return a % b;
}
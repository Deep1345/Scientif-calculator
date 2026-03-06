#include <cmath>
#include <stdexcept>
#include "calculator.h"

double squareRoot(double x) {
    if (x < 0) {
        throw std::invalid_argument("Negative number not allowed for square root");
    }
    return sqrt(x);
}

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Negative number not allowed for factorial");
    }

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double naturalLog(double x) {
    if (x <= 0) {
        throw std::invalid_argument("Natural log only defined for positive numbers");
    }
    return log(x);
}

double power(double x, double b) {
    return pow(x, b);
}

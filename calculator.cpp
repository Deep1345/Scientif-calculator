#include <cmath>
#include "calculator.h"

double squareRoot(double x) {
    return sqrt(x);
}

int factorial(int n) {
    int result = 1;
    for(int i=1;i<=n;i++)
        result *= i;
    return result;
}

double naturalLog(double x) {
    return log(x);
}

double power(double x, double b) {
    return pow(x,b);
}

    return 0;
}

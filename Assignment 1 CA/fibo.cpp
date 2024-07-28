#include <iostream>

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n = 40;
    long long result = fibonacci(n);
    std::cout << "Fibonacci number at position " << n << " is " << result << std::endl;
    return 0;
}
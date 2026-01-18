#include <iostream>

// Function to calculate factorial using a for loop
unsigned long long factorial_iterative(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of a negative number doesn't exist." << std::endl;
        return 0; // Or handle error appropriately
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    




    cout << result << end;
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial_iterative(num) << std::endl;
    // Output: Factorial of 5 is 120
    return 0;
}

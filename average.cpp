#include <iostream>

int main() {
    // Values
    double num1 = 28;
    double num2 = 32;
    double num3 = 37;
    double num4 = 24;
    double num5 = 33;

    // Sum of values
    double sum = num1 + num2 + num3 + num4 + num5;

    // Average
    double average = sum / 5;

    // Display the sum and average 
    std::cout << "The Sum of values is: " << sum << std::endl;
    std::cout << "The Average is: " << average << std::endl;

    return 0;
}

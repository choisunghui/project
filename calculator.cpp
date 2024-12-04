#include <iostream>

class Calculator {
public:
    // Function to add two numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }

    // Function to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }

    // Function to divide two numbers
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1 = 10.0, num2 = 5.0;

    std::cout << "Addition: " << calc.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(num1, num2) << std::endl;
    std::cout << "Division: " << calc.divide(num1, num2) << std::endl;

    return 0;
}
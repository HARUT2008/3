#include <iostream>
#include <string>

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::string result = std::to_string(num1) + std::to_string(num2);
    int concatenated = std::stoi(result);

    std::cout << "Concatenated number: " << concatenated << std::endl;

    return 0;
}

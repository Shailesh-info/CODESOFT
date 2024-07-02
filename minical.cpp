#include <iostream>
#include <cmath>

int main() {
    int n1, n2;
    char op;
    float output;

    std::cout << "What operation do you want to perform: addition: +, subtraction: -, multiplication: *, division: / " << std::endl;
    std::cin >> op;

    std::cout << "Enter the first digit: " << std::endl;
    std::cin >> n1;

    std::cout << "Enter the second digit: " << std::endl;
    std::cin >> n2;

    if (op == '+') {
        output = n1 + n2;
        std::cout << "The sum is: " << output << std::endl;
    }
    else if (op == '-') {
        output = n1 - n2;
        std::cout << "The subtraction is: " << output << std::endl;
    }
    else if (op == '*') {
        output = n1 * n2;
        std::cout << "The multiplication is: " << output << std::endl;
    }
    else if (op == '/') {
        output = static_cast<float>(n1) / n2;
        std::cout << "The division is: " << output << std::endl;
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}


//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>

int gcd(int firstNumber, int secondNumber) {
    // Ensure firstNumber is less than secondNumber
    int temporary;
    if (secondNumber < firstNumber) {
        temporary = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temporary;
    }

    int remainder;
    while (secondNumber % firstNumber != 0) {
        remainder = secondNumber % firstNumber;
        secondNumber = firstNumber;
        firstNumber = remainder;
    }

    return firstNumber;
}


int main() {
    int firstNumber, secondNumber;

    std::cout <<" Least common multiple app\n" "Enter 2 numbers\n";
    std::cin >> firstNumber >> secondNumber;

    std::cout << " Least common multiple is: " << (firstNumber * secondNumber) / gcd(firstNumber, secondNumber);
    return 0;
}

#include <iostream>

void varSwitch() {
    int firstNum{};

    int secondNum{};


    std::cout << "enter the first number:";
    std::cin >> firstNum;

    int tempFirstNum= firstNum;

    std::cout << "enter the second number:";
    std::cin >> secondNum;

    int tempSecondNum = secondNum;

    firstNum = tempSecondNum;
    secondNum = tempFirstNum;

    std::cout << "first number is now: " << firstNum << std::endl;
    std::cout << "second number is now: " << secondNum << std::endl;
}

int main() {
    varSwitch();
    return 0;
}
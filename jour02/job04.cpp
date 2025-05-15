#include <iostream>

int calculator() {
    int num1,num2;
    char opera;
    std::cout<<"Enter the first number: ";
    std::cin>>num1;

    std::cout<<"enter the operator: ";
    std::cin>>opera;

    std::cout<<"Enter the second number: ";
    std::cin>>num2;
    int result=0;

    if (opera=='/' && num2==0) {
        std::cout<<"ERROR: CANNOT DIVIDE BY ZERO";
        return 1;

    }
    switch (opera) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout<<"Wrong  input";
            break;

    }
    std::cout<<"result is: ";
    return result;
}

int main() {
    std::cout<<calculator()<<std::endl;

    return 0;
}
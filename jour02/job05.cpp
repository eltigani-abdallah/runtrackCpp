#include <iostream>

void eval() {
    int grade=0;
    std::cout << "enter a grade: ";
    std::cin >> grade;

        if (grade<10 && grade>=0) {
            std::cout << "FAIL";
        }else if (grade>10 && grade<20) {
            std::cout << "PASS";
        } else if (grade>20) {
            std::cout << "GRADE TOO HIGH";
        } else if (grade<0) {
            std::cout << "GRADE TOO LOW";
        }else{
            std::cout << "INVALID GRADE";
    }
}

int main() {
    eval();

    return 0;
}
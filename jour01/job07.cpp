#include <iostream>

void pairFind() {
    int inNum;
    std::cout << "Enter a number: ";
    std::cin >> inNum;


    if (inNum%2==0) {
        std::cout << "pair" << std::endl;
    } else if (inNum%2==1) {
        std::cout << "impair" << std::endl;
    } else {
        std::cout << "pick a number please" << std::endl;
    }
}

int main() {
    pairFind();

    return 0;
}
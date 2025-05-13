#include <iostream>

void multiptable() {
    int target;
    std::cout<<"Enter target number: ";
    std::cin>>target;
    for (int i = 1; i <= 10; i++) {
        int result = i * target;
        std::cout<<target<<'*'<<i<<'='<<result<<std::endl;

    }
}

int main() {
    multiptable();

    return 0;
}
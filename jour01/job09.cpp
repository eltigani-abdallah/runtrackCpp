#include <iostream>

void greatestNum() {
    int entry1, entry2, entry3;
    int biggest{};
    std::cout<<"please enter the first number: ";
    std::cin>>entry1;
    std::cout<<"please enter the second number: ";
    std::cin>>entry2;
    std::cout<<"please enter the third number: ";
    std::cin>>entry3;

    int entries[3] = {entry1, entry2, entry3};
    int prevEntry{};
    for (int i = 0; i <=2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (entries[j] > prevEntry) {
                if (biggest>prevEntry) {
                    continue;
                }
                biggest = entries[j];
            }
        }
        prevEntry = entries[i];
    }

    std::cout<<"biggest number is: "<<biggest;


}

int main() {
    greatestNum();
    return 0;
}
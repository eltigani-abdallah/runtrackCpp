#include <iostream>

void leapYear() {
    int year;
    std::cout << "Please enter a year: ";
    std::cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << year << " is a leap year"<<std::endl;
    } else if (year % 4 !=0) {
        std::cout << year << " is not a leap year"<<std::endl;
    } else {
        std::cout <<"not a valid year"<<std::endl;
    }

}
int main() {
    leapYear();

    return 0;
}
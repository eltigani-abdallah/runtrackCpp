#include <iostream>

void taxCalculator() {
    double unitPrice{};
    double amount{};
    double taxRate{};


    std::cout << "Enter unit price: ";
    std::cin >> unitPrice;

    std::cout << "Enter amount: ";
    std::cin >> amount;

    std::cout << "Enter tax rate in decimals: ";
    std::cin >> taxRate;

    double totalPrice = unitPrice * amount;
    double totalTax = totalPrice+(totalPrice * taxRate);

    std::cout << "Total price with tax: " << totalTax << std::endl;


}

int main() {
    taxCalculator();

    return 0;
}
#include <iostream>
//QUESTION:

//do {} while (cout << "donnez un nommbre >0 ", cin>> n, n>=0) ;

//SOLUTION
int main() {
    int n=0;
    do {
        std::cout << "donnez un nombre >0: ";
        std::cin >> n ;
    } while (n>=0);

    return 0;
}
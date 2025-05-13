#include <iostream>

int main() {
     const char *msg = "hello world!";

    for (int n=5; n>0; n--) {
        std::cout<<msg<<std::endl;
    }
    return 0;
}
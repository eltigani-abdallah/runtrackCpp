#include <iostream>
using namespace std;


int main() {
    int i,n,som;
    som=0;
    //ORIGINAL
    // for (i=0;i<4; i++) {
    //     cout<<"donnez un entier";
    //     cin>>n;
    //     som+=n;
    // }
    //
    // cout<<"somme: "<<som;

    //WHILE LOOP
    // i=4;
    // while (i>0) {
    //     cout<<"donnez un entier: ";
    //     cin>>n;
    //     som+=n;
    //
    //     i--;
    // }
    // cout<<som;

    //DO WHILE LOOP
    i=4;
    do {
        cout<<"donnez un entier: ";
            cin>>n;
            som+=n;
        i--;
    } while (i>0);
    cout<<som;


    return 0;
}
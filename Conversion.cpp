#include <iostream>
using namespace std;

int main(){
    int celcius;
    cout << "Voer een temperatuur waarde van Celcius in: ";
    cin >> celcius;
    cout << (celcius * 9/5) + 32 << " Farenheit";

    getchar();
    return 0;
}
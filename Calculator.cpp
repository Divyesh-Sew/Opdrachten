#include <iostream>
using namespace std;

int main(){

    int nummer1;
    int nummer2;
    int a;
    int b;
    int c;
    int d;
    string input;
    cout << "Voer je eerste getal in: ";
    cin >> nummer1;
    cout << "Voer je tweede getal in: ";
    cin >> nummer2;
    cout << "Welke operatie wil je doen: a.Optellen b.Aftrekken c.delen d.vermenigvuldigen" << endl;
    cin >> input;
    if ("a","A")
    {
        cout<< nummer1+nummer2;
    }
    if ("b","B")
    {
        cout << nummer1 - nummer2;
    }
    if ("c","C")
    {
        cout << nummer1/nummer2;
    }
    if ("d","D")
    {
        cout <<nummer1 * nummer2;
    }
    
    std::cin.get();
    
   return 0;
}



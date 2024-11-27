#include <iostream>
using namespace std;

int main(){

    int nummer1, nummer2;
    char input;
    int sum;
    cout << "Welke operatie wil je doen: a.Optellen b.Aftrekken c.delen d.vermenigvuldigen" << endl;
    cin >> input;
    cout << "voer je twee getallen in: ";
    cin >> nummer1 >> nummer2;
    switch (input)
    {
    case '+':
        cout << nummer1  << "+" << nummer2 << " = " << nummer1 + nummer2;
        break;

    case '-':
        cout << nummer1  << "-" << nummer2 << " = " << nummer1 - nummer2;
        break;

     case '/':
        cout << nummer1  << "/" << nummer2 << " = " << nummer1 / nummer2;
        break;

    case '*':
        cout << nummer1  << "*" << nummer2 << " = " << nummer1 * nummer2;
        break;
    
    default:
    cout << "Error not an operator ! ";
        break;
    }
   return 0;
}



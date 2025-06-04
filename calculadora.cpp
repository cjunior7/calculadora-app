#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char oper;

    cout << "🧮 Calculadora simple en C++" << endl;
    cout << "------------------------------" << endl;

    cout << "Ingresá el primer número: ";
    cin >> num1;

    cout << "Ingresá el operador (+, -, *, /): ";
    cin >> oper;

    cout << "Ingresá el segundo número: ";
    cin >> num2;

    cout << "Resultado: ";

    switch (oper) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Error: no se puede dividir por cero." << endl;
            break;
        default:
            cout << "Operador inválido." << endl;
    }

    return 0;
}

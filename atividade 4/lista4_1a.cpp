#include <iostream>
using namespace std;

double calcularFatorial(int numero) {
    double fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O numero deve ser positivo!" << endl;
        return 0;
    }

    double fatorial = calcularFatorial(numero);
    cout << "O fatorial de " << numero << " e: " << fatorial << endl;

return 0;
}

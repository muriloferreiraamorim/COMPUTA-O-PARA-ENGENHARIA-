#include <iostream>
using namespace std;

double calcularExponencial(double x) {
    double resultado = 1.0;
    double termo = 1.0;

    for (int contador = 1; contador <= 10; contador++) {
        termo *= x / contador;
        resultado += termo;
    }

    return resultado;
}

int main() {
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double exponencial = calcularExponencial(x);
    cout << "O valor da constante para x = " << x << " e: " << exponencial << endl;

return 0;
}


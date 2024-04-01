#include <iostream>
using namespace std;

int main() {
    double distancia;

    cout << "Digite a distancia em quilometros: ";
    cin >> distancia;

    double VT=0.0;
    if (distancia<=50) {
        VT=distancia*1.75;
    } else if (distancia<= 150) {
        VT=50*1.75+(distancia-50)*1.65;
    } else {
        VT=50*1.75+100*1.65+(distancia-150)*1.50;
    }

    double custoMedio = VT / distancia;

    cout << "Valor total a pagar: " << VT << " reais" << endl;
    cout << "Custo medio por quilometro: " << custoMedio << " reais" << endl;

    return 0;
}

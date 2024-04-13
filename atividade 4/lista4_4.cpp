#include <iostream>
using namespace std;

int main() {
    double precos[5] = {2.98, 4.50, 9.98, 4.49, 6.87};
    int numeroProduto;
    int quantidadeVendida;
    double valorTotalVarejo = 0;

while (true) {
    cout << "Digite o numero do produto (ou -1 para sair): ";
    cin >> numeroProduto;

    if (numeroProduto == -1) {
        break;
    }

    if (numeroProduto < 1 || numeroProduto > 5) {
        cout << "Numero de produto invalido!" << endl;
        continue;
    }

    cout << "Digite a quantidade vendida: ";
    cin >> quantidadeVendida;

    double valorProduto = quantidadeVendida * precos[numeroProduto -1];
    valorTotalVarejo += valorProduto;
	}

    cout << "O valor total de todos os produtos vendidos e: R$ " << valorTotalVarejo << endl;

return 0;
}

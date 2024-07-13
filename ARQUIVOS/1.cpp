#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int TAM;
    cout << "Quantos numeros deseja realizar essa operacao?" << endl;
    cin >> TAM;

    int soma = 0;
    int vetor[TAM];

    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }
    
    cout << soma << endl;

    ofstream arquivo("vetor.txt", ios::app);
    for (int i = 0; i < TAM; i++) {
        arquivo << vetor[i] << endl;
    }
    arquivo.close();

    ofstream arquivo2("soma.txt");
    arquivo2 << soma << endl;
    arquivo2.close();

return 0;
}

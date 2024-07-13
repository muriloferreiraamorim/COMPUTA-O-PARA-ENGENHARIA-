#include <iostream>
#include <string>
using namespace std;

struct Ramal {
    int numero;
    int categoria;
    string setor;
    int edificio;
    string sala;
    string responsavel;
    string ateste;
};

void cadastrarRamal(Ramal & ramal) {
    cout << "Digite o numero do ramal (entre 1000 e 2999): ";
    cin >> ramal.numero;

    
    while (ramal.numero < 1000 || ramal.numero > 2999) {
        cout << "Numero invalido. Digite novamente: ";
        cin >> ramal.numero;
    }

    cout << "Digite a categoria (0 a 6):";
	
	cin >> ramal.categoria;
	
	cin.ignore();
    
    cout << "Digite o setor: ";
    getline(cin, ramal.setor);

    cout << "Digite o edifcio de localizacao (500 para sede ou 505 para SEPN 505(Asa Norte): ";
    cin >> ramal.edificio;

    cin.ignore();

    cout << "Digite o numero da sala: ";
    getline(cin, ramal.sala);

    cout << "Digite o responsavel pelo ramal (primeiro nome): ";
    getline(cin, ramal.responsavel);

    cout << "Digite o responsavel pelo ateste da conta telefonica (primeiro nome): ";
    getline(cin, ramal.ateste);
}

void exibirRamal(const Ramal& ramal) {
    cout << "Numero do ramal: " << ramal.numero << endl;
    cout << "Categoria: " << ramal.categoria << endl;
    cout << "Setor: " << ramal.setor << endl;
    cout << "Edificio de localizacao: " << ramal.edificio << endl;
    cout << "Sala: " << ramal.sala << endl;
    cout << "Responsavel pelo ramal: " << ramal.responsavel << endl;
    cout << "Responsavel pelo ateste da conta telefonica: " << ramal.ateste << endl;
    
}

int main() {
    Ramal ramal;

    cout << "=============Cadastro de Ramal=============" << endl;
    
	cadastrarRamal(ramal);
    cout << endl;

    cout << "=============Informacoes Gerais do Ramal=============" << endl;
    
    exibirRamal(ramal);

return 0;
}

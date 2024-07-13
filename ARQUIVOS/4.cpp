#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void cadastrarAluno() {
    string nomeAluno;
    int matricula;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Digite a matricula do aluno: ";
    cin >> matricula;

    ofstream arquivo(nomeAluno + ".txt");
    if (arquivo.is_open()) {
        arquivo << matricula << endl;
        cout << "Aluno cadastrado com sucesso!" << endl;
    } else {
        cerr << "Erro ao cadastrar o aluno!" << endl;
    }
}

void adicionarNota() {
    string nomeAluno;
    double nota;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Digite a nota do aluno: ";
    cin >> nota;

    ifstream arquivoEntrada(nomeAluno + ".txt");
    if (!arquivoEntrada.is_open()) {
        cerr << "Aluno nao cadastrado!" << endl;
        return;
    }

    ofstream arquivo(nomeAluno + ".txt", ios::app);
    if (arquivo.is_open()) {
        arquivo << fixed << setprecision(2) << nota << endl;
        cout << "Nota adicionada com sucesso!" << endl;
    } else {
        cerr << "Erro ao adicionar a nota!" << endl;
    }
}

void calcularMedia() {
    string nomeAluno;
    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream arquivo(nomeAluno + ".txt");
    if (!arquivo.is_open()) {
        cerr << "Aluno nao cadastrado!" << endl;
        return;
    }

    string linha;
    vector<double> notas;
    bool primeiraLinha = true;
    while (getline(arquivo, linha)) {
        if (primeiraLinha) {
            primeiraLinha = false;
            continue;
        }
        double nota;
        stringstream ss(linha);
        ss >> nota;
        notas.push_back(nota);
    }

    if (notas.empty()) {
        cout << "Nenhuma nota cadastrada para o aluno." << endl;
        return;
    }

    double soma = 0;
    for (double n : notas) {
        soma += n;
    }
    double media = soma / notas.size();
    cout << "Media do aluno " << nomeAluno << " eh: " << fixed << setprecision(2) << media << endl;
}

int main() {
    int opcao;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular media de um aluno" << endl;
        cout << "4. Fechar o programa" << endl;
        cout << "Digite a sua escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Encerrando o programa..." << endl;
                return 0;
            default:
                cerr << "Opcao invalida! Tente novamente." << endl;
        }
    }

return 0;
}

#include <iostream>
#include <fstream>
#include <string>

int contarCaractere(const std::string& linha, char caractere) {
    int contador = 0;
    for (char c : linha) {
        if (c == caractere) {
            contador++;
        }
    }
    return contador;
}

int main() {
    std::string nomeArquivo = "mochileiro.txt";
    char caractereBuscado;

    std::cout << "Digite o caractere que deseja buscar: ";
    std::cin >> caractereBuscado;

    std::ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    std::string linha;
    int numeroLinha = 1;
    while (std::getline(arquivo, linha)) {
        int contador = contarCaractere(linha, caractereBuscado);
        std::cout << "Linha " << numeroLinha << ": " << contador << " vezes" << std::endl;
        numeroLinha++;
    }
    arquivo.close();

    return 0;
}

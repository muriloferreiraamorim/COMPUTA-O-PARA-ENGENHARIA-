#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Digite uma string com 5 caracteres: ";
    std::cin >> input;

    int countA = 0, countE = 0, countI = 0;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch == 'a')
            countA++;
        else if (ch == 'e')
            countE++;
        else if (ch == 'i')
            countI++;
    }

    std::cout << "Quantidade de vogais na string:" << std::endl;
    std::cout << "A: " << countA << std::endl;
    std::cout << "E: " << countE << std::endl;
    std::cout << "I: " << countI << std::endl;

    for (int i = 0; i < input.length(); i++) {
        char& ch = input[i];
        if (ch == 'a')
            ch = 'i';
        else if (ch == 'e')
            ch = 'o';
        else if (ch == 'i')
            ch = 'u';
    }

    std::cout << "String criptografada: " << input << std::endl;

    return 0;
}

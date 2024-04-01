#include <iostream>
using namespace std;

bool ePrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;

    if (ePrimo(n)) {
        std::cout << n << " e um numero primo." << std::endl;
    } else {
        std::cout << n << " nao e um numero primo." << std::endl;
    }

    return 0;
}

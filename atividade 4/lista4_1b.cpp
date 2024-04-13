#include <iostream>
using namespace std;

float calcularFatorial(int numero) {
    float fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    

    float e = 1.0;
    for (int i = 1; i <= 10; i++) {
        float termo = 1.0 / calcularFatorial(i);
        e += termo;
    }

    cout << "O valor e de: " << e << endl;

return 0;
}

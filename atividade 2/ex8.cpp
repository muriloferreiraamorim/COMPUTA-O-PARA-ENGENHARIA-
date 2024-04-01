#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h, cat1, cat2;

    cout << "Insira o valor do primeiro cateto: ";
    cin >> cat1;

    cout << "Insira o valor do segundo cateto: ";
    cin >> cat2;

    h= sqrt (cat1*cat1 + cat2*cat2);

    cout << "A hipotenusa e: " << h << std::endl;

    return 0;
}

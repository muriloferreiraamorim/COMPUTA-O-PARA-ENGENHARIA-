#include <iostream>
using namespace std;

int main() {
    int num1, num2, soma, dif, prod, quoc;
 
	cout << "Insira o primeiro numero: " << endl;
	cin >> num1;
	
	cout << "Insira o segundo numero:" << endl;
	cin >> num2;
	
	soma = num1 + num2;
	dif = num1 - num2;
	prod = num1*num2;
	quoc = num1/num2;
	
	cout << "Soma: "<< soma << endl;
	cout << "Produto: " << prod << endl;
	cout << "Diferenca:" << dif << endl;
	cout << "Quociente:" << quoc << endl;

return 0;
}

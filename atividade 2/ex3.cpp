#include <iostream>
using namespace std;

int main() {	
	int r;
	float pi, area, diametro;
	
	cout << "Insira o raio de um circulo:"<< endl;
	cin >> r;
	
	pi = 3,14159;
	area = pi*(r*r);
	diametro= 2*r;
	
	cout << "Valor da area:"<< area << endl;
	cout << "Valor do diametro:"<< diametro << endl;
	
return 0;	
}


#include <iostream>
using namespace std;

int main() {
	int num1, num2, resto, div;
  
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
  
    cout << "Digite o segundo numero: "<< endl;
    cin >> num2;
  
    div = num1/num2;
    resto = num1%num2;
  
    if(resto !=0){
  	 cout <<"Nao sao multiplos"<< endl;
  	  } else {
  	  	cout <<"Sao multiplos"<< endl;
		}
 	
 return 0;
}

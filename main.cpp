#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int repetir = 1;
	
	while (repetir == 1) {
		int n,sum,cantidad;
		cout<<"Cuantos numeros va a sumar: ";
		cin>>cantidad;
		for(int i = 0; i < cantidad; i++) {
			cout<<"ingrese numero: "<<(i+1)<<endl;
			cin>>n;
			sum += n;
		}
		cout<<"El resultado de su suma es de: "<<sum<<endl;
		cout<<"quieres volver a sumar? 1 para si 2 para  no "<<endl;
		cin>>repetir;
	}
	cout<<"Muchas gracias por usar mi programa para sumas: ";
	
	
	
	return 0;
}

#include <iostream>

using namespace std;
	
	struct dato{
		int dato1;
		char dato2 [20];
	};
	
int main(){
	struct dato var1;
	struct dato *Ptr;
	
	Ptr=&var1;
	
	cout << " Puntero: " << Ptr << endl;
	cout << " Direccion de Ptr: " << &Ptr <<endl;
	cout << " Var1: "<< &var1 << endl;
	cout << " Ingresar por puntero: ";
	cin >> Ptr->dato1;
	cout << endl;
	cout << " Valor ingresado: " <<Ptr->dato1 << endl;
	cout << " Ingresar por puntero: ";
	cin >> Ptr->dato2;
	cout << endl;
	cout << " Cadena ingresada:" << Ptr->dato2;
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




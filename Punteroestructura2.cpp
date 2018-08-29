#include <iostream>

using namespace std;
	
	struct dato{
		int dato1;
		char dato2 [20];
	};
	struct dato3{
	    int dato4;
		struct dato dato5;
	};
	
int main(){
	struct dato3 var1;
	struct dato3 *Ptr;
	
	Ptr=&var1;
	
	cout << " Puntero: "<< &Ptr << endl;
	cout <<" Direccion del puntero: "<< Ptr << endl;
	cout << " Ingrese dato: "<< endl;
	cin >> Ptr->dato5.dato1;
	cout << " Ingrese cadena: "<< endl;
	cin >> Ptr->dato5.dato2;
	cout << " Ingrese dato: "<< endl;
	cin >> Ptr->dato4;
	cout << " Dato 1 desde estructura 2: "<< Ptr->dato5.dato1<<endl;
	cout << " Dato 2 desde estructura 2: "<< Ptr->dato5.dato2<<endl;
	cout << " Dato 4 desde estructura 2: "<< Ptr->dato4<<endl;
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




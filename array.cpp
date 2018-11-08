/*
Carlos Cast - 30/10/18
*/
#include <iostream>
using namespace std;

int main  (){
	int arreglo[30];
	string nombre;
	float promedio;
	int arriba = 0,alto = 0,productivo = 0,suma = 0;
	
	cout << "Nombre del obrero" << endl;
	cin >> nombre;
	
	for(int i=1; i<=30; i++){
		cout << "Produccion del dia " << i << ":" << endl;
		cin >>  arreglo[i];
		suma += arreglo [i];
	}
	promedio = suma/30;
	
	for(int i=1; i<=30; i++){
		if(arreglo [i] > promedio){
			arriba += +1;
		}	
		if(arreglo[i] > alto){
			alto = arreglo[i];
			productivo = i;
		}
	}
	cout << "Promedio de produccion: " << promedio << endl;
	cout << "Total de dias arriba del promedio: " << arriba << endl;
	cout << "Cantidad producida mas alta: " << alto << endl;
	cout << "Dia mas productivo: " << productivo << endl;
	system("pause");
	return 0;
}

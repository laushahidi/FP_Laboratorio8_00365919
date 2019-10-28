#include <iostream>
#include <string.h>
using namespace std;

void repartir(string *arreglo, string carnet){
	string x, substr;
	for(int i = 0; i < 8; i++){
		x=carnet.substr(i,1);
		arreglo[i]=x;
		
	}
}

void revertir(string *x, string *y){
	int j;
	for(int i = 0; i < 8; i++){
		j=7-i;
		y[j]=x[i];
	}
}

void mostrar(string mensaje, string *z){
	cout<<mensaje;
	for(int i = 0; i < 8; i++){
		cout << z[i] << " ";
	}
	cout<<endl;
}

int main(){
	string arreglo1[8], arreglo2[8];
	string carnet;
	cout<<"Ingrese su carnet: ";
	cin>>carnet;
	
	repartir((string*)arreglo1, carnet);
	revertir((string*)arreglo1, (string*)arreglo2);
	mostrar("Carnet ", (string*)arreglo1);
	mostrar("Carnet invertido ", (string*)arreglo2);
	
	system("pause");
	return 0;
}
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

void repartir(int *arreglo, string carnet){
	string x;
	for(int i = 0; i < 8; i++){
		x=carnet.substr(i,1);
		arreglo[i]=stoi(x);
	}
}

void colocar(int *arreglo1){
	int k, c, i, j, arreglo2[5][9];
	c=0;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 8; j++){
			c+=1;
			if(i==0 or i==2){
			    k=j;
				arreglo2[i][j]= arreglo1[j];
			}
			else if(i==1 or i==3){
				k=7-j;
				arreglo2[i][k] = arreglo1[j];
			}
			else{
			    k=j;
				arreglo2[i][j] =c;
			}
			
		}
		c+=1;
		arreglo2[i][8] =c;
	}

	cout<<endl;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 9; j++){
			cout << fixed << setprecision(4) << setw(4) << setfill(' ') << arreglo2[i][j] << " ";
		}
	cout<<endl;
	}
}

int main(){
	int arreglo1[9];
	string carnet;
	cout<<"Ingrese su carnet: ";
	cin>>carnet;
	
	
	repartir((int*)arreglo1, carnet);
	colocar((int*)arreglo1);

	return 0;
}
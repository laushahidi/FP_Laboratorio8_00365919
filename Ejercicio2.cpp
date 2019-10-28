#include <iostream>
#include <string>

using namespace std;

int main() {
 char i;
 string arreglo1[5];
 int arreglo2[5];
 for(i=0; i<5; i++){
   cout << "Ingrese un nombre: ";
   cin >> arreglo1[i];
   arreglo2[i]=arreglo1[i].size();

}
 for(i=0; i<5; i++){
   cout <<  "\n" << arreglo1[i] << " " << arreglo2[i];
}
}
#include <iostream>
using namespace std;
 
int main() {
 int arreglo[10];
 for(int j=0; j<10; j++){
   arreglo[j]=rand() % 10;
  }
 
 for(int i=0; i<10; i++){
   if(arreglo[i] % 2 == 0){
     cout << arreglo[i] << "  ";
   }
  }
}
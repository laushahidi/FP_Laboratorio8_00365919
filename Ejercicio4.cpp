#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
 int x, j, i;
 int matriz[10][10];
 cout << "Tabla de multiplicar\n\n";
 
 for(int i=0; i < 11; i++){
   for(int j=0; j < 11; j++){
     matriz[i][j]=i*j; 
     matriz[i][0]=i;
     matriz[0][j]=j;
 
     cout << fixed << setprecision(4) << setw(2) << setfill(' ') << matriz[i][j] << "  ";
   }
 cout << endl;
 }
}
#include <iostream>
using namespace std;
 
int main() {
int matriz[5][5];
for(int i=0; i < 5; i++){
for(int j=0; j < 5; j++){
  matriz[i][j]=1;
  matriz[0][0]=0;
  matriz[1][1]=0;
  matriz[2][2]=0;
  matriz[3][3]=0;
  matriz[4][4]=0; 
  cout << matriz[i][j] << "  ";
}
cout << endl;
}
}
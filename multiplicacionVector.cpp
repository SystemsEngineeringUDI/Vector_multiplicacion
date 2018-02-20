/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
int V[5]={2,6,3,9,1},M[5]={2,2,2,2,2},N[5];//Se declaran 3 vectores "N guardara el producto de V*M
int i,j;
for(i=0;i<5;i++){//se recorren los vectores y se realiza el producto
	N[i]=V[i]*M[i];
}
for(i=0; i<5;i++){//se recorre el vector resultante para imprimir su resultado
cout<<N[i]<<"\n";
}
return 0;
}

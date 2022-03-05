// Programa para la resolucion de determinantes en matrices enesimas de Vandermonde.
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int matriz[100][100];
	int contador1,determinante,i,j,n;
	// n = orden de la matriz cuadrada.
	// i = filas de la matriz.
	// j = columnas de la matriz.
	contador1 = 1;
	cout<<"\tBienvenid@"<<endl;
	// Dando informacion acerca del programa al usuario.
	cout<<"En esta ocasion calcularemos determinantes en matrices enesimas de Vandermonde."<<endl;
	cout<<"Para lo cual sea tan amable de completar lo siguiente: "<<endl;
	do {  // n debe ser un numero entero positivo.
		cout<<"Orden de la matriz: ";cin>>n;
	} while (n<=0);
	// Almacenando las componentes en la matriz.
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			cout<<"Por favor digite la componente ("<<i<<","<<j<<"): ";cin>>matriz[i][j];
		}
	}
	// Hallando la determinante.
	for (i=1;i<=n-1;i++) {
		for (j=i+1;j<=n;j++) {
			contador1 = contador1*(matriz[2][j]-(matriz[2][i]));
		}
	}
	// Mostrando la matriz generada al usuario.
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			cout<<matriz[i][j]<<"";
		}
		cout<<""<<endl;
	}
	// Mostrando el determinante al usuario.
	cout<<"La determinante de la matriz de orden "<<n<<" es = " <<contador1<<endl;
	getch();
	return 0;
}


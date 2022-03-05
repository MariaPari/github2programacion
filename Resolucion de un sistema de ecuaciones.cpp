// Programa para resolver un sistema de dos ecuaciones y dos incognitas.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int a,b,c,d,e,f,x1,y1;
	float determinante;
	// x1 y y1 seran las soluciones de nuestro sistema de ecuaciones.
	// a,b,c,d,e,f seran los coeficientes de las dos ecuaciones del sistema.
	cout<<"\tBienvenid@"<<endl;
	//Dando informacion acerca del programa al usuario.
	cout<<"En esta ocasion resolveremos un sistema de dos ecuaciones y dos incognitas."<<endl;
	cout<<"El sistema de ecuaciones es de la siguiente forma: "<<endl;
	cout<<"\tax + by = c"<<endl;
	cout<<"\tdx + ey = f"<<endl;
	cout<<"Para hallar las soluciones del sistema sea tan amable de completar lo siguiente: "<<endl;
	cout<<"Por favor digite el valor de a: ";cin>>a;
	cout<<"Por favor digite el valor de b: ";cin>>b;
	cout<<"Por favor digite el valor de c: ";cin>>c;
	cout<<"Por favor digite el valor de d: ";cin>>d;
	cout<<"Por favor digite el valor de e: ";cin>>e;
	cout<<"Por favor digite el valor de f: ";cin>>f;
	// Hallando la determinante del sistema.
	determinante = (a*e)-(b*d);
	// Analizando el tipo de sistema a tratarse.
	if ((a/d)==(b/e) && (a/d)==(c/f) && determinante==0) {
		cout<<"\nSe trata de un sistema compatible indeterminado."<<endl;
		cout<<"Es decir que tiene infinitas soluciones ya que su grafica muestra dos rectas superpuestas."<<endl;
	} 
	else {
		if ((a/d)==(b/e) && (a/d)!=(c/f) && determinante==0) {
			cout<<"\nSe trata de un sistema incompatible."<<endl;
			cout<<"Es decir no tiene solucion ya que su grafica muestra dos rectas paralelas."<<endl;
		} else {
			cout<<"\nSe trata de un sistema compatible determinado."<<endl;
			cout<<"Sus soluciones son: "<<endl;
			x1 = (c*e-b*f)/(determinante);
			y1 = (a*f-c*d)/(determinante);
			cout<<"\tx1 = "<<x1<<endl;
			cout<<"\ty1 = "<<y1<<endl;
			cout<<"\nComo se observa tiene unica solucion ya que su grafica muestra dos rectas con un punto de interseccion."<<endl;
		}
	}
	system("pause");
	return 0;
}

//Programa para realizar la division de polinomios con el metodo de horner.
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int a,b,c,d,e,f,g,h,opc;
	float m,n,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11;
	// opc =opcion
	// a,b,c,d,e,f,g,h son los coeficientes del dividendo y el divisor.
	// m,...,m11,n son los que nos ayudaran a hallar los coeficientes del cociente y resto de la division.
	cout<<"\tBienvenid@"<<endl;
	// Dando informacion acerca del programa al usuari@.
	cout<<"En esta ocasion resolveremos la division de polinomios por el metodo de Horner."<<endl;
	cout<<"Para la cual por favor elija una de las siguientes opciones:"<<endl;
	cout<<"1.- Dividendo de grado 4 y divisor de grado 2."<<endl;
	cout<<"2.- Dividendo de grado 3 y divisor de grado 2."<<endl;
	cout<<"3.- Dividendo de grado 2 y divisor de grado 1."<<endl;
	cout<<"Opcion: ";cin>>opc;
	switch (opc){ // Analizando la opcion escogida por el usuario.
	case 1:
		cout<<"La division de polinomios sera de la forma: (ax^4+bx^3+cx^2+dx+g)/(fx^2+hx+e)"<<endl;
		cout<<"Por favor digite el valor de a: ";cin>>a;
		cout<<"Por favor digite el valor de b: ";cin>>b;
		cout<<"Por favor digite el valor de c: ";cin>>c;
		cout<<"Por favor digite el valor de d: ";cin>>d;
		cout<<"Por favor digite el valor de g: ";cin>>g;
		cout<<"Por favor digite el valor de f: ";cin>>f;
		cout<<"Por favor digite el valor de h: ";cin>>h;
		cout<<"Por favor digite el valor de e: ";cin>>e;
		// Hallando los coeficientes de el cociente de la division.
		m = a/f;
		m1 = (-m*h);
		m2 = (-m*e);
		n = m1+b;
		m3 = n/f;
		m4 = (-m3*h);
		m5 = (-m3*e);
		m6 = c+m2+m4;
		m7 = m6/f;
		m8 = (-m7*h);
		m9 = (-m7*e);
		// Hallando los coeficientes del resto de la division.
		m10 = d+m8+m5;
		m11 = g+m9;
		// Analizando los resultados obtenidos para luego mostrarlo al usuario.
		if (m3>0) {
			if (m7>0) {
				if (m11>0) {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x + "<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x + "<<m11<<endl;
				} 
				else {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x + "<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x "<<m11<<endl;
				}
			} 
			else if (m11>0) {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x"<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x + "<<m11<<endl;
				} 
				else {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x"<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x"<<m11<<endl;
				}
		} 
		else if (m7>0) {
				if (m11>0) {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 "<<m3<<"x + "<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x + "<<m11<<endl;
				} 
				else {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 "<<m3<<"x + "<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x"<<m11<<endl;
				}
			} 
			else if (m11>0) {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x"<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x + "<<m11<<endl;
				} else {
					cout<<"\nEl cociente de la division es: "<<m<<"x^2 + "<<m3<<"x"<<m7<<endl;
					cout<<"El resto es: "<<m10<<"x"<<m11<<endl;
				}
		break;
	case 2:
		cout<<"La division de polinomios sera de la forma: (ax^3+bx^2+cx+d)/(fx^2+hx+e)"<<endl;
		cout<<"Por favor digite el valor de a: ";cin>>a;
		cout<<"Por favor digite el valor de b: ";cin>>b;
		cout<<"Por favor digite el valor de c: ";cin>>c;
		cout<<"Por favor digite el valor de d: ";cin>>d;
		cout<<"Por favor digite el valor de f: ";cin>>f;
		cout<<"Por favor digite el valor de h: ";cin>>h;
		cout<<"Por favor digite el valor de e: ";cin>>e;
		// Hallando los coeficientes del cociente de la division.
		m = a/f;
		m1 = (-m*h);
		m2 = (-m*e);
		n = m1+b;
		m3 = n/f;
		m4 = (-m3*h);
		m5 = (-m3*e);
		// Hallando los coeficientes del resto de la division.
		m6 = c+m2+m4;
		m7 = d+m5;
		// Analizando los resultados obtenidos para luego mostrarlo al usuario.
		if (m3>0) {
			if (m7>0) {
				cout<<"\nEl cociente de la division es: "<<m<<"x + "<<m3<<endl;
				cout<<"El resto es: "<<m6<<"x + "<<m7<<endl;
			} else {
				cout<<"\nEl cociente de la division es: "<<m<<"x + "<<m3<<endl;
				cout<<"El resto es: "<<m6<<"x"<<m7<<endl;
			}
		} else {
			if (m7>0) {
				cout<<"\nEl cociente de la division es: "<<m<<"x"<<m3<<endl;
				cout<<"El resto es: "<<m6<<"x + "<<m7<<endl;
			} else {
				cout<<"\nEl cociente de la division es: "<<m<<"x"<<m3<<endl;
				cout<<"El resto es: "<<m6<<"x"<<m7<<endl;
			}
		}
		break;
	case 3:
		cout<<"La division de polinomios sera de la forma: (ax^2+bx+c)/(fx+e)"<<endl;
		cout<<"Por favor digite el valor de a: ";cin>>a;
		cout<<"Por favor digite el valor de b: ";cin>>b;
		cout<<"Por favor digite el valor de c: ";cin>>c;
		cout<<"Por favor digite el valor de f: ";cin>>f;
		cout<<"Por favor digite el valor de e: ";cin>>e;
		// Hallando los coeficientes del cociente de la division.
		m = a/f;
		m1 = (-m*e);
		n = m1+b;
		m2 = n/f;
		m3 = (-m2*e);
		// Hallando el coeficiente del resto de la division.
		m4 = c+m3;
		// Analizando los resultados obtenidos para luego mostrarlo al usuario.
		if (m2>0) {
			cout<<"\nEl cociente de la division es: "<<m<<"x + "<<m2<<endl;
			cout<<"El resto es: "<<m4<<endl;
		} else {
			cout<<"\nEl cociente de la division es: "<<m<<"x"<<m2<<endl;
			cout<<"El resto es: "<<m4<<endl;
		}
		break;
	default:  // En el caso que el usuario digite una opcion fuera de los que hay.
		cout<<"\nOpcion no existente."<<endl;
	}
	getch();
	return 0;
}

// Programa que sirve para hallar el area, longitud(perimetro) y las medianas de un triangulo.
#include<iostream>
#include<conio.h>
#include<math.h>
#define PI 3.1415926536
#include<graphics.h>
using namespace std;
int main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm,(char*)"");
	int opc,m,n;
	float a,b,c,alfa,beta,gama,perimetro,area,s,x1,xa,xb,xc,y1,ya,yb,yc;
	cout<<"\tBienvenido estimad@"<<endl;
	//Dando informacion acerca del programa al usuari@.
	cout<<"En esta ocasion hallaremos el area, perimetro y las medianas de un triangulo."<<endl;
	cout<<"Para lo cual sea tan amable de escoger una de las siguientes opciones para la resolucion del triangulo:"<<endl;
	cout<<"1.- Dados 3 lados."<<endl;
	cout<<"2.- Dados 3 angulos."<<endl;
	cout<<"3.- Dado 2 lados y 1 angulo."<<endl;
	cout<<"4.- Dado 2 angulos y 1 lado."<<endl;
	cout<<"La opcion: ";cin>>opc;
	// Analizando la opcion escogida por el usuari@.
	switch (opc) {
	case 1:
		do {
			cout<<"Por favor digite el valor del lado a: ";cin>>a;
			cout<<"Por favor digite el valor del lado b: ";cin>>b;
			cout<<"Por favor digite el valor del lado c: ";cin>>c;
			// El triangulo no existira si la suma de las longitudes dos lados es menor a la longitud del tercer lado.
			if ((a+b)<c || (a+c)<b || (b+c)<a) {
				cout <<"El triangulo no existe, por favor complete de nuevo: "<<endl;
			}
		} while ((a+b)<c or (a+c)<b or (b+c)<a);
		// Analizando los lados para ver el tipo de triangulo a estudiarse.
		if ((a==b) && (a==c)) {
			cout<<"\nSe trata de un triangulo equilatero."<<endl;
			beta=PI/3;
			alfa=beta;
			gama=alfa;
		}
		else{
			if ((a==c) && (a!=b)) {
			cout<<"\nSe trata de un triangulo isosceles."<<endl;
			beta=acos((2*pow(a,2)-pow(b,2))/(2*pow(a,2)));
			alfa=(PI-beta)/(2);
			gama=alfa;
		    }
		    else{
		    	if ((a!=c) && (a==b)) {
			    cout<<"\nSe trata de un triangulo isosceles."<<endl;
			    beta=acos((2*pow(a,2)-pow(c,2))/(2*pow(c,2)));
			    alfa=(PI-beta)/(2);
		     	gama=alfa;
		        }
		        else{
			        cout<<"\nSe trata de un triangulo escaleno."<<endl;
			        alfa=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
		        	beta=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
			        gama=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)); 
				}
		    }
		}
		break;
	case 2:
		do {
			cout<<"Por favor digite el valor de alfa en grados: ";cin>>alfa;
			cout<<"Por favor digite el valor de beta en grados: ";cin>>beta;
			cout<<"Por favor digite el valor de gama en grados: ";cin>>gama;
			// Para que un triangulo exista,la suma de sus tres angulos debe ser igual a 180°.
			if ((alfa+beta+gama)>180 or (alfa+beta+gama)<180) {
				cout<<"La suma de los angulos no puede superar ni ser menos de los 180°, por favor complete de nuevo:"<<endl;
			}
		} while ((alfa+beta+gama)>180 or (alfa+beta+gama)<180);
		cout<<"Para hallar los demas datos se necesita por lo menos un lado."<<endl;
		cout<<"Por favor digite el valor del lado a: ";cin>>a;
		// Analizando los angulos para ver el tipo de triangulo a estudiarse.
		if ((alfa==90) || (beta==90) || (gama==90)) {
			cout << "\nSe trata de un triangulo rectangulo." << endl;
			alfa=(alfa*PI)/(180);
			beta=(beta*PI)/(180);
			gama=(gama*PI)/(180);
			b=(a*sin(gama))/(sin(beta));
			c=sqrt(pow(a,2)+pow(b,2));
		} 
		else{
			cout<<"\nSe trata de un triangulo oblicuangulo."<<endl;
			alfa=(alfa*PI)/(180);
			beta=(beta*PI)/(180);
			gama=(gama*PI)/(180);
			b=(a*sin(beta))/(sin(gama));
			c=(a*sin(alfa))/(sin(gama));
		}
		break;
	case 3:
		cout<<"Por favor digite el valor del lado a: ";cin>>a;
		cout<<"Por favor digite el valor del lado b: ";cin>>b;
		do {
			cout<<"Por favor digite el valor del angulo alfa en grados: ";cin>>alfa;
			// Al ser un angulo este no pude ser mayor o igual a 180°.
			if (alfa>=180) {
				cout<<"El angulo no puede ser mayor o igual a 180°, por favor complete de nuevo:"<<endl;
			}
		} while (alfa>=180);
		// Analizando los angulos para ver el tipo de triangulo a estudiarse.
		if ((a!=b) && (alfa==90)) {
			cout<<"\nEs un triangulo rectangulo."<<endl;
			c=sqrt(pow(a,2)+pow(b,2));
			beta=asin(a/c);
			gama=(PI/2)-beta;
		}
		else{
			if ((a==b) && (alfa==90)) {
			cout<<"\nEs una triangulo rectangulo-isosceles."<<endl;
			c=a*sqrt(2);
			beta=PI/4;
			gama=beta;
		    }
		    else{
		        if ((a==b) && (alfa!=90)) {
			    cout<<"\nEs un triangulo isosceles."<<endl;
			    alfa=(alfa*PI)/(180);
			    c=a*sqrt(2-2*cos(alfa));
		    	beta=(PI-alfa)/(2);
			    gama=beta;
		        }
		        else{
			       cout<<"\nEs un triangulo oblicuangulo."<<endl;
			       alfa=(alfa*PI)/(180);
			       c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(alfa));
			       beta=asin((b*sin(alfa))/(c));
			       gama=PI-alfa-gama;	
				}
	        }
	    }
		break;
	case 4:
		cout<<"Por favor digite el valor del lado a: ";cin>>a;
		do {
			cout<<"Por favor digite el valor de alfa en grados: ";cin>>alfa;
			cout<<"Por favor digite el valor de beta en grados: ";cin>>beta;
			// Al ser dos angulos, la suma de estos no puede ser mayor o igual a 180°.
			if ((alfa+beta)>=180) {
				cout<<"La suma de los dos angulos no puede ser mayor o igual a 180°, por favor complete de nuevo:"<<endl;
			}
		} while ((alfa+beta)>=180);
		// Analizando los angulos para ver el tipo de triangulo a estudiarse.
		if ((alfa==90) || (beta==90)) {
			cout<<"\nEs un triangulo rectangulo."<<endl;
			alfa=(alfa*PI)/(180);
			beta=(beta*PI)/(180);
			c=(a)/(sin(beta));
			b=sqrt(pow(c,2)-pow(a,2));
			gama=(PI/2)-beta;
		}
		else{
		   	if ((alfa==beta)) {
			cout<<"\nEs un triangulo isosceles."<<endl;
			alfa=(alfa*PI)/(180);
			beta=(beta*PI)/(180);
			gama=PI-2*alfa;
			b=(a*sin(alfa))/(sin(gama));
			c=b;
		    }
		    else{
		    cout<<"\nEs un triangulo oblicuangulo."<<endl;
			alfa=(alfa*PI)/(180);
			beta=(beta*PI)/(180);
			gama=PI-alfa-beta;
			c=(a*sin(alfa))/(sin(gama));
			b=(a*sin(beta))/(sin(gama));
			}
		}
		break;
	default: // Si el usurio pone otra opcion.
		cout<<"\nOpcion no existente."<<endl;
	}
	if ((opc==1) || (opc==2) || (opc==3) || (opc==4)) {
		// Hallando los vertices del triangulo.
		m=100;
		n=m+a*20;
		x1=(pow(c*20,2)-pow(b*20,2)-pow(n,2)+pow(m,2))/(2*(m-n));
		y1=(sqrtf(pow(b*20,2)-pow((x1-m),2)))+m;
		xa=(n+m)/(2);
		ya=(m+m)/(2);
		xb=(m+x1)/(2);
		yb=(m+y1)/(2);
		xc=(n+x1)/(2);
		yc=(m+y1)/(2);
		// Hallando el perimetro,area del triangulo.
		perimetro=a+b+c;
		s=(perimetro)/(2);
		area= sqrt(s*(s-a)*(s-b)*(s-c));
		// Mostrando al usuario los datos del triangulo.
		cout<<"\nLos lados del triangulo son: "<<endl;
		cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
		cout<<"c= "<<c<<endl;
		cout<<"\nLos angulos en radianes del triangulo son:"<<endl;
		cout<<"alfa = "<<alfa<<endl;
		cout<<"beta = "<<beta<<endl;
		cout<<"gama = "<<gama<<endl;
		cout.precision(4);
		cout<<"\nEl area del triangulo es: "<<area<<endl;
		cout<<"\nEl perimetro del triangulo es: "<<perimetro<<endl;
		//Mostrando al usuario la grafica del triangulo con las medianas correspondientes.
		cout<<"\nLas medianas del triangulo se muestran en la siguiente grafica: "<<endl;
		int vect[8];
		vect[0]=m;
		vect[1]=m;
		vect[2]=x1;
		vect[3]=y1;
		vect[4]=n;
		vect[5]=m;
		vect[6]=vect[0];
		vect[7]=vect[1];
		setfillstyle(9, LIGHTBLUE);
		fillpoly(3, vect);
		setcolor(YELLOW);
		line(m,m,xc,yc);
		setcolor(GREEN);
		line(x1,y1,xa,ya);
		setcolor(RED);
		line(n,m,xb,yb);
		getch();
	    closegraph();
	}
	return 0;
}


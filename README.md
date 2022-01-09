# Scientific-calculator
Calculadora científica con algunos bugs próximos a solucionar, pero bastante completa. / Scientific calculator with some bugs to be fixed soon, but quite complete.
AQUI EL CODIGO FUENTE EN C++ / HERE THE SOURCE CODE IN C++

// POR ALGUNA RAZON PARA INICIAR LA CALCULADORA NO BASTA CON  SOLO PRESIONAR ENTER, TIENES QUE INGRESAR ALGUN NUMERO Y PRESIONAR  ENTER PARA QUE MUESTRE TODAS LAS OPCIONES.
// FOR SOME REASON TO START THE CALCULATOR IT IS NOT ENOUGH TO JUST PRESS ENTER, YOU HAVE TO ENTER SOME NUMBER AND PRESS ENTER TO SHOW ALL THE OPTIONS.


#include<iostream>
#include<cmath>
using namespace std;
#define bol string

int main() {
	float a;
	float a1;
	float a2;
	float a3;
	float altura;
	float area;
	float b;
	float c;
	float cal1;
	float cal2;
	float cal3;
	float centenas;
	int d;
	float decenas;
	float f;
	float h;
	float i;
	float j;
	float l;
	float m;
	float n;
	int n1;
	float nu;
	int opcion;
	float p;
	float pi;
	string primo;
	float promedio;
	float r;
	float ra;
	float radio;
	float s;
	float salir;
	float superficie;
	float t;
	float t1;
	float t2;
	float t3;
	float t4;
	float umil;
	float unidades;
	float v;
	float vol;
	float volumen;
	float w;
	int x;
	salir = 0;
	cout << "Scientific calculator" << endl;
	do {
		cout << " " << endl;
		cout << "Press Intro to continue" << endl;
		cin >> x;
		cout << "Ingresar numero de la operacion que desea realizar + enter" << endl;
		cout << "1 - resta" << endl;
		cout << "2 - suma" << endl;
		cout << "3 - multiplicacion" << endl;
		cout << "4 - divicion" << endl;
		cout << "5 - potencia" << endl;
		cout << "6 - Seno" << endl;
		cout << "7 - Coseno" << endl;
		cout << "8 - ArcoTangente" << endl;
		cout << "9 - Lograritmo Natural, Funcion Exponencial" << endl;
		cout << "10 - Truncar" << endl;
		cout << "11 - Redondear" << endl;
		cout << "12 - Raiz Cuadrada" << endl;
		cout << "13 - Valor Absoluto" << endl;
		cout << "14 - Separar parte entera y decimal" << endl;
		cout << "15 - Hallar Factorial" << endl;
		cout << "16 - Averiguar si es primo" << endl;
		cout << "17 - Permutaciones Repetitivas" << endl;
		cout << "18 - Hallar el Volumem de un  cono circular" << endl;
		cout << "19 - Hallar el area de un triangulo - Formula del Heron" << endl;
		cout << "20 - Promedio" << endl;
		cout << "21 - Frecuencia" << endl;
		cout << "22 - Puntuacion Diferencial" << endl;
		cout << "23 - Tipificacion" << endl;
		cout << "24 - Probabilidad" << endl;
		cout << "25 - Area de un triangulo" << endl;
		cout << "26 - area de un rombo" << endl;
		cout << "27 - area de un poligono" << endl;
		cout << "28 - area de un trapecio" << endl;
		cout << "29 - Area de un paralelograma" << endl;
		cout << "30  - PENDULO SIMPLE" << endl;
		cout << "31  - Ciclo de un movimiento circular" << endl;
		cout << "32 - Area de un circulo" << endl;
		cout << "33 - Perimetro de un circulo" << endl;
		cout << "34 - Promedio de 3 calificaciones" << endl;
		cout << "35 - volumen de un cilindro" << endl;
		cout << "36 - Superficie de un cilindro" << endl;
		cout << "37 - Volumen de una caja" << endl;
		cout << "38 - # entero, digitos en: Miles,centenas, decenas y unidades" << endl;
		cout << " " << endl;
		cout << "0 - para Salir" << endl;
		cout << " " << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "resta" << endl;
			cout << "ingrese primer digito" << endl;
			cin >> a;
			cout << "ingrese segundo digito" << endl;
			cin >> b;
			cout << "resultado" << endl;
			cout << a-b << endl;
			break;
		case 2:
			cout << "suma" << endl;
			cout << "ingrese primer digito" << endl;
			cin >> a;
			cout << "ingrese segundo digito" << endl;
			cin >> b;
			cout << "reslutado" << endl;
			cout << a+b << endl;
			break;
		case 3:
			cout << "multiplicacion" << endl;
			cout << "ingrese primer digito" << endl;
			cin >> a;
			cout << "ingrese segundo digito" << endl;
			cin >> b;
			cout << "resultado" << endl;
			cout << a*b << endl;
			break;
		case 4:
			cout << "divicion" << endl;
			cout << "ingrese un primer digito" << endl;
			cin >> a;
			cout << "ingrese divisor" << endl;
			cin >> b;
			cout << "resultado" << endl;
			cout << a/b << endl;
			break;
		case 5:
			cout << "potencia" << endl;
			cout << "ingrese un digito" << endl;
			cin >> a;
			cout << "ingrese exponente" << endl;
			cin >> b;
			cout << "resultado" << endl;
			cout << pow(a,b) << endl;
			break;
		case 6:
			cout << " Seno" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			cout << "Seno:" << sin(n) << endl;
			break;
		case 7:
			cout << "coseno" << endl;
			cout << "ingresar numero" << endl;
			cin >> n;
			cout << "Coseno:" << cos(n) << endl;
			break;
		case 8:
			cout << "ArcTangente" << endl;
			cout << "ingresar numero" << endl;
			cin >> n;
			cout << "ArcTangente:" << atan(n) << endl;
			break;
		case 9:
			cout << " Lograritmo Natural, Funcion Exponencial" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			if (n<=0) {
				cout << "El numero debe ser mayor a cero!" << endl;
			} else {
				cout << "Log Nat.:" << log(n) << endl;
				cout << "Func Expon.:" << exp(n) << endl;
			}
			break;
		case 10:
			cout << "Truncar" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			cout << "Truncar:" << int(n) << endl;
			break;
		case 11:
			cout << "Redondear" << endl;
			cout << "Ingresar Numero" << endl;
			cin >> n;
			cout << "Redondear:" << int(n+.5) << endl;
			break;
		case 12:
			cout << " Raiz Cuadrada" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			cout << "Raiz Cuad.:" << sqrtf(n) << endl;
			break;
		case 13:
			cout << "Valor Absoluto" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			cout << "Valor Abs.:" << abs(n) << endl;
			break;
		case 14:
			cout << " Separar parte entera y decimal" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			cout << "Parte Entera:" << int(n) << endl;
			cout << "Parte Decimal:" << n-int(n) << endl;
			break;
		case 15:
			cout << "12- Hallar Factorial" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			if (n!=int(n)) {
				cout << "El numero debe ser entero!" << endl;
			} else {
				if (abs(n)>50) {
					cout << "Resultado muy grande!" << endl;
				} else {
					r = 1;
					f = 1;
					while (f<=abs(n)) {
						if (n<0) {
							r = (-f)*r;
						} else {
							r = f*r;
						}
						f = f+1;
					}
					cout << "Factorial:" << r << endl;
				}
			}
			break;
		case 16:
			cout << "Averiguar si es primo" << endl;
			cout << "Ingresar Numero:" << endl;
			cin >> n;
			if (n!=int(n)) {
				cout << "El numero debe ser entero!" << endl;
			} else {
				primo = "Si";
				if (n/2==int(n/2)) {
					primo = "No";
				}
				if (n<0) {
					nu = n-1;
				} else {
					nu = n;
				}
				nu = sqrtf(nu);
				f = 3;
				while (f<=nu && primo=="Si") {
					if (n/f==int(n/f)) {
						primo = "No";
					}
					f = f+2;
				}
				cout << "Numero Primo:" << primo << endl;
				if (f==3) {
					f = 4;
				}
				if (primo=="No") {
					cout << n << "=" << f-2 << "x" << n/(f-2) << endl;
				}
			}
			break;
		case 17:
			cout << "permutaciones repetitivas" << endl;
			p = 1;
			s = 0;
			cout << " INGRESE NUMERO DE ELEMETOS " << endl;
			cin >> n1;
			r = n1;
			cout << " INGRESE TOTAL DE ELEMENTOS " << endl;
			cin >> n;
			a = n;
			do {
				p = (p*a);
				s = s+1;
			} while (s!=r);
			cout << " RESULTADO PERMUTACIONES " << (p) << endl;
			break;
		case 18:
			cout << "Hallar el volumen de un cono circular" << endl;
			h = 0;
			r = 0;
			p = (3.14);
			v = 0;
			cout << " Ingrese Altura (CM) " << endl;
			cin >> n;
			h = h+n;
			cout << " Ingrese Radio (CM) " << endl;
			cin >> n;
			r = r+n;
			r = (r*r);
			v = (p*r);
			v = (v*h);
			v = (v/3);
			cout << " el volumen es " << v << "CM" << endl;
			break;
		case 19:
			cout << "Hallar el area de un triangulo - Formula del Heron" << endl;
			cout << " " << endl;
			cout << "formula= S es el semiperímetro del triángulo...S= a+b+c/2 " << endl;
			a = 0;
			b = 0;
			c = 0;
			d = 0;
			s = d;
			a1 = 0;
			a2 = 0;
			a3 = 0;
			j = 0;
			area = s;
			salir = 0;
			cout << "digite lado a y presione enter para continuar" << endl;
			cin >> n;
			a = n;
			cout << "digite lado b y presione enter para continuar" << endl;
			cin >> n;
			b = n;
			cout << "digite lado c y presione enter para continuar" << endl;
			cin >> n;
			c = n;
			d = a+b;
			d = d+c;
			d = d/2;
			a1 = d-a;
			a2 = d-b;
			a3 = d-c;
			j = (d)*(a1)*(a2)*(a3);
			j = sqrtf(j);
			cout << "el area es " << j << endl;
			break;
		case 20:
			cout << "Promedio" << endl;
			t = 0;
			d = 0;
			c = 0;
			cout << "ingrese numero total de digitos que va a ingresar" << endl;
			cin >> n;
			t = n;
			do {
				cout << "Ingrese digito" << endl;
				cin >> n;
				d = (d+n);
				c = c+1;
			} while (c!=t);
			cout << "Resultado Promedio " << d/t << endl;
			break;
		case 21:
			cout << "Frecuencia" << endl;
			f = 0;
			cout << "ingrese numero de reboluciones (bueltas)" << endl;
			cin >> n;
			r = n;
			cout << "   " << endl;
			cout << "ingrese tiempo" << endl;
			cin >> n;
			t = n;
			f = r/t;
			cout << "  " << endl;
			cout << " la frecuencia es " << f << endl;
			break;
		case 22:
			cout << "Puntuacion Diferencial" << endl;
			cout << "  " << endl;
			cout << "ingrese puntuacion directa" << endl;
			cin >> n;
			d = n;
			cout << "ingrese medida aritmetica" << endl;
			cin >> n;
			a = n;
			t = d-a;
			cout << " la puntuacion diferencial es " << t << endl;
			break;
		case 23:
			cout << "Tipificacion" << endl;
			cout << "ingrese puntuacion diferencial" << endl;
			cin >> n;
			p = n;
			cout << "  " << endl;
			cout << "ingrese desviacion tipica" << endl;
			cin >> n;
			d = n;
			t = p/d;
			cout << " El resultado de la tipificacion es " << t << endl;
			break;
		case 24:
			cout << "Probabilidad" << endl;
			cout << " ingrese cantidad de casos favorables" << endl;
			cin >> n;
			f = n;
			cout << "Ingrese cantidad de casos posibles" << endl;
			cin >> n;
			s = n;
			p = f/s;
			cout << "La Probabilidad es" << p << endl;
			break;
		case 25:
			cout << "area de un trinagulo" << endl;
			cout << "ingrese base del trangulo" << endl;
			cin >> n;
			b = n;
			cout << "ingrese altura del triangulo" << endl;
			cin >> n;
			l = n;
			a = (b+h)/2;
			cout << "el area del triangulo es " << a << endl;
			break;
		case 26:
			cout << "area de un rombo" << endl;
			cout << "ingrese medida lado del rombo" << endl;
			cin >> n;
			i = n;
			cout << "Ingrese medida lado del rombo" << endl;
			cin >> n;
			d = n;
			a = (i*d)/2;
			cout << "el area del rombo es" << a << endl;
			break;
		case 27:
			cout << "area de un poligono" << endl;
			cout << "Ingrese dato triangulo 1" << endl;
			cin >> n;
			t1 = n;
			cout << "ingrese dato triangulo 2" << endl;
			cin >> n;
			t2 = n;
			cout << "ingrese dato triangulo 3" << endl;
			cin >> n;
			t3 = n;
			cout << "ingrese dato triangulo 4" << endl;
			cin >> n;
			t4 = n;
			a = (t1+t2+t3+t4);
			cout << "el area de un poligono es " << a << endl;
			break;
		case 28:
			cout << "area de un trapecio" << endl;
			cout << "Ingrese dato de base" << endl;
			cin >> n;
			b = n;
			cout << "Ingrese dato superficie superior" << endl;
			cin >> n;
			s = n;
			cout << "Ingrese dato altura" << endl;
			cin >> n;
			h = n;
			a = (b*s)*h;
			a = a/2;
			cout << "El area del trapecio es " << a << endl;
			break;
		case 29:
			cout << "area de un paralelograma" << endl;
			cout << "ingrese dato lado" << endl;
			cin >> n;
			l = n;
			cout << "ingrese dato altura" << endl;
			cin >> n;
			h = n;
			a = (l*h);
			cout << "el area del paralelograma es" << a << endl;
			break;
		case 30:
			cout << "PENDULO SIMPLE" << endl;
			cout << " " << endl;
			cout << "Valor de masa:M" << endl;
			cout << "Valor de longitud 1:L" << endl;
			cout << "Valor de longitud 2:X" << endl;
			cout << "Valor constante gravedad = g: 9.8 mt * seg^2" << endl;
			cout << "formula F= -M*g sobre L y a esto * X" << endl;
			cout << " " << endl;
			cout << "Digite M:" << endl;
			cin >> m;
			cout << "Digite L:" << endl;
			cin >> l;
			cout << "Digite X:" << endl;
			cin >> x;
			t = -(m*9.8*x)/l;
			cout << "La fuera del movimiento es:" << endl;
			cout << t << endl;
			break;
		case 31:
			cout << "Ciclo de un movimiento circular" << endl;
			cout << " " << endl;
			cout << "formula T= pi*2 sobre W" << endl;
			cout << "W es la vel. angular" << endl;
			cout << "Un radian es igual 1.150763" << endl;
			cout << " " << endl;
			cout << "Digite W" << endl;
			cin >> w;
			cout << "Digite R" << endl;
			cin >> r;
			r = 3.1416*2;
			cin >> t;
			t = r/w;
			cout << "EL CICLO ES:" << endl;
			cout << t << endl;
			// circulo//
			break;
		case 32:
			cout << "Area de un circulo" << endl;
			cout << "Digite el radio del circulo" << endl;
			cin >> r;
			area = M_PI*(pow(r,2));
			cout << "El area del circulo es: " << area << endl;
			break;
		case 33:
			cout << "Perimetro de un circulo" << endl;
			cout << "Digite el radio del circulo" << endl;
			cin >> r;
			p = 2*M_PI*r;
			cout << "El perimetro del circulo es: " << p << endl;
			// promedio//
			break;
		case 34:
			cout << "Promedio de 3 calificaciones" << endl;
			cout << " " << endl;
			cout << "Escribe las calificaciones" << endl;
			cin >> cal1 >> cal2 >> cal3;
			promedio = (cal1+cal2+cal3)/3;
			cout << "El promedio es: " << promedio << endl;
			break;
		case 35:
			cout << "volumen de un cilindro" << endl;
			cout << "ingresa el radio del cilindro" << endl;
			cin >> radio;
			cout << "Ingresa la altura del cilindro" << endl;
			cin >> altura;
			superficie = M_PI*(radio*radio);
			volumen = superficie*altura;
			cout << "El volumen del cilindro es: " << volumen << endl;
			break;
		case 36:
			cout << "Superficie de un cilindro" << endl;
			cout << "Ingresa el radio del cilindro" << endl;
			cin >> ra;
			cout << "Ingresa la altura del cilindro" << endl;
			cin >> h;
			area = 2*M_PI*ra*(ra+h);
			cout << "La superficie del cilindro es: " << area << endl;
			break;
		case 37:
			cout << "Volumen de una caja" << endl;
			cout << " Ingresa el ancho" << endl;
			cin >> a;
			cout << "Ingresa el largo" << endl;
			cin >> l;
			cout << "Ingresa el alto" << endl;
			cin >> h;
			vol = a*l*h;
			cout << "El volumen de la caja es: " << vol << endl;
			break;
		case 38:
			cout << "# entero, digitos en: Miles,centenas, decenas y unidades" << endl;
			cout << "Ingrese un digito" << endl;
			cin >> d;
			if (d>0 && d<9999) {
				unidades = d%10;
				d = int(d/10);
				decenas = d%10;
				d = int(d/10);
				centenas = d%10;
				d = int(d/10);
				umil = d%10;
				d = int(d/10);
				cout << "El numero tiene: " << endl;
				cout << umil << " = Umil" << endl;
				cout << centenas << " = Centenas" << endl;
				cout << decenas << " = Decenas" << endl;
				cout << unidades << " = Unidades" << endl;
			}
			break;
		case 0:
			salir = 1;
			break;
		default:
			cout << "Opcion No Valida!" << endl;
		}
	} while (salir!=1);
	return 0;
}


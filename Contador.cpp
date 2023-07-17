#include <iostream> 
#include <stdlib.h> 
#include <cstring>
#include <locale.h> 
using namespace std;
char palabra [50];
int tam, vocales;
int a[20]; int e[20]; int i[20]; int o[20]; int u[20];
int A[20]; int E[20]; int I[20]; int O[20]; int U[20];
void entrada(){
	cout<<"Diguite una frase: "<<endl;
	cin.getline(palabra, 50);
	tam = strlen(palabra);
}
void proceso(){
	int vocales = 0;
	for (int ci=0; ci < tam; ci++){
		if ('a' == palabra[ci]){
			vocales++;
			a[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras a en la frase es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (a[ci] != NULL){
			cout<<"en la posicion "<<a[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('e'== palabra[ci]){
			vocales++;
			e[ci]=ci;
		}
					if (vocales > 0){
		cout<<"la cantidad de letras e en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (e[ci] != NULL){
			cout<<"en la posicion "<<e[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('i'== palabra[ci]){
			vocales++;
			i[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras i en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (i[ci] != NULL){
			cout<<"en la posicion "<<i[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('o'== palabra[ci]){
			vocales++;
			o[ci]=ci;
						if (vocales > 0){
		}
		cout<<"la cantidad de letras o en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (o[ci] != NULL){
			cout<<"en la posicion "<<o[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('u'== palabra[ci]){
			vocales++;
			u[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras u en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (u[ci] != NULL){
			cout<<"en la posicion "<<u[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('A'== palabra[ci]){
			vocales++;
			A[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras A en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (i[ci] != NULL){
			cout<<"en la posicion "<<i[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('E'== palabra[ci]){
			vocales++;
			E[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras E en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (E[ci] != NULL){
			cout<<"en la posicion "<<E[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('I'== palabra[ci]){
			vocales++;
			I[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras I en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (I[ci] != NULL){
			cout<<"en la posicion "<<I[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('O'== palabra[ci]){
			vocales++;
			O[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras O en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (O[ci] != NULL){
			cout<<"en la posicion "<<O[ci]<<endl;
			}
		}
	}
		vocales = 0;
		if ('U'== palabra[ci]){
			vocales++;
			U[ci]=ci;
		}
						if (vocales > 0){
		cout<<"la cantidad de letras U en la palabra es: "<<vocales<<endl;
		for(int ci=0; ci < tam; ci++){
			if (U[ci] != NULL){
			cout<<"en la posicion "<<U[ci]<<endl;
			}
		}
	}
		vocales = 0;
	}

	







}
void salida(){

}
int main()
{
setlocale(LC_ALL, "spanish");
entrada();
proceso();
salida();
return 0; 
}

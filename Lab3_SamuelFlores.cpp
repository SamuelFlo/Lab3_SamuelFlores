#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include<time.h>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using namespace std;

void ejercicio1(){
	srand(time(NULL));
	int num = 10000+rand()%(99999-10000);
	string random=to_string(num);
	cout<<random<<endl;
	int cont=1;
	string adivina;
	while(cont<=5){
		cout<<"Ingrese 5 numeros: "<<endl;
		cin>>adivina;
		for(int i=0;i<random.length();i++){
			if(random[i]==adivina[i]){
				cout<<"El numero "<<random[i]<<" esta correcto en esa posicion"<<endl;
			}
		}
		for(int i=0;i<random.length();i++){
			for(int j=0;j<adivina.length();j++){
				if(random[i]==adivina[j]){
					cout<<"El numero: "<<adivina[j]<<" dentro del arreglo"<<endl;

				}
	
			}	
			

		}
		cont++;

	}
}

void ejercicio2(){
	int posicion1=0,contadordex=0,posicion2;
	double total = 0.0;
	string cadena,a1,b1,c1;
	int a,b,c;
	cout<<"Si la x no tiene un valor por favor ponerle un 1"<<endl;
	cout<<"Ingrese su polinomio: "<<endl;
	cin>>cadena;
	for (int i=0; i<cadena.length(); i++){
		if((cadena[i]=='x')&&(contadordex==0)){
			posicion1=i;
			contadordex++;
		}else if((cadena[i]=='x')&&(contadordex==1)){
			posicion2=i;
			contadordex++;
		}

	}
	for(int i=0; i<posicion1;i++){
		a1+=cadena[i];

	}
	for(int i=posicion1+3;i<posicion2;i++){
		b1+=cadena[i];
	}
	for(int i=posicion2+1;i<cadena.length();i++){
		c1+=cadena[i];

	}
	a = atoi(a1.c_str());
	b = atoi(b1.c_str());
	c = atoi(c1.c_str());
	
	int b2=pow(b,2);
	int raiz = b2-(4*a*c);
	if(raiz<0){
		cout<<"NO SE PUEDE FACTORIZAR"<<endl;

	}else{
		total = -b+sqrt(raiz);
		cout<<"(x+"<<total/2*a<<")(x-"<<total/2*a<<")"<<endl;
	}

	
}

void ejercicio3(){
	int size;
	int numero=0;
	cout<<"Ingrese el size del arreglo: "<<endl;
	cin>>size;
	int array[size];

	srand(time(NULL));
	for(int i=0;i<size;i++){
		numero = rand()%100+1;
		array[i]=numero;

	}
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}

}

int menu(){
	int opcion=0;
	do{
		cout<<"MENU"<<endl
		<<"1. Ejercicio 1"<<endl
		<<"2. Ejercicio 2"<<endl
		<<"3. Ejercicio 3"<<endl
		<<"4. Salir"<<endl;
		cin>>opcion;
		if(opcion<1||opcion>4){
			cout<<"Opcion incorrecta"<<endl;
			opcion=0;
		}else{
			return opcion;

		}
	}while(opcion==0);
}
int main(){
	bool seguir=true;
	while(seguir){
		switch(menu()){
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;
			case 4:
				seguir =false;
				break;

		}
	}

	return 0;
}

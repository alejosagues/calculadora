#include <iostream>
using namespace std;

int sumar(int,int);
int restar(int,int);
double resultado;
int multiplicar(int,int);
double dividir(int,int);
int factorear(int);
int potenciar(int,int);

int main(){
	while(true){
	int opcion;
	cout<<"Elija la operacion a realizar suma = 0 resta = 1 multiplicacion = 2 division = 3 factorial = 4 potenciar = 5 \n";
	cin>>opcion;
	int numero[2];
	if (opcion==4){
	cout<<"Ingrese numero1: \n";
	cin>>numero[0];
	numero[1]=1;
	}
	else{
	cout<<"Ingrese numero1: \n";
	cin>>numero[0];
	cout<<"Ingrese numero2; \n";
	cin>>numero[1];
	}
	if (opcion==0){
	resultado=sumar(numero[0],numero[1]);
	cout<<resultado;
	}
	else if (opcion==1){
	resultado=restar(numero[0],numero[1]);
	cout<<resultado;
	}
	else if (opcion==2){
	resultado=multiplicar(numero[0],numero[1]);
	cout<<resultado;
	}
	else if (opcion==3){
		if (numero[1]==0){
		cout<<"No se puede dividir por 0 \n";
		}
		else {
	resultado=dividir(numero[0],numero[1]);
	cout<<resultado;}
	}
	else if (opcion==4){
		resultado=factorear(numero[0]);
		cout<<resultado;
	}
	else if (opcion==5){
		resultado=potenciar(numero[0],numero[1]);
		cout<<resultado;
	}
	else{
	cout<<"Opcion no valida\n";
	}
	int num;
	cout<<"\nSi desea continuar ingrese 1, para salir ingrese otro numero \n";
	cin>>num;
	if (num!=1){
		break;
	}
	}
	return 0;
}
int restar(int num1, int num2){
	int resta= num1 - num2;
	return resta;
}
int sumar(int num1, int num2){
	int suma=  num1 + num2;
	return suma;
}
int multiplicar(int num1,int num2){
	int multip=num1*num2;
	return multip;
}
double dividir(int num1,int num2){
	double div=num1/num2;
	return div;
}
int factorear(int i){
		int factoreo=1;
		for (i;i>=1;i-=1){
			factoreo=factoreo*i;
		}
	return factoreo;
}
int potenciar(int num1, int num2){
	int pot;
	pot =1;
	for(int i=0;i<num2;i++){
		pot=pot*num1;
	}
	return pot;
}

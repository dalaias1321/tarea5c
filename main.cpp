#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   int opcion;
   double n1, n2, rectangulo, circulo, kilo, met;
   cout<<"======================"<<endl;
   cout<<"=  MENU  ="<<endl;
   cout<<">  1. Circulo  <"<<endl;
   cout<<">   2. Rectangulo  <"<<endl;
   cout<<">   3. Metros a Kilometros  <"<<endl;
   cout<<">   4. Centrimetros a metros  <"<<endl;
   cout<<">   5. Salir  <"<<endl;
   cout<<"======================"<<endl;
   cout<<"Elija la opcion que desee ejecutar: "<<endl;
   
   cin>>opcion;
   
   while(opcion != 5) {
		if(opcion ==1) {
			system ("cls");
			cout<<"Ingrese el radio del circulo: "<<endl;
			cin>>n1;
			circulo= (n1*n1)*3.14;
			cout<<"El area del circulo es igual a : "<<circulo<<endl;
			cout<<"By Dalaias Rivera ;)"<<endl;
			
			
		}
		else if(opcion==2){
			system ("cls");
			cout<<"Ingrese la base del rectangulo: "<<endl;
			cin>>n1;
			cout<<"Ingrese la altura del rectangulo: "<<endl;
			cin>>n2;
			rectangulo=n1*n2;
			cout<<"El area del rectangulo es igual a :"<<rectangulo<<endl;
			cout<<"By Dalaias Rivera ;)"<<endl;
		}
		else if(opcion==3){
		system ("cls");
		cout<<"Ingrese la cantidad de metros que desea convetir: "<<endl;
		cin>>n1;	
		kilo=n1*0.001;
		cout<<"Es equivalente a: "<<kilo<< " kilometros"<<endl;
		cout<<"By Dalaias Rivera ;)"<<endl;	
		}
		else if(opcion==4){
			system ("cls");
			cout<<"Ingrese la cantidad de centimetros que desea convertir: "<<endl;
			cin>>n1;
			met=n1*0.01;
			cout<<"Es equivalente a :"<<met<< " metros"<<endl;
			cout<<"By Dalaias Rivera ;)"<<endl;
		}
		else{
			cout<<"Opcion no valida :("<<endl;
		}
		system ("pause");
		system ("cls");
		cout<<"======================"<<endl;
	cout<<"=      MENU          ="<<endl;
	cout<<">   1. Circulo      <"<<endl;
	cout<<">   2. Rectangulo       <"<<endl;
	cout<<"> 3. Metros a Kilometros    <"<<endl;
	cout<<"> 4. Centimetros a metros      <"<<endl;
	cout<<">    5. Salir    <"<<endl;
	cout<<"======================"<<endl;
	cout<<"Elija la opcion que desee ejecutar: "<<endl;
	cin>>opcion;
	}
	system ("pause");
	
	
	
	

	return 0;
}

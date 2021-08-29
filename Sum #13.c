#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define cuenta 472395814

//FUNCION DEPOSITO
float depo(float capital,float d){

	float saldo;
	capital+=(capital*0.0125)+d;
	return(capital);
 }
  //FUNCION RETIRO
  float ret(float capital,float retiro){
   float saldo;
   capital=capital-retiro;
   return(capital);
   
 }
 //FUNCION TRANSFERENCIA
 float transfer(float capital,float trans){
  float saldo;
  capital=capital-trans;
  return(capital);
}

//PROGRAMA PRINCIPAL
int main(){
int menu[99],i;
float monto[99];
float capital,deposito,transferencia,opc,cont,saldo,retiro,contret,conttran,acum,contdep;
int contrase;
 cont=0;
 contdep=0;
 contret=0;
 conttran=0;
 acum=0;
 i=0;
 char nombre[50];
 
	printf("\t**BIENVENIDO AL BANCO ABC**\n");
	printf("Por favor ingrese su nombre \n");
	gets(nombre);
	printf("Ingrese su numero de cuenta\n");
	scanf("%d",&contrase);
	system("CLS");
if(contrase!=cuenta){
do{
system("CLS");
printf("Numero de cuenta invalido\n");
printf("Ingrese su numero de cuenta\n");

scanf("%d"",&contrase);
system("CLS");
}while(contrase!=cuenta);}

if(contrase==cuenta){
	printf("\t SEA BIENVENIDO A SU CUENTA\n");
	printf("Ingrese su capital\n");
	scanf("%f",&capital);
	
if(capital>=100){
do{
	printf("\nESCOJA LA OPCION QUE DESEA REALIZAR\n");
	printf("1.Deposito \n2.Retiro \n3.Transferencia \n4.Salir \OPCION:");
	scanf("%f",opc);
	system("CLS");
if(opc>4 ||opc<1){
	printf("Opcion no valida\n");
	printf("Por favor ingrese una opcion valida\n");
}

//DEPOSITO
if(opc==1){
   if(cont<=99){
   		i++;
   	printf("Ingrese el monto que desea depositar\n");
   	scanf("%f";&deposito);
   	saldo=depo(capital,deposito);
   	capital+=(capital*0.0125)+deposito;
   	printf("Su saldo actual es de:%f,saldo");
   	contdep++;
   	monto[i]=deposito;
   	menu[i]=1;}
   	else{
	   printf("Usted ha alcanzado el numero maximo de transacciones");
	   printf("Su saldo actual es de:%f",saldo);
	   
	}
  }
  //RETIRO
  if(opc==2){
  	if(contret>=4 || cont>=100){
	  printf("Lo sentimos, usted ha alcanzado el maximo de retiros o transacciones por dia\n");}
	  if(contret<=3 && cont<=99 && acum<1500){
	  	i++;
	  	printf("Ingrese el monto que desea retirar\n");
	  	scanf("%f",&retiro);
	  	saldo=ret(capital-retiro);
	  	contret++;
	  	// cont++;
	  	acum=acum+retiro;
	  	monto[i]=retiro;
	  	menu[i]=2;
	    }
	    if(retiro>1500){
		i--;
		printf("Usted no puede retirar esta cantidad ya que su capital quedara bpor debajo de los 100 dolares\n");
		capital=capital+retiro;
		saldo=saldo+retiro;
		//cont--;
		contret--;
		acum=acum-retiro;
	  }
	  if(acum>=1500){
	  	i--;
	  	printf("Usted ha alcanzado el monto maximo que puede retirar\n");
	  }
		printf("Su saldo actual es de:%f,saldo");
	}
	//TRANSFERENCIA
	if(opc==3){
		if(conttran>2 || cont>=100){
			i--;
		printf("Lo sentimos,usted ha alcanzado el numero maximo de transferencias o transacciones posibles\n");
		}
	   if(conttran<=2 && cont<=99){
	   		i++;
	   	printf("Ingrese el monto que desea transferir\n");
	   	scanf("%f,&transferencia");
	   	saldo=transfer(capital,transferencia);
	   	capital=capital-transferencia;
	   	//cont++;
	   	conttran++;
	   	menu[i]=3;
	   	monto[i]=transferencia;}
	if(saldo<100){
		i--;
		printf("Usted no puede retirar esta cantidad quedara por debajo de los 100 dolares\n");
		capital=capital+retiro;
		saldo=saldo+transferencia;
		//cont++;
		conttran--;
	  }
	  	printf("Su saldo actual es de:%f", saldo);
	}
	cont=contdep+conttran;
	if(opc==4){
		printf("\t BANCO ABC-ESTADO DE CUENTA\n");
		printf("Cliente:%s,nombre");
		printf("\nN de Cuenta:%d,contrase");
		printf("nN\t Tipo de transaccion \t Monto\n");
		for(i=4;i<=cont;i++){
			printf("%i",i);
			if(menu[i]==1){
				printf("\t DEPOSITO");
				printf("\t\t%.2f\n",monto[i]);}
			else if(menu[i]==2){
				printf("\t RETIRO\t\t\t %2.f\n";monto[i]);}
			else if(menu[i]==3){
				printf("\t TRANSFERENCIA\t\t %2.f\n",monto[i]);}
		  }
		  printf("\n Su saldo es:%f",capital);
		  
		  
		}
		}while(opc==1|| opc==2|| opc==3 || opc>4 || opc<1);
		}
		else{
			printf("Usted no puede tener un capital menor a 100");
		}
		}
		}

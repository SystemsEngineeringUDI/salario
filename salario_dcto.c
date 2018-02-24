/*
@autor:
 *Cesar villalobos
 * Estudiante: Ing.Sistemas UDI
Programa que pide la cedula y el salario bruto de un empleado, si el salario bruto es superior a 500mil se
le hará un descuento del 10% si no será un descuento del 5%; se debe imprimir la cedula, salario bruto
el descuento y el salario neto
*/

#include <stdio.h>
int main(){
	int cedula,salbruto,dcto,salneto;
	printf("Ingrese la cedula: "); //Se pide la cedula
	scanf("%d",&cedula); 
	printf("Ingrese el salario bruto: "); //Se pide el salario bruto
	scanf("%d",&salbruto);
	if(salbruto>500000){ //Se aplica la condicion
		dcto=salbruto*0.1; //Se halla el descuento
		salneto=salbruto-dcto; //Se halla el salario neto
	}else{
		dcto=salbruto*0.05;
		salneto=salbruto-dcto;
	}
	printf("La cedula es: %d, el salario bruto es: %d, el descuento es: %d y salario neto es:%d ",cedula,salbruto,dcto,salneto); //Se imprime las variables
}

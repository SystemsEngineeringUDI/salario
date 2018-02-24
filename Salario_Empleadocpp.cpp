/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
	int cedula, salario_neto,salario_bruto,descuento;
	cout<<"Digite la cedula del empleado\n";
	cin>>cedula;
	cout<<"Digite el salario del empleado\n";
	cin>>salario_bruto;
	if(salario_bruto > 500000){//si su salario es mayor a 500000 se aplica un descuento del 10%
		descuento=0.1*salario_bruto;
	}
	else{//si su salario es menor o igual a 500000 se aplica un descuento del 5%
		descuento=0.05*salario_bruto;
	}
	salario_neto=salario_bruto-descuento;
	cout<<"cedula "<<cedula;
	cout<<"\nsalario bruto "<<salario_bruto;
	cout<<"\nDescuento "<<descuento;
	cout<<"\nSalario neto "<<salario_neto;
}

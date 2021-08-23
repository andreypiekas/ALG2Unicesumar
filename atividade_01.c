#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float salario, novosalario;
    float abono = 150.00;
    float reajuste = 0.075;
    printf("=========================================================\n");
    printf("|            Empresa NaoVemPedirAumento                 |\n");
    printf("|             Nome: Andrey Gheno Piekas                 |\n");
    printf("|                 RA: 21095958-5                        |\n");
    printf("=========================================================\n");
    printf("\n");
    printf("Bem Vindo\n");
    printf("\n");
    printf("Colaborador, insira seu salário: \n");
   	printf("\n");
    printf("R$ ");	
    scanf ("%f", &salario);
    printf("\n");
   
    if (salario <= 1750.00){
        novosalario = (salario * reajuste) + salario + abono;
        printf("Salário inferior ou igual a R$ 1750,00\n");
       	printf("Abono salárial de R$ R$ 150.00\n");
        printf("Aumento de salário de R$ %.2f\n", novosalario-salario);

    }else{
        novosalario = (salario * reajuste) + salario;
    }
    printf("\nSalario atual: R$ %.2f\n", salario);
  	printf("\n");
    printf("Informamos seu novo salário: R$ %.2f \n", novosalario);    
return 0;
}

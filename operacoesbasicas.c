#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

//prototipacao
void menu();
int adic();
int divi();
int subt();
int mult();
int adicao();
int divisao();
int subtracao();
int multiplicacao();

//variaveis globais
int opt;

int main(){
    system("cls");
    int num1,num2,calc;
    do{
        menu();
        scanf("%d",&opt);
        switch (opt){
        case 1:
            adic(num1,num2,calc);
            break;
        case 2:
            divi(num1,num2,calc);
            break;
        case 3:
            subt(num1,num2,calc);
            break;
        case 4:
            mult(num1,num2,calc);
            break;
        default:
            if(opt != 0){
                system("cls");
                printf("Opcao invalida.\n");
				system("pause");
                system("cls");
            }
            break;
        }
    } while (opt !=0 );
    system("pause");
    return(0);
}
//Menu principal do programa 
void menu(){
    printf("Escolha uma entre as quatro Operacoes basicas!\n");
    printf("1 - Adicao (+): \n");
    printf("2 - Divisao (/): \n");
    printf("3 - Subtracao (-): \n");
    printf("4 - Subtracao (*): \n");
    printf("0 - Sair: \n\n");
}
//Funcao dos menus para cada operaçao basica
int adic(int n1,int n2,int calc){
    system("cls");
    printf("Digite o Primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o Segundo Valor: ");
    scanf("%d",&n2);
    calc = adicao(n1,n2);
    printf("A Soma de %d mais %d e igual a %d:\n",n1,n2,calc);
    system("pause");
    system("cls");  
    return(calc);
}
int divi(int n1,int n2, int calc){
    system("cls");
    printf("Digite o Primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o Segundo Valor: ");
    scanf("%d",&n2);
    calc = divisao(n1,n2);
    printf("A Divisao de %d dividido por %d e igual a %d:\n",n1,n2,calc);
    system("pause");
    system("cls");
    return(calc);
}
int subt(int n1,int n2,int calc){
    system("cls");
    printf("Digite o Primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o Segundo Valor: ");
    scanf("%d",&n2);
    calc = subtracao(n1,n2);
    printf("A Subtracao de %d menos %d e igual a %d:\n",n1,n2,calc);
    system("pause");
    system("cls");
    return(calc);
}
int mult(int n1,int n2,int calc){
    system("cls");
    printf("Digite o Primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o Segundo Valor: ");
    scanf("%d",&n2);
    calc = multiplicacao(n1,n2);
    printf("A Multiplicacao de %d vezes %d e igual a %d:\n",n1,n2,calc);
    system("pause");
    system("cls");
    return(calc);
}

//funcao das operacoes basicas
int adicao(int A1,int B2){
    int total;
    total = (A1 + B2);
    return(total);
}
int divisao(int A1,int B2){
    int total;
    total = (A1 / B2);
    return(total);
}
int subtracao(int A1,int B2){
    int total;
    total = (A1 - B2);
    return(total);
}
int multiplicacao(int A1,int B2){
    int total;
    total = (A1 * B2);
    return(total);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int o;
    float x,y,z,w,c,delta,x1,x2,x3,x4;

    printf("O que voce deseja calcular?\n");
    printf(" 1.Soma\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n 5. Raiz quadrada\n 6. Potencia de 2\n 7. Equacao de grau 1\n 8. Equacao de grau 2\n");
    scanf("%d",&o);

    if (o==1){
        printf("Soma\n");
        printf("digite o numero\t");
        scanf("%f",&x);
        printf("digite o numero\t");
        scanf("%f",&y);

        z=x+y;

        printf("resultado:""%f",z);

        return 0;
        }


    if(o==2){
         printf("Subtracao\n");
        printf("digite o numero\t");
        scanf("%f",&x);
        printf("digite o numero\t");
        scanf("%f",&y);

        z=x-y;

        printf("resultado:""%f",z);

        return 0;}

    if(o==3){
        printf("Multiplicacao\n");
        printf("digite o numero\t");
        scanf("%f",&x);
        printf("digite o numero\t");
        scanf("%f",&y);

        z=x*y;

        printf("resultado:""%f",z);

        return 0;
    }

    if(o==4){
        printf("divisao\n");
        printf("digite o numero\t");
        scanf("%f",&x);
        printf("digite o numero\t");
        scanf("%f",&y);

        z=x/y;

        printf("resultado:""%f",z);

        return 0;
    }

    if(o==5){
        printf("Raiz quadrada\n");
        printf("digite o numero\t");
        scanf("%f",&x);

        z=sqrt(x);

        printf("resultado:""%f",z);

        return 0;

    }

    if(o==6){
        printf("Potencia de 2\n");
        printf("digite o numero\t");
        scanf("%f",&x);


        z=x*x;

        printf("resultado:""%f",z);

        return 0;
    }
    if(o==7){

        printf("Equacao grau 1\n");
        printf("digite o valor de a:\t");
        scanf("%f",&x);
        printf("digite o valor de b:\t");
        scanf("%f",&y);
        printf("digite a igualdade:\t");
        scanf("%f",&w);


        z=y- w/x;

        printf("resultado:""%f",z);

        return 0;

    }

    if(o==8){
        printf("\ndigite o valor de A:\t");
        scanf("%f",&x);


        printf("\ndigite o valor de B:\t");
        scanf("%f",&y);

        printf("\ndigite o valor de C:\t");
        scanf("%f",&c);

        delta=y*y-4*x*c;

        printf("\ndelta equivale a:\t");
        printf("%f\n",delta);
        if(delta<0){printf("\nNao existem raizes reais");

        }
    else{

        x3=-y+(sqrt(delta));
        x1=x3/(2*x);
        x4=-y-(sqrt(delta));
        x2=x4/(2*x);

        printf("\no valor das raizes x1 e x2 sao, respectivamente:\n");
        printf("\nX1:");
        printf("%f\n",x1);
        printf("X2:");
        printf("%f\n",x2);
    }
    }
    else{printf("funcao inexistente");
    }

    return 0;
}

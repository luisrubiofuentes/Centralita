#include <stdio.h>
#include <ctype.h>

int main()
{


    int n=0,a=0; /*Desde v1 hasta v9 se almacena cada digito.*/
    int suma=0,conta=2, senal=0;

    printf ("\nIntroduce el valor generado por los 9 sensores? ");
    scanf("%d", &n);

    if(n>=100000000 && n<=999999999 ) /*Como el primer sensor tiene que ser de 1 a 9*/
    {



        /*el programa saldra de la ejecucion si no esta en el intervalo indicado*/

        for (int i=0 ; i<9; i++)
        {
            a=n-(10*(n/10));
            n=n/10;
            suma=suma+(a*conta); /*En suma almacenamos la suma decreciente del valor indicado*/
            conta++;
        }

        while((suma+senal)%11 !=0){
            senal++;
        }
            if (senal==10) /*Si el valor a anadir es 10 se mostrará que el valor de la nueva senal es X*/
        {
            printf("\nNueva senal: X\n");
        }
        else
        {
            printf("\n %d\n",senal); /*En caso de que no sea 10 el valor a anadir, la senal valdra senal*/
        }

    }
    else   /*En caso de que el valor de uno no sea entre [1 y 9] tiene que poner el valor no valido.*/
    {
        printf("\n Valor no valido.\n");
    }

}

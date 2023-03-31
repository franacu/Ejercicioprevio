#include <stdio.h>
void cargar(int[5][4],char[5][20],char[4][20]);
void ticket(int[5][4],char[5][20]);
void ventot(int [5][4],char[4][20]);


int main()
{
    int M[5][4];
    char vendedor[4][20]={"vendendor 1","vendendor 2","vendendor 3","vendendor 4"};
    char producto[5][20]={"producto 1","producto 2","producto 3","producto 4","producto 5"};
    printf("Cargar datos\n");
    printf("PRECIOS DE PRODUCTOS:\n1-Prod1:$100\n2-Prod2:$200\n3-Prod3:$300\n5-Prod5:$500\n");
    cargar(M,producto,vendedor);
    ticket(M,vendedor);
    ventot(M,vendedor);


    return 0;
}
void cargar(int M[5][4],char p[5][20],char v[4][20])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Ingrese la cantidad del %s que vendio el %s:JEJEJEJEJ",v[j],p[i]);
            scanf("%d",&M[i][j]);
        }
    }
}
void ticket(int M[5][4],char v[4][20])
{
    int i,j,suma,prod;
    for(j=0;j<4;j++)
    {
        suma=0;
        for (i=0;i<5;i++)
        {
            if(i==0)
            {
                prod=100*M[i][j];
            }else
            if(i==1)
            {
                prod=200*M[i][j];
            }else
            if(i==2)
            {
                prod=300*M[i][j];
            }else
            if(i==3)
            {
                prod=400*M[i][j];
            }else
            {
                prod=500*M[i][j];
            }
            suma=suma+prod;
        }
        printf("El total vendido del %s es de %d\n",v[j],suma);
    }
}
void ventot(int M[5][4],char v[4][20])
{
    int i,j,suma=0;
    for(j=0;j<4;j++)
    {
        for (int i=0;i<5;i++)
        {
            suma=suma+M[i][j];
        }
    }
    printf("La cantidad total de productos vendidos fue de %d",suma);

}

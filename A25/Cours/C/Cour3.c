#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void NJ_scanf(int *n)
{
    scanf("%d", n);
}
float somme(int x, int y)
{
    return (x+y);
}
float diff(int x, int y)
{
    return (x-y);
}
float division(float a, float b)
{
    if(b!=0)
        return (a/b);
    else
    {
        printf("Erreur: On ne peut pas diviser par 0 ");
    return -1;
    }
}
//h3s 1s4
int main()
{
    float x=5, y=6, res=0;
    res=somme(diff(x,y),somme(somme(y,x),division(x,y)));
    printf("res= %f", res);

    return 0;
}
#include <math.h>
#include <stdio.h>

float y(float x)//функия, для которой ищем  корни
{
    return cos(x);
}


int main(int argc, char *argv[])
{
  float a, b, p;//а и b интревал, р - погрешность

    printf(" y = cos(x)\n");
    scanf("%f %f %f", &a, &b, &p);

    if (a < b && (p <= fabs(b-a)) ) {//проверка на правильность введенных данных

    while(fabs(b - a) > p)    {//реализация алгоритма
        a = b-(b-a)*y(b)/(y(b)-y(a));
        b = a+(a-b)*y(a)/(y(a)-y(b));
    }
    printf("%.3f",b);}
    else printf("Error!");
}

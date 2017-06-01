#include <math.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
  float a, b, step, i;

    printf(" y = 3x^2 + 8x - 9\n");
    scanf("%f %f %f", &a, &b, &step);

    if (a < b && (step <= fabs(b-a)) ){ //проверка на правильность введенных данных
                               //(a < b, шаг меньше либо равен интервалу (положительный!), fabc - модуль числа тиа float)
        for (i=a; i<=b; i += step) printf("%.3f\n", 3*i*i+i*8-9);}//циклом фор идем по интервалу, прибавляя шаг, и выводи значения
                                                                //оставляя 3 знака после запятой 
    else printf("Uncorrect means!\n");
    return 0;
}

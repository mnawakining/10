#include <stdio.h>

int new1(int *a)
{
    *a= *a +5;
    return *a;
}

int new2(int a)
{
    return a+5;
}


int main(void)
{
    int a = 0; 
    printf("Mean %d \n", a);



    printf("New2 mean %d \n", new2(a));
    printf("A mean %d \n", a);

    a = 0;

    printf("New1 mean %d \n", new1(&a));
    printf("A mean %d \n", a);

    return 0;

}

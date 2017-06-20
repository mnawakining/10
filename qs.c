#include <stdio.h>


void swap (int *x, int *y){
     int z = *x;
     *x = *y;
     *y = z;
}

int a[100];
void quickSort(int l, int r)
{
    int x = a[l + (r - l) / 2];

    int i = l;
    int j = r;

    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (i<r)
                quickSort(i, r);

    if (l<j)
        quickSort(l, j);
}
int main()
{

    int n;//количество элементов в массиве
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quickSort(0, n-1);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

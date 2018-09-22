#include <stdio.h>

int main()
{

    int n, i,j, a[15];//количество элементов в массиве
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < n - 1; i++) {
      // сравниваем два соседних элемента.
      for(j = 0 ; j < n - i - 1 ; j++) {
          if(a[j] > a[j+1]) {
             // если они идут в неправильном порядке, то
             //  меняем их местами.
             int tmp = a[j];
             a[j] = a[j+1] ;
             a[j+1] = tmp;
          }
       }
   }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;


}

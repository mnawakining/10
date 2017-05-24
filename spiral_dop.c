#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{   
int j=0; int i=0;
    int k=0;
    int z=1; int M; int N; int a[100][100];

    scanf("%d%d",&M, &N);
    while(z<=M*N)
    {
        j=M-1-k;
        for(i=k;i<N-1-k;i++)//2
        {
            a[i][j]=z;
            z++;
        }

        i=N-1-k;
        j=M-1-k;
        while( j>=k &&  z<=M*N)//3
        {
            a[i][j]=z;
            z++;
            j--;}

        i=N-2-k;
        j=k;
        while (i>=k && z <= M*N)//4
        {
            a[i][j]=z;
            z++;
            i--;
            printf(" %d \n ", a[i][j]);
        }

        i=k;
        j=k+1;
        while(j<M-1-k && z<=M*N ) //1
        {
            a[i][j]=z;
            z++;
            j++;
        }
        k ++;
    }

    for(i=0;i<N;i++)
    { for(j=0;j<M;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

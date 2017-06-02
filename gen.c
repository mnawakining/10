#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])

{

FILE *f;//обявляем переменую файл
char fileName[20] = "genome.txt";
char str[600000] = "", s[600000]; char *er;
int i=0, ibeg=0, iend=0, flag =0, g = 0, H = 0, j = 0;

    scanf("%d",&H);

    f = fopen(fileName, "r"); //открываем файл с путем fileName, для чтения
    if (f == NULL) printf("%s", "Empty file!\n"); //если файл не удалось открыть файл, выводим сообщение об ошибке
                                                  //(не удалось указать адрес на область памяти, где хранится файл)
    else{//в противном случае (если файл удалось открыть)
        
        
    er = fgets(s,100,f);
    while (er != NULL) {//пока файл не закончится будем читать строки
    s[strlen(s) - 1] = 0;
    strcat(str,s);
    er = fgets(s,100,f);
        
        
    }

    fclose(f); //закрываем файл

    }

    for(i=0; i < strlen(str); i++){
        if (str[i] == 'T' && str[i+1] == 'T' && str[i+2] == 'G' && str[i+3] == 'A' && str[i+4] == 'C' && str[i+5] == 'A' && flag == 0)
        {
            g = 0;
            ibeg = i;
            i += 15+6;

            while (g < 5 && flag == 0)
            {
                if (str[i] == 'T' && str[i+1] == 'A' && str[i+2] == 'T' && str[i+3] == 'A' && str[i+4] == 'A' && str[i+5] == 'T')
                {
                  flag = 1;
                  iend = i;
                  i += 9;
                  printf("String: \n");
                }
                i++;
                g++;
            }

        }
        if (flag == 1 && j < H) {
            printf("%c",str[i]);
            j++;}
    }
printf("\nBegin : %d\nEnd: %d\n", ibeg, iend);
return 0;

}


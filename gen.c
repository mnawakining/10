#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])

{

FILE *f;//обявляем переменую файл
char fileName[20] = "genome.txt";
char str[600000] = "", s[6];
char beg[6] = "TTGACA", end[6] = "TATAAT";
int i=0, ibeg=0, iend=0, flag =0, g = 0, countH = 0;



    f = fopen(fileName, "r"); //открываем файл с путем fileName, для чтения
    if (f == NULL) printf("%s", "Empty file!\n"); //если файл не удалось открыть файл, выводим сообщение об ошибке
                                                  //(не удалось указать адрес на область памяти, где хранится файл)
    else{//в противном случае (если файл удалось открыть)

    fgets(str,600000,f);//считываем строку из файла в str (первые 100 символов) из файла f

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
                }
                i++;
                g++;
            }

        }
        if (flag == 1 && str[i] == 'H') countH++;

    }


    printf("Begin : %d\n End: %d\n Count of H: %d", ibeg, iend, countH);


return 0;

}

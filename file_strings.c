#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
    {
    FILE *f;
    char fileName[20];
    int i,n=0, c=1, size =0;
    char str[100] = "";
    char *er;

    scanf("%s", fileName); //чтение названия файла
    scanf("%d",&n);//кол-во строк, которое вывести нужно
    f = fopen(fileName, "r"); //открытие файла и проверка, как в прошлом задании с файлом
    if (f == NULL) printf("%s", "Empty file!\n");
      else{

        er = fgets(str,100,f);
        
        while (er != NULL) {//пока файл не закончится будем читать строки
        er = fgets(str,100,f);
        if (c <= n) printf("%s",str);//вывод определенного кол-ва строк (n штук)
        c ++;
        size += strlen(str);//считаем кол-во символов

        }

    fclose(f);
    printf("Count of strings: %d\n",c-1);
    printf("Size (count of symbols): %d",size);
        }
    return 0;
    }

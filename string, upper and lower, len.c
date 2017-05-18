
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{    
    int i=0;
    char str[30];
    
    scanf("%s", &str);
    if (strcmp(str,"quit") == 0) return 0;//сравнивание строк
    else
    {
        printf("String length: %d \n", strlen(str));//вывод длины строки
        while(str[i] != '\0')//пока не встр. символ окончания строки
        {
            putchar(tolower(str[i])); //преобразование символа к нижнему регистру и вывод символа по коду
            i++;
        }
        i = 0;
        printf("\n");

        while(str[i] != '\0')
        {   putchar(toupper(str[i]));
            i++;
        }
        printf("\n");
        i = 0;
        while(str[i] != '\0')//пока не встр. символ окончания строки
        {
            if (i == 0 || str[i-1] == '.') putchar(toupper(str[i]));
            else putchar(tolower(str[i])); 
            //printf("%s",s);
            i++;
        }
        i = 0;
    }
    return 0;
}

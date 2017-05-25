#include <stdio.h>

void reverse(char str[])
{
  int i =0;
  if (strlen(str) == 0) printf("%s", "Empty string!\n");

  else {
  for(i=strlen(str)-1; i >= 0 ; i--)
          {
            printf("%c", str[i]);
          }
    }
}

int main(int argc, char *argv[])
    {
    FILE *f;
    char fileName[20];
    int i;
    char str[100] = "", newstr[100];

    scanf("%s", fileName);

    if (strcmp(fileName, "-") == 0) scanf("%s", str);
    else
    {
        f = fopen(fileName, "r");
        if (f == NULL) printf("%s", "Empty file!\n");
        else{

        fgets(str,100,f);

        fclose(f);
        }
    }
    reverse(str);
    return 0;
    }

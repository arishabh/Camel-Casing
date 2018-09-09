#include <stdio.h>
#include <stdlib.h>

int main()
{
    char camel[1][100], words[10][100];
    int x,b=0,y,z,a,c=0;
    printf("Enter a Camel Case String: ");
    scanf("%s",camel[0]);
    printf("%s",camel[0]);

    for(y=0;y<=9;y++)
    {

            for(x=0;x<=99;x++)
            {
               // if ((camel[0][x]>='A')&&(camel[0][x]<='Z'))

              if(isupper(camel[0][x]))
                  {
                    b++;
                    goto a;
                }
                words[y][x]=camel[0][x];
                printf("%c",words[y][x]);

            }
            a:;

    }
    for(z=b;z<=9;z++)
    {
        words[z][0]='N';
        words[z][1]='A';
    }
    for (y=0;y<10;y++)
    {
        printf("%s\n",words[y]);
    }
}

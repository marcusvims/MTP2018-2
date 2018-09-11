/* P1.c */
/* Marcus Vinícius Meireles Silva*/
/* 11811EBI006*/
#include<stdio.h>

int main()
{
    int est=0,i=0;
    char bits[256];
    printf("Digite um numero: ");
    scanf("%s",bits);
    while(bits[i]!= '\0')
    {
        if(bits[i]=='0' && est==0)
        est=0;
        else{
        if(bits[i]=='1' && est==0)
        est=1;
        else{
        if(bits[i]=='0' && est==1)
        est=2;
        else{
        if(bits[i]=='1' && est==1)
        est=0;
        else{
        if( bits[i]=='0' && est==2)
        est=1;
        else{
        if(bits[i]=='1' && est==2)
        est=2;
            }
            }
            }
            }
            }
    i++;
    }
    if(est==0)
    {
    printf("%s, eh multiplo de 3!!", bits);
    }
    else
    {
    printf("%s, nao eh multiplo de 3!!", bits);
    }
    return 0;
}

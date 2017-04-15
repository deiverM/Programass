//numeros primo y compuesto
#include <stdio.h>
#include <cstdlib>

int main()
{ int x,y=2,z=0,a;
   char resp; 
    do
    {
       x=0;y=2;z=0;a=0;
     do{
      printf("\ningrese un numero: ");
      scanf("%i",&x);
        }while(x<=0);     
      if(x%2==0)
        a=x/2;
      else
        a=(x-1)/2; 
      while(y<=a)
       {
         if(x % y==0)
           z=1;
         y++;
       }
      if(z==0)
         printf("\nEL NUMERO %i ES PRIMO\n",x);
      else
         printf("\nEL NUMERO %i ES COMPUESTO\n",x);
        printf("\notro numero s/n?");
        scanf("%c",&resp);
        resp=getchar();
        system("cls");
     }while(resp=='s'|| resp=='S');    
}

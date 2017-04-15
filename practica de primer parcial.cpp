#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int p,n,resul,x=0,aux,dig,band,i,res,final,resp;
do{
    do{
    	system("cls");
        printf("\ningrese un numero entero positivo menor e igual que 10.000: ");
        scanf("%i", &p);
        if(p>=0 && p<=100000){x=1;}
        else
        printf("numero invalido");
       
       }while(p<0 || p>10000);
        resul=0;
    for(n=0; n<p; n++)
    {
      if(n%2==0)
        resul+=pow((p - n),2);
      else
        resul+=-pow((p - n),2);
    }
    printf("\nresultado = %d\n",resul);
    aux = p;
    while(aux!=0)
    {
       dig=aux%10;
       aux/=10;
       if(dig!=1)
       {
         band=0;
        for(i=dig-1;i>1;i--)
        {
          if(dig%i==0){
            band=1;
           }          
         }   
    if(band==0){
       res*=10;
       res+=dig;
       }
      }
     } 
   if(res==0){
    printf("no es un numero invicto"); 
       }else{
        while(res!=0){
            dig=res%10;
            res/=10;
            final*=10;
            final+=dig;
        }
        band=0;
        for(i=final-1;i>1;i--)
        {
          if(final%i==0){
            band=1;
          }       
        } 
        if(band==0){
            printf("es un numero invicto");
        }else
        printf("no es un numero invicto");
      } 
        band=0;final=0;res=0;i=0;dig=0;p=0;
        printf("\notro numero s/n?");
        resp=getche();
  }while(resp=='s');                       
   return 0;       
}

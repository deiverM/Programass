//deiver montes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 30 //constante
#define Fil 10
#define Col 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vector[T],matriz[Fil][Col];
	int x,tam,y,filas,colu,c,cpar=0,cimpar=0,busv,contbusv=0,s,l,q,w=0,mult=0,num,cnum=0,k,suma=0,sumcol=0,u=0,colimp=0,p=0,z=0,a=0,b=0;
	srand(time(0));
	
float promfil=0,promcol=0, promt=0 ;
	do{
		system("cls");
		printf("\n\t\tCuantos elementos tiene el vector [1 - %d]?: ",T);
		scanf("%d",&tam);		
	}while(tam<0 || tam>T);
	 printf("que numero desea buscar:");
    scanf("%d",&busv);
        
	//se almacenan elementos en un vector
	for(x=0,q=0;x<tam,q<tam;x++,q++){
		 vector[q] = vector[x]=rand()%100; //cargando el vector con numeros aleatorio.                              
    if(vector[x]== busv){
        l=3;
        contbusv++;   
       }       
    if(vector[x]%2==0)
      cpar++;
    if(vector[x]%2!=0)
      cimpar++;
    if((x+1)%2!=0 && vector[x]%2==0)
      s++;
     } 
     	//se imprime el vector
	printf("\n\n\t\tValores almacenados en el vector \n\n");	
    
    for(x=0,q=tam;x<tam,q>0;x++,q--){  
    	printf("\n\t\t %d \t %d",vector[x],vector[q-1]);
               
    	if((x+1)%5==0 && x!=0){
    		printf("\n\n\t\t");
      
      	}  
    
     } 
    for(x=0; x<tam; x++){
        if(vector[x]%3==0) {
            while(p==0)
            {          
               printf("\n multiplo de tres del vector =" );
                p=1; 
            }  
            printf("%d,",vector[x]);
          }
    }
    if(l==3){
      printf("\nel numero %d se repite %d ",busv,contbusv);
      if(contbusv==1){
    printf("vez\n");
    }else
    printf("veces\n");
        }
    if(l!=3)
    printf("\n el numero %d no esta en el vector\n",busv);  
                
    for(x=0; x<tam; x++){
     if(vector[x]== busv)
     {
       while(p==1){
         printf("y esta en la posicion: "); 
           p=0;
                }        
       x+1;    
       printf("%d,",x+1 );      
       
      
            }   
    }
    printf("\npares=%d \n",cpar); 
    printf("impares=%d \n",cimpar);
    printf("pares en la posicion impar son = %d\n",s); 
    
    system("PAUSE");
        
      do{
		system("cls");
		printf("\n\t\tCuantas Filas tiene la Matriz [1 - %d]?: ",Fil);
		scanf("%d",&filas);		
	}while(filas<0 || filas>Fil);	
	do{
		system("cls");
		printf("\n\t\tCuantas Columnas tiene la Matriz [1 - %d]?: ",Col);
		scanf("%d",&colu);		
	}while(colu<0 || colu>Fil);	
  
	//cargar valores en la matriz por filas
	c=100;
	for(x=0;x<filas;x++){
		for(y=0;y<colu;y++){
			matriz[x][y]=c;
            
			c++;
		}
	}	
	//imprimir
	system("cls");
	printf("\n\t\t\tPor filas...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);	
		}
	}	
    
	printf("\n\n\t\t");
    system("PAUSE");
	//cargar valores en la matriz por columnas
	c=100;
	for(y=0;y<colu;y++){
		for(x=0;x<filas;x++){
			matriz[x][y]=c;
			c++;
		}
	}	
	//imprimir
	system("cls");
	printf("\n\t\t\tPor Columnas...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);	
		}
	}
 
	//cargar valores ALEATORIOS en la matriz 
	printf("\n\n\t\t");
    system("PAUSE");
    printf("\ningrese un numero de tres cifras para buscar en la matriz:");
    scanf("%d",&num)
; 	
		for(x=0;x<filas;x++){
		for(y=0;y<colu;y++){
			matriz[x][y]=rand()%900+100;
       suma=suma+matriz[x][y]; 
                  
      if(((y+1)%2)!=0){
        sumcol=sumcol+matriz[x][y];
        if(((y+1)%2)!=0 && x==0)
         u++;        
        } 
               
     
		}
   
	}	 

	//imprimir
	system("cls");
	printf("\n\t\t\tValores aleatorios...");
	printf("\n\n\t\t");	
	for(x=0;x<filas;x++){
		printf("\n\t\t");	
		for(y=0;y<colu;y++){
			printf(" %d ",matriz[x][y]);
        if(matriz[x][y]== num){
            k=1;
            cnum++; 
                }                    
         }   
    }
    if(k==1){
      printf("\n\n el numero %d se repite %d ",num,cnum);
    if(cnum==1){
    printf("vez\n");
    }else
    printf("veces\n");
        }
       
if(k!=1)
    printf("\n\n el numero %d no esta en la matriz\n",num); 
    for(x=0;x<filas;x++){
       for(y=0;y<colu;y++){
         if(matriz[x][y]== num)
         {
           x+1;
           y+1;   
           if(z==0){     
           printf(" y esta en posicion = ");
             z=1;
           }       
           printf("(%d,%d), ", x+1,y+1 );                      
         }   
        }
		
}
    
   if(filas == colu){
    for(x=0;x<filas;x++){
       for(y=0;y<colu;y++){
                         
       if(x==y){
        if(a==0){            
          printf("\ndiagonal principal =");
           a=1;
           } 
         printf("%d,",matriz[x][y]);                   
                    
         }          
          }
            }      
     
    
        y=colu-1;
         for(x=0;x<filas;x++){   
            if(b==0){
          printf("\n diagonal secundaria = ");
           b=1;
            }
        printf("%d,",matriz[x][y]);             
          y--;             
       }
   }else
    printf("\nla matriz no es cuadrada\n");
    printf("\nla suma de las filas es= %d\n",suma);
    promfil= (float(suma)/float(filas));
    printf("el promedio de la suma de las filas es=%.2f\n",promfil);
    printf("suma de las columnas en posicion impar= %d",sumcol);
    promcol=(float(sumcol)/float(u));
    printf("\npromedio de la suma de las columnas impares es= %.2f",promcol);
    promt=float(suma)/float(filas*colu);
    printf("\npromedio de los valores de la matriz es=%.2f",promt);
    printf("\n\n\t\t");
    system("PAUSE");	
    
    /*
	Practica Martes 04 de Abril
	1. Contar el numero de elementos pares e impares del vector
	2. Buscar un elemento en el vector:
		Si existe, indicar cuantas veces se repite y en que posiciones se encuentra.
		Si no existe, mostrar un mensaje.
	3. Indicar el nero de ELEMENTOS pares que se encuentran en POSICIONES impares.
	4. Imprimir en dos columnas: en la columna de la izquierda el vector y en la columna de la derecha el vector al reves.
	   Ejemplo
	   
	        5      9
		    4      8
		    10    10
		    8      4
 	        9      5
 	5. Imprimir solo los valores multiplos de 3 del vector.
	6. Buscar un elemento en la matriz, e indicar cuantas veces se repite y sus posiciones.
	7. Si la matriz es cuadrada mostrar los valores de sus diagonales (principal y secundaria). Mostrar un mensaje si la matriz no es cuadrada.
	8. Mostrar el promedio de la suma de cada una de las filas.
	9. Mostrar el promedio de la suma de las columnas IMPARES.
	10. Mostrar el promedio de la suma de los valores de la matriz.
	*/
	return 0;
}

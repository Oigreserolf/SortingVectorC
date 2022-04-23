#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Descripción del Script*/



int main(void)

{
	setlocale(LC_ALL, "");
 	/* Declaración de variables para determinar la dimensión del arreglo*/
 	int n1=10, n2=10, n3=20;
 	int i, j,n=20;
  	int x;
	int arreglo1[n1];      
 	int arreglo2[n2];      
 	int arreglo3[n3];      
printf("\n\n\t\t**********************************************************************************");
printf("\n\t\t					WELCOME");
printf("\n\t\tSe desea ordenar dos vectores de diferentes valores en un tercer vector de forma");
printf("\n\t\tascendente, el tamaño máximo de cada vector es de 10 por lo que el tamaño del");
printf("\n\t\tvector resultante sea de 20. Mostrar al final ambos vectores iniciales capturados y");
printf("\n\t\tel vector resultante");
printf("\n\t\t**********************************************************************************\n\n");
 	/*Se genera un loop para recopilar los elementos del 1er y 2do arreglo*/
 	
 	for(i = 0; i < n1; i++)
  		{
	        	printf("\nIntroduce el %d° elemento del primer arreglo:  ", i+1);
      			scanf("%d", &arreglo1[i]);
  		}


 	for(i = 0; i < n2; i++)
  		{
        		printf("\nIntroduce el %d° elemento del segundo arreglo:  ", i+1);
      			scanf("%d", &arreglo2[i]);
  		}

	 
	/* loop para introducir los 10 primeros valores al tercer arreglo*/
  	for(i = 0; i < n1; i++)
  		{
      			arreglo3[i] = arreglo1[i];
  		}
	/* loop para introducir los 10 últimos valores al tercer arreglo*/
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  		{
  			arreglo3[j] = arreglo2[i];
  		}
 	
 	printf("\n\nLos elementos del arreglo Luego de juntarse son:\n");
 	
 	
 	/*Loop para leer cada valor del nuevo arreglo y ordenarlos en forma ascendente*/
 	for(i = 0; i < n3; i++)
  		{
    			printf(" %d,",arreglo3[i]);
  		}
  	
  	for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (arreglo3[i] > arreglo3[j])
                {

                    x =  arreglo3[i];
                    arreglo3[i] = arreglo3[j];
                    arreglo3[j] = x;

                }

            }

        }

        printf("\n\nLos números ordenados de forma ascendente son:\n");
        for (i = 0; i < n; ++i)
		{
	            printf("%d, ", arreglo3[i]);
            	}	
  	printf("\n");
  	

 return 0;
}

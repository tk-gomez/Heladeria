#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

Cola *crearCola(int max) {
    Cola *nuevaCola;
    //crear la cola y el arreglo
    nuevaCola = (Cola *)malloc(sizeof(Cola));
    nuevaCola->arrCola = (Cliente *) calloc(max,sizeof(Cliente));
    //INICIALIZAR
    nuevaCola->max = max;
    nuevaCola->h = nuevaCola->t= -1;
    return nuevaCola;
}

int validarEspacio(Cola cola){   
	if((cola.h == 0 && cola.t == cola.max-1) || (cola.t+1 == cola.h)){
    	printf("\nNo hay espacio...\n");
		return 0;
	}
	return 1;
}

void insertar(Cola *cola, Cliente dato) {
    if (cola->h ==-1)
        cola->h= 0;
    if(cola->t == cola->max-1)  
    	cola->t = -1;
    cola->t++;
    
    //INSERTA EL DATO EN LA FILA
    cola->arrCola[cola->t]=dato;
}

void listar(Cola cola){  
   int i;
   printf("\n\t***COLA DE CLIENTES***\n");
   if (!validarVacio(cola)){
   		if(cola.h <= cola.t)
       for (i=cola.h; i<=cola.t ; i++){
       		printf("\nNUMERO DE ORDEN: [%i]",i);
       		listarCliente(cola.arrCola[i]);
      	}
      	else {
      		for(i=cola.h; i< cola.max; i++){
      			printf("NUMERO DE ORDEN: [%i]",i);
   				listarCliente(cola.arrCola[i]);
			}
   			for(i=0; i<=cola.t; i++){
   				printf("NUMERO DE ORDEN: [%i]",i);
   				listarCliente(cola.arrCola[i]);
   			}
   		}
	}
   else
        printf(" No hay clientes...");
}
        

int validarVacio(Cola cola){
    return cola.h == -1;
}

Cliente borrar(Cola *cola){
	Cliente aux=cola->arrCola[cola->h];
	if(cola->h == cola->t)
		cola->h = cola->t = -1;
	else if(cola->h == cola->max-1)
		cola->h = 0;	
	else
		cola->h++;
	return aux;
}

void liberaMemoria(Cola *cola){
    free(cola->arrCola);
    free(cola);
    cola = NULL;
}

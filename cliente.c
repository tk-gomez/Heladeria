#include <stdio.h>
#include <stdlib.h>   //Memoria dinamica

#include "heladeria.h"
#include "cliente.h"


Cliente *crearCliente(){
	Cliente *clien=(Cliente *)calloc(1,sizeof(Cliente));
	if(clien == NULL){
		printf("Error, no hay espacio en la memoria...");
		exit(0);
	}
	clien->nombre=(char *)calloc(MAX_TEXTO,sizeof(char));
	clien->helados = (Helados*)calloc(1,sizeof(Helados));
	clien->helados->sabor = (char *)calloc(MAX_TEXTO, sizeof(char));
	clien->helados->ingPrincipal = (char *)calloc(MAX_TEXTO, sizeof(char));
	return clien;
}

void llenarHelado(Cliente *NuevoCliente){
	
	//DEBERIAN SER APUNTADORES AL ARREGLO DE HELADOS
	printf("Clave: ");
	scanf("%i", &NuevoCliente->helados->clave);
	printf("Costo: ");
	scanf("%f", &NuevoCliente->helados->costo);
	printf("\nSabor:");
	fflush(stdin);
	gets(NuevoCliente->helados->sabor);
	printf("\nIngrediente Principal:");
	fflush(stdin);
	gets(NuevoCliente->helados->ingPrincipal);
}


void llenarCliente(Cliente *NuevoCliente){
	printf("\nNombre:");
	fflush(stdin);
	gets(NuevoCliente->nombre);
	printf("Cantidad:");
	fflush(stdin);
	scanf("%i", &NuevoCliente->cantidad);
	printf("Pedido: ");	
	fflush(stdin);
	scanf("%c", &NuevoCliente->pedido);
	fflush(stdin);
	printf("Total: ");
	scanf("%f", &NuevoCliente->total);
	llenarHelado(NuevoCliente);	
	
}

void listarCliente(Cliente NuevoCliente){
		printf("\n%s\t%i\t%c\t%0.2f\t%i\t%0.2f\t%s\t%s\n",
		NuevoCliente.nombre,NuevoCliente.cantidad,NuevoCliente.pedido,NuevoCliente.total,
		NuevoCliente.helados->clave,
		NuevoCliente.helados->costo,NuevoCliente.helados->ingPrincipal,
		NuevoCliente.helados->sabor);
}



/*
void listarCliente(Cliente NuevoCliente){
	printf("\n%i\t%0.2f\t%s\t%s\n",NuevoCliente.helados->clave,
		NuevoCliente.helados->costo,NuevoCliente.helados->ingPrincipal,
		NuevoCliente.helados->sabor);
}
*/

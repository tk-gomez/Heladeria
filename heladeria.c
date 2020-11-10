#include<stdio.h>
#include<stdlib.h>
#define MAX 30
#include"Heladeria.h"

Cliente *crearCliente(){
    Cliente NuevoCliente;
    NuevoCliente=(Cliente *)calloc(1,sizeof(Cliente));
    NuevoCliente->orden=(int *)calloc(MAX,sizeof(int));
    NuevoCliente->nombre=(char *)calloc(MAX,sizeof(char));
    NuevoCliente->helados.clave=(int *)calloc(MAX,sizeof(int));
    NuevoCliente->helados.sabor=(char *)calloc(MAX,sizeof(char));
return NuevoCliente;
}

void llenarEstructura(Cliente *NuevoCliente){
    printf("\nNumero de Orden: ");
    scanf("%i",&NuevoCliente->orden);
    fgets(NuevoCliente->nombre);
    printf("\nClave: ");
    scanf("%i",&NuevoCliente->helados.clave);
    fgets(NuevoCliente->helados.sabor);
}
void listarHelados(Cliente unCliente){
    printf("%i\t%s\t%i\t%s\t\n",unCliente.orden,unCliente.nombre
           unCliente.helados.clave,unCliente.helados.sabor);
}


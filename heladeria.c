#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Heladeria.h"


void crearInventario(struct Inventario *inventario){
    inventario->clave=(char *)malloc(MAX*sizeof(char));
    inventario->sabor=(char *)malloc(MAX*sizeof(char));
    inventario->tipo=(char *)malloc(MAX*sizeof(char));
    inventario->descripcion=(char *)malloc(MAX*sizeof(char));
    inventario->cantidad=(char *)malloc(MAX*sizeof(char));
    inventario->precio=(char *)malloc(MAX*sizeof(char));
}
void listarinventario(struct Inventario inventario){
    printf("%s\t%s\t%s\t%s \t\t\t\t%s   \t\t\t%s\n",inventario.clave,inventario.sabor,
    inventario.tipo,inventario.descripcion,inventario.cantidad,inventario.precio);
}
void llenarInventario(struct Inventario *arrInv){
    FILE *archivo;
    char linea[1024], delimitador[] = ",\n";
    char *token;
    int indice;

    archivo = fopen( ARCHIVO, "rt" );
    if( archivo == NULL ){
        printf( "Error (NO ABIERTO)\n" );
        return ;
    }

    indice = -1; //INICIALIZA EL INDICE DEL ARREGLO
    printf("\nLEYENDO DATOS DEL ARCHIVO:\n");
    while(fgets(linea,1023, archivo) != NULL){
        token = strtok(linea, delimitador);
        indice++;
        printf("\n----------------\n");
        while (token != NULL){

            crearInventario(&arrInv[indice]);

            strcpy(arrInv[indice].clave,token);
            printf("Clave: %s\n", token);
            token = strtok(NULL, delimitador);
            strcpy(arrInv[indice].sabor,token);
            printf("Sabor: %s\n", token);
            token = strtok(NULL, delimitador);
            strcpy(arrInv[indice].tipo,token);
            printf("Tipo: %s\n", token);
            token = strtok(NULL, delimitador);
            strcpy(arrInv[indice].descripcion,token);
            printf("Descripcion: %s\n", token);
            token = strtok(NULL, delimitador);
            strcpy(arrInv[indice].cantidad,token);
            printf("Cantidad: %s\n",token);
            token = strtok(NULL, delimitador);
            fflush(stdin);
            strcpy(arrInv[indice].precio,token);
            printf("Precio: %s\n",token);

            token = strtok(NULL, delimitador);
        }
    }
}

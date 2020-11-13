#include <stdio.h>
#include "menu.h"
#include "cliente.h"
#include "cola.h"

#define MAX 3

int main() {
    int opcion;
//crear las variables apuntador a la estructura de datos cola y a la estructura cliente
	Cola *cola;
	cola = crearCola(5);  //MAXIMO DE 5 ELEMENTOS
	Cliente *unCliente;

    do {
        opcion = desplegarMenu("\n1)Ordenar producto \n2)Entregar Helado \n3)Listar pedidos\n4)Salir\nOpcion: ",4);
        switch (opcion){

        case 1:
               if (validarEspacio(*cola)){
               		unCliente = crearCliente();
					llenarCliente(unCliente);
					insertar(cola,*unCliente);
					listar(*cola);
               }
               else
                printf("No hay espacio en la Heladeria...");
            break;
        case 2:
            if (!validarVacio(*cola)){
				*unCliente = borrar(cola);
				printf("\n***Entrega de pedido: ***\n");
				listarCliente(*unCliente);
				printf("\nCLIENTES EN FILA DE ESPERA:\n");
				listar(*cola);
            }
            else
                printf("\nNo hay CLIENTES por atender...:) \n");
            break;
        case 3:
				listar(*cola);
            break;

        }
    } while (opcion != 4);

    //LEBERAR MEMORIA
    return 0;
}



#include <stdio.h>
#include "menu.h"
#include "cliente.h"
#include "cola.h"
#include "heladeria.h"

#define max 5


int main() {
    int opcion;
//crear las variables apuntador a la estructura de datos cola y a la estructura cliente
	Cola *cola;
	cola = crearCola(max);  //MAXIMO DE 5 ELEMENTOS/clientes
	Cliente *unCliente;
	
	
	struct Inventario *arrInv;
	arrInv = (struct Inventario *)calloc(MAX, sizeof(struct Inventario));
	

    do {
        opcion = desplegarMenu("\nCLIENTE:\n1)Ordenar producto \n\nEMPLEADO \n2)Preparar Helado \n3)Entregar Helado \n4)Listar pedidos\n5)Salir\nOpcion: ",5);
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
        case 2:    //PILA DE ORDENES/HELADOS
				llenarInventario(arrInv);
            break;
        case 3:
	        	if (!validarVacio(*cola)){
					*unCliente = borrar(cola);
					printf("\t=====Entrega de pedido: =====\n");
					listarCliente(*unCliente);
					printf("\nCLIENTES EN FILA DE ESPERA:\n");
					listar(*cola);
	            }
	            else
	                printf("\nNo hay CLIENTES por atender...:) \n");
            break;
        case 4:
		        listar(*cola);
            break;
		case 5: //liberar memoria
        	liberaMemoria(cola);
        	break;
        }
    } while (opcion != 5);

    //LEBERAR MEMORIA
    return 0;
}

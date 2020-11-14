#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include "heladeria.h"
#define MAX_TEXTO 30

typedef struct {
	int clave;
	char *sabor;
	char *ingPrincipal;
	float costo;
} Helados;

typedef struct {
	char *nombre;
	int cantidad;
	char pedido;
	float total;
	Helados *helados;
} Cliente;

Cliente *crearCliente();
void llenarHelado(Cliente *NuevoCliente);
void llenarCliente(Cliente *NuevoCliente);
void listarCliente(Cliente NuevoCliente);
//void listarHelado(Cliente NuevoCliente);


#endif // CLIENTE_H_INCLUDED

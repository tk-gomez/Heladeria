#ifndef HELADERIA_H_INCLUDED
#define HELADERIA_H_INCLUDED

typedef struct {
int numCliente;
int pedido;
float total;
} Cliente;

typedef struct {
int numProductos;
char sabor;
char ingredientes;
float precio;
} Heladería;


#endif // HELADERIA_H_INCLUDED

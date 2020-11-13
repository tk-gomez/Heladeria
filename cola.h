#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "cliente.h"

typedef struct {
    int max; // tamaño de la cola
    int h;
    int t;
    Cliente *arrCola; //arreglo cola
} Cola;


void insertar(Cola *cola, Cliente dato);   //Inserta un Cliente
Cliente borrar(Cola *cola);				//Borra un Cliente


Cola *crearCola(int max);
int validarEspacio(Cola cola);
int validarVacio(Cola cola);
void listar(Cola cola);
void liberaMemoria(Cola *cola);

#endif // COLA_H_INCLUDED

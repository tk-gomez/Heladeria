#include<stdio.h>
#include<stdlib.h>
#include"Heladeria.h"

int main(){
    struct Inventario *arrInv;
    int i;
    arrInv=(struct Inventario *)calloc(ELEMENTOS,sizeof(struct Inventario));
    llenarInventario(arrInv);

    printf("\n\n=================INVENTARIO ================\n");
    for (i= 0; i< ELEMENTOS; i++)
        listarinventario(arrInv[i]);
    return 0;
}


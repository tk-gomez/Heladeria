#ifndef HELADERIA_H_INCLUDED
#define HELADERIA_H_INCLUDED

#define MAX 30
#define ELEMENTOS 20
#define ARCHIVO "InventarioHelados.csv"

struct Inventario{

    char *clave;
    char *sabor;
    char *tipo;
    char *descripcion;
    char *cantidad;
    char *precio;
};
void capturarOrden(struct Cliente *unCliente);
void crearInventario(struct Inventario *inventario);
void listarinventario(struct Inventario inventario);
void llenarInventario(struct Inventario *arrInv);
void liberarMemoria(struct Inventario *arrInv);



#endif // HELADERIA_H_INCLUDED

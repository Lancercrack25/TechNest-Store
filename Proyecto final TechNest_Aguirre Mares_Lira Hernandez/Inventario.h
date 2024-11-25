#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Inventario.h"

class Inventario
{
    private:
        std::vector<Producto> productos; // Vector para almacenar los productos
        int capacidadMaxima; // Capacidad m�xima del inventario
    public:
        // Constructor
        Inventario(int capacidadMaxima){}
        // M�todo para dar de alta un producto
        void agregarProducto(const Producto& producto);
        // M�todo para dar de baja un producto por su ID
        void eliminarProducto(int id);
        // M�todo para verificar si el inventario est� vac�o
        bool inventarioVacio();
        // M�todo para imprimir informaci�n de todos los productos en el inventario
        void mostrarInventario() const;
};

#endif // INVENTARIO_H

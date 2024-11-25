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
        int capacidadMaxima; // Capacidad máxima del inventario
    public:
        // Constructor
        Inventario(int capacidadMaxima){}
        // Método para dar de alta un producto
        void agregarProducto(const Producto& producto);
        // Método para dar de baja un producto por su ID
        void eliminarProducto(int id);
        // Método para verificar si el inventario está vacío
        bool inventarioVacio();
        // Método para imprimir información de todos los productos en el inventario
        void mostrarInventario() const;
};

#endif // INVENTARIO_H

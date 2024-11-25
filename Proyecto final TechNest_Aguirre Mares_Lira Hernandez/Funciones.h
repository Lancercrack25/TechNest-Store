#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <windows.h>
#include <limits>

#include "Proveedor.h"
#include "Inventario.h"
#include "Pedido.h"
#include "PedidoEspecial.h"
#include "PedidoExclusivo.h"

using namespace std;

class Funciones {
    public:
        void submenuProveedores(vector<Proveedor> &listaProveedores);
        void agregarProveedor(std::vector<Proveedor> &listaProveedores);
        void eliminarProveedor(std::vector<Proveedor> &listaProveedores);
        void agregarProductoMenu(Inventario &inventario);
        void eliminarProductoMenu(Inventario &inventario);
        void pedidos(vector<Pedido> &listaPedidos);
};

#endif // FUNCIONES_H

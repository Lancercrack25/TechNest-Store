#include "Inventario.h"

// M�todo para dar de alta un producto
void Inventario::agregarProducto(const Producto& producto) {
    productos.push_back(producto);
    std::cout << "Producto agregado al inventario." << std::endl;
}

// M�todo para dar de baja un producto por su ID
void Inventario::eliminarProducto(int id) {
    bool encontrado = false; // //Bandera para verificar si se encontro el producto

    for (auto it = productos.begin(); it != productos.end(); ++it) {
        if (id == it->getIdProducto()) {
            productos.erase(it);
            std::cout << "Producto eliminado del inventario." << std::endl;
            encontrado = true; //Si es as�, se elimina el producto de la lista y se establece la bandera encontrado
            break;
        }
    }
    if(!encontrado) {
        std::cerr << "Producto no encontrado en el inventario." << std::endl;
    }
 }
bool Inventario::inventarioVacio() {
    return productos.empty(); /* Metodo .empty() es un m�todo de contenedores, como vectores, listas, conjuntos, entre otros,
    que devuelve un valor booleano que indica si el contenedor est� vacio o no. */
}

// M�todo para imprimir informaci�n de todos los productos en el inventario
void Inventario::mostrarInventario() const {
    std::cout << "\tInventario:" << std::endl;
    for (const auto& producto : productos) { // Por cada producto en productos
        producto.imprimirInfo();
        std::cout << "\n" << std::endl;
    }
}


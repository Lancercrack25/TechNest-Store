#include "Producto.h"

Producto::Producto(int _idProducto, std::string _tipoProducto, std::string _nombre, double _precio, int _existencias, int _garantia) {
    idProducto = _idProducto;
    tipoProducto = _tipoProducto;
    nombre = _nombre;
    precio = _precio;
    existencias = _existencias;
    garantia = _garantia;
}

Producto::~Producto() {}

void Producto::setGarantia(int _garantia) {
    garantia = _garantia;
}

int Producto::getGarantia() const {
    return garantia;
}

void Producto::imprimirInfo() const {
    std::cout << "ID: " << idProducto << std::endl;
    std::cout << "Tipo: " << tipoProducto << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Existencias: " << existencias << std::endl;
    std::cout << "Garantia: " << garantia << " meses" << std::endl;
}

std::string Producto::getInfo() const {
    std::stringstream ss;
    ss << "ID: " << idProducto << std::endl;
    ss << "Tipo: " << tipoProducto << std::endl;
    ss << "Nombre: " << nombre << std::endl;
    ss << "Precio: $" << precio << std::endl;
    ss << "Existencias: " << existencias << std::endl;
    ss << "Garantia: " << garantia << " meses" << std::endl;
    return ss.str();
}

int Producto::getIdProducto() const {
    return idProducto;
}

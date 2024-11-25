#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <sstream>
#include <string>

class Producto
{
    protected:
        int idProducto;
        std::string tipoProducto;
        std::string nombre;
        double precio;
        int existencias;
        int garantia;
    public:
        Producto(int id, std::string Ptype, std::string name, double price, int stock, int warranty);
        ~Producto();
        void setGarantia(int warranty);
        int getGarantia() const;
        void imprimirInfo() const;
        std::string getInfo() const;
        int getIdProducto() const;
};

#endif // PRODUCTO_H

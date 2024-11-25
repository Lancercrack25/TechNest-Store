#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <cmath>

class Pedido
{
    protected:
        int idPedido;
        std::string cliente;
        float total;
    public:
        Pedido(int, std::string, float);
        virtual void mostrarDetalles() const;
        bool operator==(const Pedido&) const;
        bool operator<(const Pedido&) const;
        float operator+(const Pedido&) const;
        float operator-(const Pedido&) const;
        float operator*(int) const;
        float operator/(int) const;
        float operator%(float) const;
        float operator^(float) const;
};

#endif // PEDIDO_H

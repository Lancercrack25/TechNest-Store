#ifndef PEDIDOESPECIAL_H
#define PEDIDOESPECIAL_H

#include <iostream>
#include "Pedido.h"

class PedidoEspecial : public Pedido {
    private:
        std::string motivo;
        std::string producto;
    public:
        PedidoEspecial(int, std::string, float, std::string, std::string);
        void mostrarDetalles() const override;
};

#endif // PEDIDOESPECIAL_H

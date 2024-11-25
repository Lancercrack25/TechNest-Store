#ifndef PEDIDOEXCLUSIVO_H
#define PEDIDOEXCLUSIVO_H

#include <iostream>
#include "Pedido.h"

class PedidoExclusivo : public Pedido {
    private:
        std::string beneficios;
        std::string producto;
    public:
        PedidoExclusivo(int, std::string, float, std::string, std::string);
        void mostrarDetalles() const override;
};

#endif // PEDIDOEXCLUSIVO_H

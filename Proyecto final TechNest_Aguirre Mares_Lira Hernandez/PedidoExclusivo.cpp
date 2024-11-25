#include "PedidoExclusivo.h"

PedidoExclusivo::PedidoExclusivo(int _idPedido, std::string _cliente, float _total, std::string _beneficios, std::string _producto) : Pedido(_idPedido, _cliente, _total){
    beneficios = _beneficios;
    producto = _producto;
}

void PedidoExclusivo::mostrarDetalles() const {
    std::cout << "Pedido Premium " << idPedido << " - Cliente: " << cliente
              << " - Total: $" << total << " - Beneficios: " << beneficios
              << " - Producto: " << producto << std::endl;
}


#include "PedidoEspecial.h"

PedidoEspecial::PedidoEspecial(int _idPedido, std::string _cliente, float _total, std::string _motivo, std::string _producto) : Pedido(_idPedido, _cliente, _total){
    motivo = _motivo;
    producto = _producto;
}

void PedidoEspecial::mostrarDetalles() const {
    std::cout << "Pedido Especial " << idPedido << " - Cliente: " << cliente
              << " - Total: $" << total << " - Motivo: " << motivo
              << " - Producto: " << producto << std::endl;
}

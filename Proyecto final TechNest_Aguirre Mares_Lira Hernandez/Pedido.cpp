#include "Pedido.h"

Pedido::Pedido(int _idPedido, std::string _cliente, float _total){
    idPedido = _idPedido;
    cliente = _cliente;
    total = _total;
}

void Pedido::mostrarDetalles() const {
    std::cout << "Pedido " << idPedido << " - Cliente: " << cliente << " - Total: $" << total << std::endl;
}

bool Pedido::operator==(const Pedido& other) const {
    return idPedido == other.idPedido;
}

bool Pedido::operator<(const Pedido& other) const {
    return total < other.total;
}

float Pedido::operator+(const Pedido& other) const {
    return total + other.total;
}

float Pedido::operator-(const Pedido& other) const {
    return total - other.total;
}

float Pedido::operator*(int multiplier) const {
    return total * multiplier;
}

float Pedido::operator/(int divisor) const {
    return total / divisor;
}

float Pedido::operator%(float divisor) const {
    return fmod(total, divisor);
}

float Pedido::operator^(float exponent) const {
    return pow(total, exponent);
}

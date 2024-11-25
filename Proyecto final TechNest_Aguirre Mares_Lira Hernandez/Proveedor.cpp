#include "Proveedor.h"

Proveedor::Proveedor() {
    idProveedor = 0;
    nombre = " ";
    pais = " ";
    direccion = " ";
    telefono = " ";
    correo = " ";
    fechaRegistro = " ";
}

int Proveedor::getID() const {
    return idProveedor;
}

std::istream& operator>>(std::istream& is, Proveedor& proveedores) {
    std::cout << "Ingrese ID: ";
    is >> proveedores.idProveedor;
    std::cout << "Ingrese nombre: ";
    is.ignore();
    std::getline(is, proveedores.nombre);
    std::cout << "Ingrese pais: ";
    std::getline(is, proveedores.pais);
    std::cout << "Ingrese direccion: ";
    std::getline(is, proveedores.direccion);
    std::cout << "Ingrese numero telefonico: ";
    is >> proveedores.telefono;
    std::cout << "Ingrese correo electronico: ";
    is.ignore();
    std::getline(is, proveedores.correo);
    std::cout << "Ingrese fecha de registro: ";
    std::string fecha;
    std::getline(is, fecha);
    proveedores.fechaRegistro = Proveedor::formatearFecha(fecha);
    return is;
}

std::ostream& operator<<(std::ostream& os, const Proveedor& proveedores) {
    os << "Proveedor: " << proveedores.nombre << std::endl;
    os << "ID: " << proveedores.idProveedor << std::endl;
    os << "Pais: " << proveedores.pais << std::endl;
    os << "Direccion: " << proveedores.direccion << std::endl;
    os << "Telefono: " << proveedores.telefono << std::endl;
    os << "Correo electronico: " << proveedores.correo << std::endl;
    os << "Fecha de Registro: " << proveedores.formatearFecha(proveedores.fechaRegistro) << std::endl;
    return os;
}

// Funcion para imprimir la fecha en el formato dd/mm/yyyy
std::string Proveedor::formatearFecha(const std::string& fecha) {
    std::stringstream ss(fecha);
    int day, month, year;
    char separator;

    // Intentar leer la fecha con diferentes separadores
    ss >> day >> separator >> month >> separator >> year;
    if (ss.fail() || (separator != '/' && separator != '-' && separator != ' ')) {
        // Intentar nuevamente con un separador diferente
        ss.clear();
        ss.str(fecha);
        ss >> day >> month >> year;
        if (ss.fail()) {
            return "Formato de fecha incorrecto";
        }
        // Usar el espacio como separador
        separator = ' ';
    }

    // Construir la fecha en el formato dd/mm/yyyy
    std::stringstream formattedDate;
    formattedDate << std::setw(2) << std::setfill('0') << day << "/" << std::setw(2) << std::setfill('0') << month << "/" << year;

    return formattedDate.str();
}

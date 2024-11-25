#include "Admin.h"
#include <string>

Admin::Admin(const std::string& _nombre) {
    nombre = _nombre;
    password = "123";
}

bool Admin::verificarPassword(const std::string& intentoPassword) const {
    return intentoPassword == password;
}

std::string Admin::getNombre() const {
    return nombre;
}

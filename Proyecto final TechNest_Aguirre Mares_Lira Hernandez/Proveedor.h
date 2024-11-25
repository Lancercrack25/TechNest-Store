#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include <iostream>
#include <string>
#include <iomanip> // Para setw y setfill
#include <sstream> // Para stringstream

class Proveedor
{
     protected:
        int idProveedor;
        std::string nombre;
        std::string pais;
        std::string direccion;
        std::string telefono;
        std::string correo;
        std::string fechaRegistro;
    public:
        Proveedor();
        int getID() const;
        friend std::istream& operator>>(std::istream&, Proveedor&);
        friend std::ostream& operator<<(std::ostream&, const Proveedor&);
    private:
        static std::string formatearFecha(const std::string& fecha);

};

#endif // PROVEEDOR_H

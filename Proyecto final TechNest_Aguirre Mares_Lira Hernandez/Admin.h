#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
using namespace std;

class Admin
{
    private:
        string nombre;
        string password;
    public:
        Admin(const string&);
        bool verificarPassword(const string&) const;
        string getNombre() const;
};

#endif // ADMIN_H

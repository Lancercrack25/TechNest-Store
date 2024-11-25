#include "Funciones.h"

void agregarProveedor(vector<Proveedor> &listaProveedores) {
     system("color 06");
     system("cls");
    Proveedor nuevoProveedor;
    cout << "\tDAR DE ALTA PROVEEDOR" << endl;
    cout << "Ingrese los datos del proveedor: " << endl;
    cin >> nuevoProveedor;
    listaProveedores.push_back(nuevoProveedor);
    cout << "Proveedor agregado exitosamente." << endl;
}

void eliminarProveedor(vector<Proveedor> &listaProveedores) {
     system("color 06");
     system("cls");
    int idBuscar = 0; // ID inicializada en cero
    bool encontrado = false; //Bandera para verificar si se encontro el proveedor

    cout << "DAR DE BAJA PROVEEDOR" << endl;
    {
        cout << "Ingrese el ID del proveedor: ";
        cin >> idBuscar;
        //Se declara un iterator de tipo vector que apuntara al primer elemento y al ultimo
        for(vector<Proveedor>::iterator it = listaProveedores.begin(); it != listaProveedores.end(); ++it){
            if(idBuscar == it->getID()){ //En cada iteración, se verifica si el idProveedor del elemento actual coincide con idBuscar
                listaProveedores.erase(it);
                cout << "Proveedor eliminado exitosamente." << endl;
                encontrado = true; //Si es así, se elimina el proveedor de la lista y se establece la bandera encontrado
                break;
            }
        }
        if(!encontrado){ //De lo contrario se muestra el siguiente mensaje
            cerr << "Proveedor no encontrado." << endl;
        }
    system("pause");
    }
}

void submenuProveedores(std::vector<Proveedor> &listaProveedores) {
     system("color 06");
    int opc = 0;
    while (opc != 4) {
        system("cls");
        cout << "\tGestionar Proveedores" << endl
            << "1. Dar de alta proveedor" << endl
            << "2. Dar de baja proveedor" << endl
            << "3. Datos de los proveedores" << endl
            << "4. Volver al menu principal" << endl
            << "=============================" << endl
            << "Ingrese su opcion: ";
        try {
            cin >> opc;
            cout << endl;
            if (cin.fail()) { // Verificar si la entrada falló
                cin.clear(); // Borrar el estado de error
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
                throw invalid_argument("Entrada no valida. Por favor, ingrese un numero.");
            }
            cin.ignore();
            if (opc < 1 || opc > 4) {
                throw out_of_range("Opcion invalida. Por favor, ingrese una opcion valida.");
            }
            switch (opc) {
                case 1:
                    agregarProveedor(listaProveedores);
                    system("cls");
                    break;
                case 2:
                    eliminarProveedor(listaProveedores);
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    if(listaProveedores.empty()) {
                        cout << "Lista de proveedores vacia." << endl;
                    } else {
                        cout << "\tPROVEEDORES" << endl
                         << "============================" << endl;
                        for (vector<Proveedor>::size_type i = 0; i < listaProveedores.size(); ++i) {
                            cout << endl << listaProveedores.at(i) << endl; //Se usa el metodo .at() porque realiza comprobaciones exactas del tamaño del vector
                        }
                    }
                    system("pause");
                    break;
                case 4:
                    cout << "Volviendo al menu principal...";
                    Sleep(1000);
                    system("cls");
                    return;
            }
            cin.clear();
        } catch (const invalid_argument& e) { //Imprime el error de un argumento invalido por si el usuario ingresa un tipo de dato que no es
            cerr << "Error: " << e.what() << endl;
            system("pause");
        } catch (const out_of_range& e) {
            cerr << "Error: " << e.what() << endl; //Imprime el error fuera de rango por si el usuario ingresa una opcion que no esta en el menu
            system("pause");
        }
    }
}

void agregarProductoMenu(Inventario &inventario) {
    system("color 1F");
    int id = 0;
    string categoria, nombre;
    double precio = 0;
    int cantidad = 0, garantia = 0;

    cout << "Ingrese el ID del producto: ";
    cin >> id;
    cin.ignore();

    cout << "Ingrese la categoria del producto (Hardware / Software): ";
    getline(cin, categoria);

    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombre);

    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cin.ignore();

    cout << "Ingrese la cantidad disponible del producto: ";
    cin >> cantidad;
    cin.ignore();

    cout << "Ingrese la duracion de la garantia (en meses): ";
    cin >> garantia;
    cin.ignore();

    // Crear un nuevo Producto en el heap y almacenar un puntero a él
    Producto* nuevoProducto = new Producto(id, categoria, nombre, precio, cantidad, garantia);
    // Agregar el puntero al inventario
    inventario.agregarProducto(*nuevoProducto);
    // Liberar la memoria asignada dinámicamente
    delete nuevoProducto;
}


void eliminarProductoMenu(Inventario &inventario) {
    system("color 1F");
    int idEliminar;
    cout << "Ingrese el ID del producto a eliminar: ";
    cin >> idEliminar;
    inventario.eliminarProducto(idEliminar);
}

void pedidos(vector<Pedido> &listaPedidos) {
     system("color 0A");
    // Agregar pedidos al vector
    listaPedidos.push_back(Pedido(101, "Juan", 3299.0));
    listaPedidos.push_back(Pedido(102, "Luis", 4299.0));

    cout << "\nDetalles de los pedidos:" << endl;
    cout << "------------------------" << endl;

    // Mostrar detalles de cada pedido en el vector
    for (const auto& pedido : listaPedidos) {
        pedido.mostrarDetalles();
    }
    cout << "Cliente Juan - Producto: Procesador AMD Ryzen 7 5700X" << endl;
    cout << "Cliente Luis - Producto: Silla Gamer Corsair T3 Rush Gaming 2023 Carbón / 2023 Edition" << endl;

    cout << "\nOperaciones con pedidos:" << endl;
    cout << "------------------------" << endl;

    // Ejemplo de operaciones con los pedidos
    Pedido pedido1 = listaPedidos[0];
    Pedido pedido2 = listaPedidos[1];
    if (pedido1 == pedido2) {
        cout << "Los id de los pedidos son iguales." << endl;
    } else {
        cout << "Los id de los pedidos son diferentes." << endl;
    }
    cout << "Subtotal de Pedido 1 + Pedido 2: $" << (pedido1 + pedido2) << " Sin IVA" << endl;
    cout << "Diferencia entre Pedido 1 y Pedido 2: $" << (pedido1 - pedido2) << endl;
    cout << "Total de Pedido 1 * 2 veces la cantidad: $" << (pedido1 * 2) << endl;
    cout << "Descuento del pedido 1 por el 50% (Fecha de hot sale 15/05/2024): $" << (pedido1 / 2) << endl;

    double iva = 0.16;
    double totalConIVA = (pedido1 + pedido2) * (1 + iva);
    cout << "\nTotal de Pedido 1 + Pedido 2: $" << totalConIVA << " con IVA" << endl;

    // Agregar pedidos ESPECIALES y EXCLUSIVOS al vector
    vector<PedidoEspecial> pedidos_especiales;
    pedidos_especiales.push_back(PedidoEspecial(103, "Adriana", 48999.0, "Producto agotado", "Tarjeta de video NVIDIA GeForce RTX 4090 EVA-02 24GB OC / ASUS ROG STRIX EVA-02 "));
    vector<PedidoExclusivo> pedidos_exclusivos;
    pedidos_exclusivos.push_back(PedidoExclusivo(104, "Mario", 87999.0, "Envío prioritario", "Computadora PRIDE GAMING PBA SHIMU / NVIDIA GeForce RTX 4090 / INTEL CORE i9-14900KF / 32GB RAM / 2TB SSD M.2 NVMe / HDD 2TB / ENF. LIQ. 360MM RGB / 1300W 80+ PLATINUM / Gratis juego Star Wars Outlaws"));


    cout << "\nPedidos Especiales:" << endl;
    cout << "-------------------" << endl;
    for (const auto& pedido : pedidos_especiales) {
        pedido.mostrarDetalles();
    }

    cout << "\nPedidos Exclusivos:" << endl;
    cout << "-------------" << endl;
    for (const auto& pedido : pedidos_exclusivos) {
        pedido.mostrarDetalles();
    }
}

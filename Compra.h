
#include <iostream>
#ifndef CLIENTE_H  // Si CLIENTE_H no está definido
#define CLIENTE_H
#include "Producto.h"
#include "Cliente.h"

class Compra {
private:
    Producto prod;
    int cantidad;
    std::string fecha;
    Cliente cliente;

public:
    Compra(Producto prod, Cliente cli, int cant, std::string fech)
        : prod(prod), cliente(cli), cantidad(cant), fecha(fech) {}

   std::string get_fecha() {
        return fecha;
    }
    int get_cantidad(){
        return cantidad;
    }

    void set_cantidad(int cant) {
        cantidad = cant;
    }
    void set_fecha(std::string fec){
        fecha = fec;
    }

    void mostrar_detalle() {
    std::cout << "Cliente: " << cliente.get_nombre() << " " << cliente.get_apepat() << " " << cliente.get_apemat() << std::endl;
    std::cout << "Producto: " << prod.get_nompro() << std::endl;
    std::cout << "Cantidad: " << cantidad << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Precio Total: $" << prod.get_cospro() * cantidad << std::endl;
}
};

#endif

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

    std::string get_fecha();
    int get_cantidad();

    void set_cantidad(int);
    void set_fecha(std::string);

    void mostrar_detalle();

};
   std::string Compra::get_fecha() {
        return fecha;
    }
    int Compra::get_cantidad(){
        return cantidad;
    }

    void Compra::set_cantidad(int cant) {
        cantidad = cant;
    }
    void Compra::set_fecha(std::string fec){
        fecha = fec;
    }

    void Compra::mostrar_detalle() {
    /**
         * Imprime los detalles de una compra, que incluyen:
         *   - Nombre del cliente asociado a la compra.
         *   - Nombre del producto comprado.
         *   - Cantidad de productos comprados.
         *   - Fecha de la compra.
         *   - Precio total calculado como: cantidad * precio unitario.
         * Recibe: No requiere parámetros.
         * Devuelve: Muestra la información en consola; no retorna valores.
    */
    std::cout << "Cliente: " << cliente.get_nombre() << " " <<
     cliente.get_apepat() << " " << cliente.get_apemat() << std::endl;
    std::cout << "Producto: " << prod.get_nompro() << std::endl;
    std::cout << "Cantidad: " << cantidad << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Precio Total: $" << prod.get_cospro() * 
    cantidad << std::endl;
}


#endif
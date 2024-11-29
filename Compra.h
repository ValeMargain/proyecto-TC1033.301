
#include <iostream>
  // Si CLIENTE_H no está definido
#ifndef COMPRA_H
#define COMPRA_H

#include "ProductoAlimento.h"
#include "ProductoElectronico.h"
#include "Cliente.h"
#include <string>


class Compra {
 
private:
//Atributos
    Cliente cliente;
    ProductoElectronico productosE[100];
    ProductoAlimento productosA[100];
    int numProdsE;
    int numProdsA;

public:
    //Metodo constructor
   Compra(ProductoElectronico productosE[], ProductoAlimento productosA[], 
            Cliente cliente, int numProdsE, int numProdsA)
        : cliente(cliente), numProdsE(numProdsE), 
          numProdsA(numProdsA) {

        // Copiamos los arreglos pasados a los miembros de la clase
        for (int i = 0; i < numProdsE; ++i) {
            this->productosE[i] = productosE[i];
        }
        for (int i = 0; i < numProdsA; ++i) {
            this->productosA[i] = productosA[i];
        }
    }
    void mostrar_Compra();
    
};
void Compra::mostrar_Compra()  {
    /**
        * Recibe:
        * -Nada
        * Muestra el objeto compra, el cual ya tiene la informacion del 
        * objeto cliente y los respectivos objetos de cada tipo de producto.
         * Devuelve:
         *   - Muestra una lista correspondiente a la compra del cliente, 
         * incluye los productos y datos personales.
    */
        std::cout << "\n--- Detalles de la Compra ---\n";
        std::cout << "Cliente: " << cliente.get_nombre() 
        << " " <<
         cliente.get_apepat() << " " << cliente.get_apemat() 
         << "\n";
        std::cout << "Fecha de nacimiento: " << cliente.get_fecnac() 
        << "\n";
        std::cout << "Teléfono: " << cliente.get_telefo() 
        << "\n";
        std::cout << "Correo: " << cliente.get_correo() 
        << "\n";

        std::cout << "\nProductos Electrónicos:\n";
        for (int i = 0; i < numProdsE; i++) {
            std::cout << "Producto " << i + 1 << ":\n";
            productosE[i].mostrar();
        }

        std::cout << "\nProductos Alimenticios:\n";
        for (int i = 0; i < numProdsA; i++) {
            std::cout << "Producto " << i + 1 << ":\n";
            productosA[i].mostrar();
        }

        std::cout << "\n--- Fin de la Compra ---\n";
    }

   


#endif

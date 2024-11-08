#include <iostream>
#include <string>
#include "Compra.h"
#include "Cliente.h"
#include "Producto.h"

int main() {
    Cliente clie_1("Armando", "Rodriguez", "Hernandez", "12/12/2000", "2294046401", "armrodher@gmail.com");
    Producto prod_1("Sabritas", "Estan muy ricas", 10, "11/11/2024", "Botanas", 15.6);
    
    std::cout << "Información original:\n" << std::endl;
    clie_1.mostrar_informacion();

    // Editar la información del cliente
    clie_1.editar_info("Luis", "Garcia", "Martinez", "01/01/1999", "5555555555", "luisgarcia@example.com");

    // Mostrar información actualizada
    std::cout << "Información actualizada:\n" << std::endl;
    clie_1.mostrar_informacion();

    // Crear instancia de Compra, asegurándote de pasar un std::string en lugar de const char[]
    Compra compra1(prod_1, clie_1, 3, std::string("12/11/2024"));
    
    //Mostrar compra
    compra1.mostrar_detalle();
    return 0;
}

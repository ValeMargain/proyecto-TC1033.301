#include <iostream>
#include <string>
#include "Compra.h"
#include "Cliente.h"
#include "Producto.h"
#include "ProductoElectronico.h"
#include "ProductoAlimento.h"

int main() {
    // Cliente y producto básicos
    Cliente clie_1("Armando", "Rodriguez", "Hernandez", "12/12/2000", "2294046401", "armrodher@gmail.com");
    Producto prod_1("Sabritas", "Estan muy ricas", 10, "11/11/2024", "Botanas", 15.6);

    std::cout << "Información original:\n" << std::endl;
    clie_1.mostrar_informacion();

    // Editar la información del cliente
    clie_1.editar_info("Luis", "Garcia", "Martinez", "01/01/1999", "5555555555", "luisgarcia@example.com");

    // Mostrar información actualizada
    std::cout << "Información actualizada:\n" << std::endl;
    clie_1.mostrar_informacion();

    // Crear instancia de Compra
    Compra compra1(prod_1, clie_1, 3, std::string("12/11/2024"));
    compra1.mostrar_detalle();

    // Crear instancias de productos de clases derivadas
    ProductoElectronico prodElectronico("Smartphone", "Smartphone de última generación", 10, "2024-10-01", "Electrónica", 800.0, 24);
    ProductoAlimento prodAlimenticio("Manzana", "Manzana roja orgánica", 50, "2024-11-01", "Alimentos", 1.5, "2025-01-01");
    

    // Mostrar detalles de ProductoElectronico
    std::cout << "\nProducto Electrónico:\n";
    std::cout << "Nombre: " << prodElectronico.get_nompro() << "\n";
    std::cout << "Descripción: " << prodElectronico.get_despro() << "\n";
    std::cout << "Garantía (meses): " << prodElectronico.get_Garantia() << "\n";
    std::cout << "Costo: $" << prodElectronico.get_cospro() << "\n";

    // Mostrar detalles de ProductoAlimenticio
    std::cout << "\nProducto Alimenticio:\n";
    std::cout << "Nombre: " << prodAlimenticio.get_nompro() << "\n";
    std::cout << "Descripción: " << prodAlimenticio.get_despro() << "\n";
    std::cout << "Fecha de caducidad: " << prodAlimenticio.get_fecha_expiracion() << "\n";
    std::cout << "Costo: $" << prodAlimenticio.get_cospro() << "\n";


    return 0;
}

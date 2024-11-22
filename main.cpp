#include <iostream>
#include <string>
#include "Compra.h"
#include "Cliente.h"
#include "Producto.h"
#include "ProductoElectronico.h"
#include "ProductoAlimento.h"

int main() {
    /**
     * (Uso de entrada del usuario, instancias dinámicas, interacción entre clases)
     * Descripción:
     *   - El usuario ingresa datos para crear instancias de Cliente, Producto, ProductoAlimento y ProductoElectronico.
     *   - Se muestra información ingresada y se prueba la interacción entre las clases.
     *   - Se realizan cálculos y se muestran detalles dinámicamente.
     */
    
    // Variables para capturar datos
    std::string nombre, apepat, apemat, fecnac, telefo, correo;
    std::string nompro, despro, fecpro, catego;
    int canpro, garantia;
    float cospro;
    int cantidadCompra;
    std::string fechaCompra;
    
    // --- Capturar datos del cliente ---
    std::cout << "Ingrese datos del cliente:" << std::endl;
    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);
    std::cout << "Apellido paterno: ";
    std::getline(std::cin, apepat);
    std::cout << "Apellido materno: ";
    std::getline(std::cin, apemat);
    std::cout << "Fecha de nacimiento (dd/mm/yyyy): ";
    std::getline(std::cin, fecnac);
    std::cout << "Teléfono: ";
    std::getline(std::cin, telefo);
    std::cout << "Correo: ";
    std::getline(std::cin, correo);

    Cliente cliente(nombre, apepat, apemat, fecnac, telefo, correo);

    // --- Capturar datos de un producto ---
    std::cout << "\nIngrese datos de un producto genérico:" << std::endl;
    std::cout << "Nombre del producto: ";
    std::getline(std::cin, nompro);
    std::cout << "Descripción: ";
    std::getline(std::cin, despro);
    std::cout << "Cantidad disponible: ";
    std::cin >> canpro;
    std::cin.ignore(); // Limpiar el buffer de entrada
    std::cout << "Fecha de producción (dd/mm/yyyy): ";
    std::getline(std::cin, fecpro);
    std::cout << "Categoría: ";
    std::getline(std::cin, catego);
    std::cout << "Costo: ";
    std::cin >> cospro;
    std::cin.ignore(); // Limpiar el buffer de entrada

    Producto producto(nompro, despro, canpro, fecpro, catego, cospro);

    // --- Crear una compra ---
    std::cout << "\nIngrese detalles de la compra:" << std::endl;
    std::cout << "Cantidad a comprar: ";
    std::cin >> cantidadCompra;
    std::cin.ignore();
    std::cout << "Fecha de la compra (dd/mm/yyyy): ";
    std::getline(std::cin, fechaCompra);

    Compra compra(producto, cliente, cantidadCompra, fechaCompra);

    // Mostrar detalles de la compra
    std::cout << "\n--- Detalles de la compra ---" << std::endl;
    compra.mostrar_detalle();

    // --- Crear y mostrar detalles de un ProductoElectrónico ---
    std::cout << "\nIngrese datos de un producto electrónico:" << std::endl;
    std::cout << "Nombre: ";
    std::getline(std::cin, nompro);
    std::cout << "Descripción: ";
    std::getline(std::cin, despro);
    std::cout << "Cantidad disponible: ";
    std::cin >> canpro;
    std::cin.ignore();
    std::cout << "Fecha de producción (dd/mm/yyyy): ";
    std::getline(std::cin, fecpro);
    std::cout << "Categoría: ";
    std::getline(std::cin, catego);
    std::cout << "Costo: ";
    std::cin >> cospro;
    std::cout << "Garantía en meses: ";
    std::cin >> garantia;
    std::cin.ignore();

    ProductoElectronico productoElectronico(nompro, despro, canpro, fecpro, catego, cospro, garantia);

    std::cout << "\n--- Detalles del Producto Electrónico ---" << std::endl;
    std::cout << "Nombre: " << productoElectronico.get_nompro() << "\n";
    std::cout << "Descripción: " << productoElectronico.get_despro() << "\n";
    std::cout << "Garantía (meses): " << productoElectronico.get_Garantia() << "\n";
    std::cout << "Costo: $" << productoElectronico.get_cospro() << "\n";

    // --- Crear y mostrar detalles de un ProductoAlimento ---
    std::string fechaCaducidad;
    std::cout << "\nIngrese datos de un producto alimenticio:" << std::endl;
    std::cout << "Nombre: ";
    std::getline(std::cin, nompro);
    std::cout << "Descripción: ";
    std::getline(std::cin, despro);
    std::cout << "Cantidad disponible: ";
    std::cin >> canpro;
    std::cin.ignore();
    std::cout << "Fecha de producción (dd/mm/yyyy): ";
    std::getline(std::cin, fecpro);
    std::cout << "Categoría: ";
    std::getline(std::cin, catego);
    std::cout << "Costo: ";
    std::cin >> cospro;
    std::cin.ignore();
    std::cout << "Fecha de caducidad (dd/mm/yyyy): ";
    std::getline(std::cin, fechaCaducidad);

    ProductoAlimento productoAlimento(nompro, despro, canpro, fecpro, catego, cospro, fechaCaducidad);

    std::cout << "\n--- Detalles del Producto Alimenticio ---" << std::endl;
    std::cout << "Nombre: " << productoAlimento.get_nompro() << "\n";
    std::cout << "Descripción: " << productoAlimento.get_despro() << "\n";
    std::cout << "Fecha de caducidad: " << productoAlimento.get_fecha_expiracion() << "\n";
    std::cout << "Costo: $" << productoAlimento.get_cospro() << "\n";

    return 0;
}

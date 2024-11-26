#include <iostream>
#include <string>
#include "Compra.h"
#include "Cliente.h"
#include "Producto.h"
#include "ProductoElectronico.h"
#include "ProductoAlimento.h"


void ingresarCliente(Cliente &cliente) {
    /**
        * Recibe:
         *   - cliente: Objeto de la clase cliente.
         * Llena todos los parametros correspondientes al cliente 
         * (nombre, apepat, apemat, fecnac, telefo, correo)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada
    */
    std::string nombre, apepat, apemat, fecnac, telefo, correo;

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

    cliente = Cliente(nombre, apepat, apemat, fecnac, telefo, correo);
}

void ingresarProducto(Producto &producto) {
     /**
        * Recibe:
         *   - producto: Objeto de la clase producto.
         * Llena todos los parametros correspondientes al producto 
         * (nompro, despro, canpro, fecpro, catego, cospro)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada
    */
    std::string nompro, despro, fecpro, catego;
    int canpro;
    float cospro;

    std::cout << "Ingrese datos del producto:" << std::endl;
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

    producto = Producto(nompro, despro, canpro, fecpro, catego, cospro);
}

void realizarCompra(Compra &compra, const Producto &producto, 
const Cliente &cliente) {
    /**
        * Recibe:
         *   - compra: Objeto de la clase Compra
         *   - producto: Objeto de la clase producto.
         *   - cliente: objeto de la clase Cliente
         * Llena todos los parametros correspondientes a la compra 
         * (producto, cliente, cantidadCompra, fechaCompra)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada, solo crea el objeto.
    */
    int cantidadCompra;
    std::string fechaCompra;

    std::cout << "Ingrese detalles de la compra:" << std::endl;
    std::cout << "Cantidad a comprar: ";
    std::cin >> cantidadCompra;
    std::cin.ignore();
    std::cout << "Fecha de la compra (dd/mm/yyyy): ";
    std::getline(std::cin, fechaCompra);

    compra = Compra(producto, cliente, cantidadCompra, fechaCompra);
}

void crearProductoElectronico(ProductoElectronico &productoElectronico) {
    /**
        * Recibe:
         *   - productoElectronico: Objeto de la clase ProductoElectronico
         * Llena todos los parametros correspondientes al producto electronico 
         * (nompro, despro, canpro, fecpro, catego, cospro, garantia)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada, solo crea el objeto.
    */
    std::string nompro, despro, fecpro, catego;
    int canpro, garantia;
    float cospro;

    std::cout << "Ingrese datos del producto electrónico:" << std::endl;
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
    std::cin.ignore(); //Elimina salto de linea 

    productoElectronico = ProductoElectronico(nompro, despro, canpro,
     fecpro, catego, cospro, garantia);
}

void mostrarProductoElectronico(ProductoElectronico &productoElectronico) {
    /**
        * Recibe:
         *   - productoElectronico: Objeto de la clase ProductoElectronico
         * Muestra los detalles del producto (nompro, despro, canpro, fecpro,
         * catego, cospro, garantia)
         * Devuelve:
         *   - Nada, solo muestra el objeto.
    */
    std::cout << "\n--- Detalles del Producto Electrónico ---\n";
    std::cout << "Nombre: " << productoElectronico.get_nompro() 
    << "\n";
    std::cout << "Descripción: " << productoElectronico.get_despro() 
    << "\n";
    std::cout << "Cantidad disponible: " << productoElectronico.get_canpro()
     << "\n";
    std::cout << "Garantía (meses): " << productoElectronico.get_Garantia() 
    << "\n";
    std::cout << "Costo: $" << productoElectronico.get_cospro() 
    << "\n";
}

void crearProductoAlimento(ProductoAlimento &productoAlimento) {
    /**
        * Recibe:
         *   - productoAlimento: Objeto de la clase ProductoAlimento
         * Llena todos los parametros correspondientes al producto electronico 
         * (nompro, despro, canpro, fecpro, catego, cospro, fechaCaducidad)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada, solo crea el objeto.
    */
    std::string nompro, despro, fecpro, catego, fechaCaducidad;
    int canpro;
    float cospro;

    std::cout << "Ingrese datos del producto alimenticio:" << std::endl;
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

    productoAlimento = ProductoAlimento(nompro, despro, canpro, 
    fecpro, catego, cospro, fechaCaducidad);
}

void mostrarProductoAlimento(ProductoAlimento &productoAlimento) {
    /**
        * Recibe:
         *   - productoAlimento: Objeto de la clase productoAlimento
         * Muestra los detalles del producto (nompro, despro, canpro, fecpro, catego,
         *  cospro, fechaCaducidad)
         * Devuelve:
         *   - Nada, solo muestra el objeto.
    */
    std::cout << "\n--- Detalles del Producto Alimenticio ---\n";
    std::cout << "Nombre: " << productoAlimento.get_nompro() 
    << "\n";
    std::cout << "Descripción: " << productoAlimento.get_despro() 
    << "\n";
    std::cout << "Cantidad disponible: " << productoAlimento.get_canpro() 
    << "\n";
    std::cout << "Fecha de producción: " << productoAlimento.get_fecpro() 
    << "\n";
    std::cout << "Fecha de caducidad: " << 
    productoAlimento.get_fecha_expiracion() << "\n";
    std::cout << "Costo: $" << productoAlimento.get_cospro() 
    << "\n";
}

int main() {
    Cliente cliente("", "", "", "", "", "");
    Producto producto("", "", 0, "", "", 0.0);
    ProductoElectronico productoElectronico("", "", 0, "", "", 0.0, 0);
    ProductoAlimento productoAlimento("", "", 0, "", "", 0.0, "");
    Compra compra(producto, cliente, 0, "");

    int opcion;

    do {
        std::cout << "\nMenú:\n";
        std::cout << "1. Ingresar cliente\n";
        std::cout << "2. Ingresar producto\n";
        std::cout << "3. Realizar compra\n";
        std::cout << "4. Mostrar compra\n";
        std::cout << "5. Crear producto electrónico\n";
        std::cout << "6. Mostrar producto electrónico\n";
        std::cout << "7. Crear producto alimenticio\n";
        std::cout << "8. Mostrar producto alimenticio\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore(); //Hace que no se considere el salto e linea

        switch (opcion) {
            case 1:
                ingresarCliente(cliente);
                break;
            case 2:
                ingresarProducto(producto);
                break;
            case 3:
                realizarCompra(compra, producto, cliente);
                break;
            case 4:
                compra.mostrar_detalle();
                break;
            case 5:
                crearProductoElectronico(productoElectronico);
                break;
            case 6:
                mostrarProductoElectronico(productoElectronico);
                break;
            case 7:
                crearProductoAlimento(productoAlimento);
                break;
            case 8:
                mostrarProductoAlimento(productoAlimento);
                break;
            case 0:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}

#include <iostream>
#include <string>

#include "Compra.h"
#include "Cliente.h"
#include "ProductoElectronico.h"
#include "ProductoAlimento.h"


const int MAX_PRODUCTOS = 100;


ProductoElectronico listaProductosElectronicos[MAX_PRODUCTOS];
ProductoAlimento listaProductosAlimentos[MAX_PRODUCTOS];


int numProductosElectronicos = 0;
int numProductosAlimentos = 0;

void ingresarCliente(Cliente &cliente) {
    /**
        * Recibe:
         *   - cliente: Objeto de la clase cliente.
         * Llena todos los parametros correspondientes al cliente 
         * (nombre, apepat, apemat, fecnac, telefo, correo)
         * para crear el objeto. 
         * Devuelve:
         *   - Nada, sin embargo muestra una confirmacion si el cliente se
         * resitro correctamente.
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
    std::cout << "Cliente agregado correctamente.\n";
}

void crearProductoElectronico() {
    /**
        * Recibe:
         *   - Nada: 
         * Valida que no haya 100 objetos creados. Llena todos los parametros
         *  correspondientes al producto electronico 
         * (nombre, descripcion,cantidad disponible, fecha de produccion,
         *  categoria, costo, garantia;) para crear el objeto. 
         * Finalmente lo guarda en una lista de productos electronicos.
         * Devuelve:
         *   - Nada, sin embargo muestra una confirmacion si el cliente se
         * resitro correctamente.
    */
    if (numProductosElectronicos < MAX_PRODUCTOS) {
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
        std::cin.ignore();

        // Crear el objeto y almacenarlo en el arreglo
        listaProductosElectronicos[numProductosElectronicos]
         = ProductoElectronico(nompro, despro, canpro, fecpro,
          catego, cospro, garantia);
        numProductosElectronicos++;

        std::cout << "Producto electrónico agregado correctamente.\n";
    } else {
        std::cout << "No se pueden agregar más productos electrónicos.\n";
    }
}

void crearProductoAlimento() {
    /** Recibe:
         *   - Nada: 
         * Valida que no haya 100 objetos creados. Llena todos los parametros
         *  correspondientes al producto alimento 
         * (nombre, descripcion,cantidad disponible, fecha de produccion,
         *  categoria, costo, fecha de caducidad;) para crear el objeto. 
         * Finalmente lo guarda en una lista de productos electronicos.
         * Devuelve:
         *   - Nada, sin embargo muestra una confirmacion si el cliente se
         * resitro correctamente.*/
    if (numProductosAlimentos < MAX_PRODUCTOS) {
        std::string nompro, despro, fecpro, catego, fechaCaducidad;
        int canpro;
        float cospro;

        std::cout << "Ingrese datos del producto alimenticio:"
         << std::endl;
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

        // Crear el objeto y almacenarlo en el arreglo
        listaProductosAlimentos[numProductosAlimentos] =
         ProductoAlimento(nompro, despro, canpro, fecpro,
          catego, cospro, fechaCaducidad);
        numProductosAlimentos++;

        std::cout << "Producto alimenticio agregado correctamente.\n";
    } else {
       std::cout << "No se pueden agregar más productos alimenticios.\n";
    }
}

void mostrarProductosElectronicos() {
    /** Recibe:
         *   - Nada: 
         * Muestra el arreglo de productos elecronicos.
         * Devuelve:
         *   - Nada, solo se encarga de mostrar los productos.*/
    
    std::cout << "\n--- Lista de Productos Electrónicos ---\n";
    for (int i = 0; i < numProductosElectronicos; i++) {
        std::cout << "Producto " << i + 1 << ":\n";
        listaProductosElectronicos[i].mostrar();
        std::cout << std::endl;
    }
}

void mostrarProductosAlimentos() {
    /** Recibe:
         *   - Nada: 
         * Muestra el arreglo de productos elecronicos.
         * Devuelve:
         *   - Nada, solo se encarga de mostrar los productos.*/
    
    std::cout << "\n--- Lista de Productos Alimenticios ---\n";
    for (int i = 0; i < numProductosAlimentos; i++) {
        std::cout << "Producto " << i + 1 << ":\n";
        listaProductosAlimentos[i].mostrar();
        std::cout << std::endl;
    }
}

void crearCompra() {
    /** Recibe:
         *   - Nada: 
         * Valida que haya productos registrados, en caos de que si pasa a 
         * solicitar la informacion del cliente y la asocia con los productos 
         * que ya fueron registrados. 
         * Devuelve:
         *   - Nada, sin embargo, valida que haya  productos registrados y 
         * finalmente muestra la compra del cliente con la infromacion
         * correspondiente.*/
    
    if (numProductosElectronicos > 0 || numProductosAlimentos > 0) {
        Cliente cliente("", "", "", "", "", ""); 
        ingresarCliente(cliente);  
        Compra compra(listaProductosElectronicos, listaProductosAlimentos,
         cliente, numProductosElectronicos, numProductosAlimentos);

        std::cout << "Compra creada correctamente.\n";
        compra.mostrar_Compra();
    } else {
        std::cout << "No hay productos disponibles para crear una compra.\n";
    }
}


int main() {
    int opcion;
    Cliente cliente("", "", "", "", "", "");
    
    //Menu: 

    do {
        std::cout << "\nMenú:\n";
        std::cout << "1. Crear producto electrónico\n";
        std::cout << "2. Crear producto alimenticio\n";
        std::cout << "3. Mostrar productos electrónicos\n";
        std::cout << "4. Mostrar productos alimenticios\n";
        std::cout << "5. Ingresar cliente\n";
        std::cout << "6. Comprar\n";   
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();//Ignora saltos de linea

        switch (opcion) {
            case 1:
                crearProductoElectronico();
                break;
            case 2:
                crearProductoAlimento();
                break;
            case 3:
                mostrarProductosElectronicos();
                break;
            case 4:
                mostrarProductosAlimentos();
                break;
            case 5:
                ingresarCliente(cliente);
                break;
            case 6:
                crearCompra(); 
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

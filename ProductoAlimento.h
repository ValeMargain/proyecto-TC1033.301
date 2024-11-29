// ProductoAlimento.h
#include "Producto.h"
#include <string>
#ifndef PRODUCTOALIMENTO_H
#define PRODUCTOALIMENTO_H
class ProductoAlimento : public Producto {
private:
    std::string fechaExpiracion; // Fecha de caducidad

public:
    ProductoAlimento() : Producto("", "", 0, "", "", 0.0),
     fechaExpiracion("") {}

    // Constructor con parámetros
    ProductoAlimento(std::string nompro, std::string despro, int canpro, 
    std::string fecpro, std::string catego, float cospro, 
    std::string fechaExpiracion)
        : Producto(nompro, despro, canpro, fecpro, catego, cospro), 
        fechaExpiracion(fechaExpiracion) {}
    
    std::string get_fecha_expiracion();
    void set_fecha_expiracion(std::string);
    bool va_a_caducar(std::string&);
    void mostrar();

};
    // Getter para fecha de expiración
    std::string ProductoAlimento::get_fecha_expiracion()  {
        return fechaExpiracion;
    }

    // Setter para fecha de expiración
    void ProductoAlimento::set_fecha_expiracion(std::string fechaExp) {
        fechaExpiracion = fechaExp;
    }

    // Método adicional para verificar si el producto está próximo a caducar
    bool ProductoAlimento::va_a_caducar( std::string& fechaActual)  {
    /**
         * Recibe:
         *   - fechaActual: Fecha actual proporcionada como cadena 
         *      en formato "YYYY-MM-DD".
         * Verifica si el producto alimenticio está próximo a caducar
         *  comparando la fecha actual con la fecha de expiración.
         * Devuelve:
         *   - `true` si el producto ya ha caducado.
         *   - `false` si el producto aún no caduca.
    */
        return fechaActual > fechaExpiracion;
    }

// Método mostrar() dentro de la clase ProductoElectronico
void ProductoAlimento::mostrar()  {
     /**
        * Recibe:
         *   - Nada:
         * Se encarga de mostrar la informacion de los objetos producto
         * Devuelve:
         *   - Nada, solamente muestra los productos. 
    */
    std::cout << "Nombre: " << get_nompro() << "\n";
    std::cout << "Descripción: " << get_despro() << "\n";
    std::cout << "Cantidad disponible: " << get_canpro() << "\n";
    std::cout << "Fecha de producción: " << get_fecpro() << "\n";
    std::cout << "Categoría: " << get_catego() << "\n";
    std::cout << "Costo: $" << get_cospro() << "\n";
    std::cout << "Fecha de expiracion: " << get_fecha_expiracion() << "\n";
}
#endif
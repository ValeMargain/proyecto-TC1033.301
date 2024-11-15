// ProductoAlimento.h
#include "Producto.h"
#include <string>

class ProductoAlimento : public Producto {
private:
    std::string fechaExpiracion; // Fecha de caducidad

public:
    ProductoAlimento(std::string nompro, std::string despro, int canpro, 
    std::string fecpro, std::string catego, float cospro, 
    std::string fechaExpiracion)
        : Producto(nompro, despro, canpro, fecpro, catego, cospro), fechaExpiracion(fechaExpiracion) {}

    // Getter para fecha de expiración
    std::string get_fecha_expiracion()  {
        return fechaExpiracion;
    }

    // Setter para fecha de expiración
    void set_fecha_expiracion(std::string fechaExp) {
        fechaExpiracion = fechaExp;
    }

    // Método adicional para verificar si el producto está próximo a caducar
    bool va_a_caducar( std::string& fechaActual)  {
        return fechaActual > fechaExpiracion;
    }
};

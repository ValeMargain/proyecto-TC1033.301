// ProductoElectronico.h
#include "Producto.h"
#include <string>

class ProductoElectronico : public Producto {
private:
    int garantia; // En meses

public:
    ProductoElectronico(std::string nompro, std::string despro, int canpro,
     std::string fecpro, std::string catego, float cospro, int garantia)
        : Producto(nompro, despro, canpro, fecpro, catego, cospro), 
        garantia(garantia) {}
        
    //Llamado de funciones 
    int get_Garantia();
    void set_Garantia(int);
    float calcularCostoExtensionGarantia(int);
};

// Getter para garantía
int ProductoElectronico::get_Garantia() {
    return garantia;
}

// Setter para garantía
void ProductoElectronico::set_Garantia(int gar) {
    garantia = gar;
}

// Método adicional para calcular el costo de extensión de garantía
float ProductoElectronico::calcularCostoExtensionGarantia(int meses)  {
    /**
        * Recibe:
         *   - meses: Número de meses adicionales para extender la garantía.
         * Calcula el costo de extender la garantía basado en un porcentaje
         *  fijo (5%) del costo del producto por cada mes adicional.
         * Devuelve:
         *   - Un valor `float` que representa el costo de extender 
         *      la garantía.
    */
    return get_cospro() * 0.05 * meses; 
}


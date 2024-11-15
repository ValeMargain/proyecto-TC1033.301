// ProductoElectronico.h
#include "Producto.h"
#include <string>

class ProductoElectronico : public Producto {
private:
    int garantia; // En meses

public:
    ProductoElectronico(std::string nompro, std::string despro, int canpro, std::string fecpro, std::string catego, float cospro, int garantia)
        : Producto(nompro, despro, canpro, fecpro, catego, cospro), garantia(garantia) {}

    // Getter para garantía
    int get_Garantia() {
        return garantia;
    }

    // Setter para garantía
    void set_Garantia(int gar) {
        garantia = gar;
    }

    // Método adicional para calcular el costo de extensión de garantía
    float calcularCostoExtensionGarantia(int meses)  {
        return get_cospro() * 0.05 * meses; 
    }
};

#include <iostream>
#include <string>
#pragma once
class Cliente {
private:
    std::string nombre;
    std::string apepat;
    std::string apemat;
    std::string fecnac;
    std::string telefo;
    std::string correo;

public:
    Cliente();
    Cliente(std::string nom, std::string appa, std::string apma,
            std::string fec, std::string tel, std::string cor): nombre(nom), apepat(appa), apemat(apma), fecnac(fec), telefo(tel), correo(cor) {};

    // Getters
    // Implementación de los setters
void set_nombre(std::string nom) {
    nombre = nom;
}
void set_apepat(std::string apepat) {
    this->apepat = apepat;
}
void set_apemat(std::string apemat) {
    this->apemat = apemat;
}
void set_fecnac(std::string fec) {
    fecnac = fec;
}
void set_telefo(std::string tel) {
    telefo = tel;
}
void set_correo(std::string cor) {
    correo = cor;
}

// Implementación de los getters
std::string get_nombre() {
    return nombre;
}
std::string get_apepat() {
    return apepat;
}
std::string get_apemat() {
    return apemat;
}
std::string get_fecnac() {
    return fecnac;
}
std::string get_telefo() {
    return telefo;
}
std::string get_correo() {
    return correo;
}

// Implementación de métodos adicionales

// Muestra la información completa del cliente
void mostrar_informacion() {
    std::cout << "Nombre completo: " << nombre << " " << apepat << " " << apemat << std::endl;
    std::cout << "Fecha de Nacimiento: " << fecnac << std::endl;
    std::cout << "Teléfono: " << telefo << std::endl;
    std::cout << "Correo: " << correo << std::endl;
}


void editar_info(std::string nue_nom,std::string nue_app, std::string nue_apm, std::string nue_fec, std::string nue_tel, std::string nue_cor) {
    nombre = nue_nom;
    apepat = nue_app;
    apemat = nue_apm;
    fecnac = nue_fec;
    telefo = nue_tel;
    correo = nue_cor;
    
}

// Simula el registro del cliente
void registrar_cliente() {
    std::cout << "Cliente registrado exitosamente con los siguientes datos:" << std::endl;
    mostrar_informacion();
}
};


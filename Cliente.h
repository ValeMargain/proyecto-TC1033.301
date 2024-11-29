#include <iostream>
#include <string>
#pragma once
class Cliente {

/*
 * Clase: Cliente
 * Propósito: Representar la información de un cliente, incluyendo nombre,
 *  apellidos,fecha de nacimiento, teléfono y correo electrónico.
 * Funcionalidades:
 *   - Registrar un cliente.
 */

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
            std::string fec, std::string tel, std::string cor): 
            nombre(nom), apepat(appa), apemat(apma), fecnac(fec),
            telefo(tel), correo(cor) {};
    void set_nombre(std::string);
    void set_apepat(std::string);
    void set_apemat(std::string);
    void set_fecnac(std::string);
    void set_telefo(std::string);
    void set_correo(std::string);

    std::string get_nombre();
    std::string get_apepat();
    std::string get_apemat();
    std::string get_fecnac();
    std::string get_telefo();
    std::string get_correo();


};

// Implementación de los setters
void Cliente::set_nombre(std::string nom) {
    nombre = nom;
}
void Cliente::set_apepat(std::string apepat) {
    this->apepat = apepat;
}
void Cliente::set_apemat(std::string apemat) {
    this->apemat = apemat;
}
void Cliente::set_fecnac(std::string fec) {
    fecnac = fec;
}
void Cliente::set_telefo(std::string tel) {
    telefo = tel;
}
void Cliente::set_correo(std::string cor) {
    correo = cor;
}

// Implementación de los getters
std::string Cliente::get_nombre() {
    return nombre;
}
std::string Cliente::get_apepat() {
    return apepat;
}
std::string Cliente::get_apemat() {
    return apemat;
}
std::string Cliente::get_fecnac() {
    return fecnac;
}
std::string Cliente::get_telefo() {
    return telefo;
}
std::string Cliente::get_correo() {
    return correo;
}


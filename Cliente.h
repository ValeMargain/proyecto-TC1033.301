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
 *   - Editar información del cliente.
 *   - Mostrar información completa del cliente.
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

    void mostrar_informacion();
    void editar_info(std::string, std::string, std::string, std::string,
    std::string,std::string);
    void registrar_cliente();

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

void Cliente::mostrar_informacion() {
    /**
     * (uso de funciones, manejo de cadenas, salida por consola)
     * Imprime en consola todos los datos del cliente, incluyendo:
     * nombre, apellidos, fecha de nacimiento, teléfono y correo electrónico.
     * Recibe: No requiere parámetros.
     * Devuelve: Muestra los datos en consola; no retorna valores.
    */
    std::cout << "Nombre completo: " << nombre << " " << apepat <<
     " " << apemat << std::endl;
    std::cout << "Fecha de Nacimiento: " << fecnac << std::endl;
    std::cout << "Teléfono: " << telefo << std::endl;
    std::cout << "Correo: " << correo << std::endl;
}


void Cliente::editar_info(std::string nue_nom,std::string nue_app, 
std::string nue_apm, std::string nue_fec, std::string nue_tel,
 std::string nue_cor) {
/**
     * Recibe:
     *   - nue_nom: Nuevo nombre del cliente.
     *   - nue_app: Nuevo apellido paterno del cliente.
     *   - nue_apm: Nuevo apellido materno del cliente.
     *   - nue_fec: Nueva fecha de nacimiento del cliente.
     *   - nue_tel: Nuevo teléfono del cliente.
     *   - nue_cor: Nuevo correo del cliente.
     * Actualiza los atributos del cliente con la nueva información 
     * proporcionada.
     * Devuelve: Actualiza los atributos del cliente; no retorna valores.
 */
    nombre = nue_nom;
    apepat = nue_app;
    apemat = nue_apm;
    fecnac = nue_fec;
    telefo = nue_tel;
    correo = nue_cor;
    
}

void Cliente::registrar_cliente() {
    std::cout << "Cliente registrado exitosamente con los siguientes datos:" 
    << std::endl;
    mostrar_informacion();
}



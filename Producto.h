#include<iostream>
#pragma once
//using namespace std;

class Producto{

/*Declaramos los atributos como protegidos*/
protected:
  std::string nompro;
  std::string despro;
  int canpro;
  std::string fecpro;
  std::string catego;
  float cospro;

/*Aqui empieza la seccion de metodos publicos*/
public:
 //Metodos constructores
  Producto();
    Producto(std::string nompro, std::string despro, int canpro, 
    std::string fecpro, std::string catego, float cospro)
        : nompro(nompro), despro(despro), canpro(canpro), fecpro(fecpro)
        , catego(catego), cospro(cospro)  {};

  //Llamado de las funciones
  void set_nompro(std::string);
  void set_despro(std::string);
  void set_canpro(int can);
  void set_fecpro(std::string);
  void set_catpro(std::string);
  void set_cospro(float);

  std::string get_nompro();
  std::string get_despro();
  int get_canpro();
  float get_cospro();
  std::string get_fecpro();
  std::string get_catego();

};

//Metodos setters
  void Producto::set_nompro(std::string nom){
  nompro = nom;
}
void Producto::set_despro(std::string des){
  despro = des;
}
void Producto::set_canpro(int can){
  canpro = can;
}

void Producto::set_fecpro(std::string fec){
  fecpro = fec;
}

void Producto::set_catpro(std::string catego){
  catego = catego;
}
void Producto::set_cospro(float costo){
  cospro = costo;
}


//Metodos getters
std::string Producto::get_nompro(){
  return nompro;
}
std::string Producto::get_despro(){
  return despro;
}

int Producto::get_canpro(){
  return canpro;
}

float Producto::get_cospro(){
  return cospro;
}

std::string Producto::get_fecpro(){
  return fecpro;
}

std::string Producto::get_catego(){
  return catego;
}



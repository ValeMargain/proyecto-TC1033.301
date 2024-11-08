#include<iostream>
#pragma once

//using namespace std;
class Producto{
private:
  std::string nompro;
  std::string despro;
  int canpro;
  std::string fecpro;
  std::string catego;
  float cospro;

public:

  Producto();
    Producto(std::string nompro, std::string despro, int canpro, std::string fecpro, std::string catego, float cospro)
        : nompro(nompro), despro(despro), canpro(canpro), fecpro(fecpro), catego(catego), cospro(cospro)  {};

//Getters
  void set_nompro(std::string nom){
  nompro = nom;
}
void set_despro(std::string des){
  despro = des;
}
void set_canpro(int can){
  canpro = can;
}

void set_fecpro(std::string fec){
  fecpro = fec;
}

void set_catpro(std::string catego){
  catego = catego;
}
void set_cospro(float costo){
  cospro = costo;
}


//Getters
std::string get_nompro(){
  return nompro;
}
std::string get_despro(){
  return despro;
}

int get_canpro(){
  return canpro;
}

float get_cospro(){
  return cospro;
}

std::string get_fecpro(){
  return fecpro;
}

std::string get_catego(){
  return catego;
}

};

//Setters

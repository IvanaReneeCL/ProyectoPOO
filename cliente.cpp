#include "cliente.h"
#include <string>

cliente::cliente(string Nombre, string Direccion, string RFC){
    this->Nombre=Nombre;
    this->Direccion=Direccion;
    this->RFC=RFC;
}

void cliente::setNombre(string Nombre){
    this->Nombre=Nombre;
}

string cliente::getNombre(){
    return this->Nombre;
}

void cliente::setDireccion(string Direccion){
    this->Direccion=Direccion;
}

string cliente::getDireccion(){
    return this->Direccion;
}

void cliente::setRFC(strng RFC){
    this->RFC=RFC;
}

string cliente::getRFC(){
    return this->RFC;
}
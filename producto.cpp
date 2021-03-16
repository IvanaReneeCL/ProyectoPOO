#include "producto.h"
#include <string>

producto::producto(int CodigoProducto, string NombreProducto, double PrecioCompra, double PrecioVenta, int Existencia, double Peso, double Tamaño){
    this->CodigoProducto=CodigoProducto;
    this->NombreProducto=NombreProducto;
    this->PrecioCompra=PrecioCompra;
    this->PrecioVenta=PrecioVenta;
    this->Existencia=Existencia;
    this->Peso=Peso;
    this->Tamaño=Tamaño;
}

void producto::setNombreProducto(string NombreProducto){
    this->NombreProducto=NombreProducto;
}

string producto::getNombreProducto(){
    return this->NombreProducto;
}

void producto::setCodigoProducto(int CodigoProducto){
    this->CodigoProducto=CodigoProducto;
}

int producto::getCodigoProducto(){
    return this->CodigoProducto;
}

void producto::setPrecioCompra(double PrecioCompra){
    this->PrecioCompra=PrecioCompra;
}

double producto::getPrecioCompra(){
    return this->PrecioCompra;
}

void producto::setPrecioVenta(double PrecioVenta){
    this->PrecioVenta=PrecioVenta;
}

double producto::getPrecioVenta(){
    return this->PrecioVenta;
}

void producto::setExistencia(int Existencia){
    this->Existencia=Existencia;
}

int producto::getExistencia(){
    return this->Existencia;
}

void producto::setPeso(double Peso){
    this->Peso=Peso;
}

double producto::getPeso(){
    return this->Peso;
}

void producto::setTamaño(double Tamaño){
    this->Tamaño=Tamaño;
}

double producto::getTamaño(){
    return this->Tamaño;
}
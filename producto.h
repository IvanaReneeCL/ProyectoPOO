#include <string>
using namespace std;

class producto
{
private:
    int CodigoProducto;
    string NombreProducto;
    double PrecioCompra;
    double PrecioVenta;
    int Existencia;
    double Peso;
    double Tamaño;

public:
    producto(int CodigoProducto, string NombreProducto, double PrecioCompra, double PrecioVenta, int Existencia, double Peso, double Tamaño);
    int getCodigoProducto();
    string getNombreProducto();
    double getPrecioCompra();
    double getPrecioVenta();
    int getExistencia();
    double getPeso();
    double getTamaño();
    void setCodigoProducto();
    void setNombreProducto();
    void setPrecioCompra();
    void setPrecioVenta();
    void setExistencia();
    void setPeso();
    void setTamaño();

};
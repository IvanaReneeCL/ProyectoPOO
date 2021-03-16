#include <string>
using namespace std;


class cliente
{
    private:
    string Nombre;
    string Direccion;
    string RFC;
    
    public:
    cliente(string Nombre, string Direccion, string RFC);
    string getNombre();
    string getDireccion();
    string getRFC();
    void setNombre(string Nombre);
    void setDireccion(string Direccion);
    void setRFC(string RFC);
    
};
#pragma once
#include <string>
using namespace std;

class Usuario {

private:
    string nombre;
    string contrasena;
    int edad;
public:
    Usuario(const std::string& nombre, const std::string& contrasena, int edad);
    ~Usuario();
    string getNombre() const;
    void setNombre(const string& nombre);
    string getContrasena() const;
    void setContrasena(const string& contrasena);
    int getEdad() const;
    void setEdad(int edad);
    void imprimirDatos() const;

};
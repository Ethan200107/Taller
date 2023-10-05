#include "Usuario.h"
#include <iostream>
using namespace std;

Usuario::Usuario(const string& nombre, const string& contrasena, int edad)
    : nombre(nombre), contrasena(contrasena), edad(edad) {};

Usuario::~Usuario() {};

string Usuario::getNombre() const {
    return nombre;
};

void Usuario::setNombre(const string& nombre) {
    this->nombre = nombre;
}

string Usuario::getContrasena() const {
    return contrasena;
};

void Usuario::setContrasena(const string& contrasena) {
    this->contrasena = contrasena;
};

int Usuario::getEdad() const {
    return edad;
};

void Usuario::setEdad(int edad) {
    this->edad = edad;
};

void Usuario::imprimirDatos() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Contraseña: " << contrasena << endl;
    cout << "Edad: " << edad  << endl;
};


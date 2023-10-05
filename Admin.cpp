#include "Admin.h"
#include <iostream>
using namespace std;


Admin::Admin(const string& nombre, const string& contrasena, int edad, const string& correo, bool loge)
    : Usuario(nombre, contrasena, edad), correo(correo), loge(loge) {};

string Admin::getCorreo() const {
    return correo;
};

void Admin::setCorreo(const string& correo) {
    this->correo = correo;
};

bool Admin::estaLoggeado() const {
    return loge;
};

void Admin::setLog(bool loge) {
    this->loge = loge;
};

void Admin::imprimirDatos() const {
    Usuario::imprimirDatos();
    cout << "Correo: " << correo << endl;
    cout << "Loggeado: " << (loge ? "true" : "false") << endl;
};

// Taller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Usuario.h"
#include "UsuarioNino.h"
#include "Admin.h"
#include "UsuarioNorm.h"
#include "Sorftwer.h"
#include <sstream>
using namespace std;
vector<Usuario*> lecturaUsuarios();
vector<Sorftwer*> lecturaSoftwares();
int main()
{
    vector <Usuario*>usuarios;
    usuarios = lecturaUsuarios();

	vector <Sorftwer*> softwares;
	softwares = lecturaSoftwares();


};
vector<Sorftwer*> lecturaSoftwares() {
    ifstream archivo("archivoUsuarios.txt");
    vector < Sorftwer* > sorftwer;
    if (!archivo)
    {
        cout << "Error al abrir el archivo." << endl;
        return sorftwer;
    }



    string tipo, nombre, contrasena, correo, log_str, linea;

    while (getline(archivo, linea))
    {
        istringstream iss(linea);
        string token;
        int i = 0;
        while (getline(iss, token, ' ')) {
			
        }
    }

}
vector<Usuario*> lecturaUsuarios() {
    ifstream archivo("archivoUsuarios.txt");
    vector < Usuario* >usuarios;
    if (!archivo)
    {
        cout << "Error al abrir el archivo." << endl;
        return usuarios;
    }



    string tipo, nombre, contrasena, correo, log_str, linea;

    while (getline(archivo, linea))
    {
        istringstream iss(linea);
        string token;
        string vec[5];
        int i = 0;
        while (getline(iss, token, ' ')) {
            vec[i] = token;
            i++;
        }
        nombre = vec[0];
        contrasena = vec[1];
        int edad = stoi(vec[2]);
        if (vec[4] != "") {
            correo = vec[3];
            bool logeado = (vec[4] == "true");
            Usuario* admin = new Admin(nombre, contrasena, edad, correo, logeado);
            usuarios.push_back(admin);
        }
        else if (vec[3] != "") {
            correo = vec[3];
            Usuario* normal = new UsuarioNorm(nombre, contrasena, edad, correo);
            usuarios.push_back(normal);
        }
        else if (vec[2] != "") {
            Usuario* niño = new UsuarioNino(nombre, contrasena, edad);
            usuarios.push_back(niño);
        }

    }


    archivo.close();
    return usuarios;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

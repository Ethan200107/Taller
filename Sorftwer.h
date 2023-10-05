#pragma once
#include <string>
#include <vector>
#include "Usuario.h"
using namespace std;
class Sorftwer
{
private:
	string name;
	string developer;
	int cal_edad;
	vector <Usuario*> listUsuarios;
	int precio;
public:
	Sorftwer(string name,string developer, int edad,int precio);
	~Sorftwer();
	void setName(string);
	void setDeveloper(string);
	string getName();
	string getDeveloper();
	void addUsuario(Usuario*);
	void removeUsuario(Usuario*);
	void print();
	void printAll();
	int getPrecio();
	void setPrecio(int);
	void setCal_edad(int);
	int getCal_edad();

};


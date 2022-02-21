#include <iostream>
using namespace std;
class Persona{
	// atributos 
	protected : string nombres,apellidos,direccion,fn;
				int telefono; 
	// Metodos
	
	protected : 
	// Constructor
	Persona(string nom,string ape,string dir,string f,int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fn  = f;
		telefono = tel;
	}

// Metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct Nodo
{
	map<string, vector<Nodo> > adyacentes;
	string nombre, area;
	string recursos;
	string recursosWeb[3] = {"HTRML", "CSS", "JS"};
	string recursosMovil[3] = {"Android", "IOS", "Windows"};
	string recursosVideojuegos[3] = {"Windows", "Linux", "Mac"};
} Lenguaje;

void agregar(Lenguaje *nodoBase, vector<Lenguaje> nodosAdyacentes, string nodoPadre);
Lenguaje inicializar(string nombreLenguaje, string area);

int main(int argc, char const *argv[])
{
	Lenguaje miNodo;
	vector<Lenguaje> nodos;
	Lenguaje primero = inicializar("JavaScript", "Web");
	Lenguaje segundo = inicializar("CSharp", "Videojuegos");
	Lenguaje tercero = inicializar("Java", "Movil");
	Lenguaje cuarto = inicializar("Cuarto", "Otro");
	nodos.push_back(primero);
//	vector<Lenguaje> nodos{primero, segundo, tercero};
//	agregar(&miNodo, nodos, "nodoPadre");
	return 0;
}

// Aca deberia deberia de ir una validacion para que previo a la comparacion de string se quiten los espacios en blanco y se conviertan a minusculas/mayusculas para comparar.

/// @brief De uso interno, permite "quemar" los nodos que posteriomente seran recorridos para seleccionar uno.
/// @nombreLenguaje  Nombre del lenguaje.
/// @area Area a la que pertenece el lenguaje.
/// @return Un nodo con sus atributos inicializados. 
Lenguaje inicializar(string nombreLenguaje, string area)
{
	Lenguaje nuevoNodo;
	nuevoNodo.area = area;
	nuevoNodo.nombre = nombreLenguaje;
	
	if (nuevoNodo.area == "Web")
	{
		// nuevoNodo.recursos = nuevoNodo.recursosWeb;
	}
	else if (area == "Movil")
	{
		// nuevoNodo.recursos = nuevoNodo.recursosMovil;
		cout << "Aqui deberia dejarse recursos movil" << endl;
	}
	else if (area == "Videojuegos")
	{
		// nuevoNodo.recursos = nuevoNodo.recursosVideojuegos;
		cout << "Aqui deberia dejarse recursos de Videojuegos" << endl;
	}
	else
	{
		// string foo[3] = {"Si", "NO", "Porque"};
		// nuevoNodo.recursos = foo;
		cout << "else" << endl;
	}
	return nuevoNodo;
}

/// @brief Agrega los nodos adyacentes al nodo base, ademas los muestra
/// @param nodoBase
/// @param nodosAdyacentes
/// @param nodoPadre

//void agregar(Lenguaje *nodoBase, vector<Lenguaje> nodosAdyacentes, string nodoPadre)
//{
//	nodoBase->adyacentes.insert({nodoPadre, nodosAdyacentes});
//	cout << "------- Nodo agregado con exito -------" << endl;
//	for (auto it = nodoBase->adyacentes.begin(); it != nodoBase->adyacentes.end(); ++it)
//	{
//		cout << "Key: " << it->first << endl;
//		for (int i = 0; i < it->second.size(); i++)
//		{
//			cout << "Value: " << it->second[i].nombre << endl;
//		}
//	}
//}


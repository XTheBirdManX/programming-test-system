#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct Nodo
{
	map<string, vector<Nodo> > adyacentes;
	string nombre, area;
	string recursos[3];
} Lenguaje;

void agregar(Lenguaje *nodoBase, vector<Lenguaje> nodosAdyacentes, string nodoPadre);
Lenguaje inicializar(string nombreLenguaje, string area);

// Aca deberia deberia de ir una validacion para que previo a la comparacion de string se quiten los espacios en blanco y se conviertan a minusculas/mayusculas para comparar.

Lenguaje inicializar(string nombreLenguaje, string area)
{
	string recursosWeb[3] = {"HTRML", "CSS", "JS"};
	string recursosMovil[3] = {"Android", "IOS", "Windows"};
	string recursosVideojuegos[3] = {"Windows", "Linux", "Mac"};

	Lenguaje nuevoNodo;
	nuevoNodo.area = area;
	nuevoNodo.nombre = nombreLenguaje;

	if (nuevoNodo.area == "Web")
	{

		for (int i = 0; i < 3; i++)
		{
			nuevoNodo.recursos[i] = recursosWeb[i];
		}
	}
	else if (nuevoNodo.area == "Movil")
	{
		for (int i = 0; i < 3; i++)
		{
			nuevoNodo.recursos[i] = recursosMovil[i];
		}
	}
	else if (nuevoNodo.area == "Videojuegos")
	{
		for (int i = 0; i < 3; i++)
		{
			nuevoNodo.recursos[i] = recursosVideojuegos[i];
		}
	}

	else
	{
		cout << "No se encontro el area" << endl;
		
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


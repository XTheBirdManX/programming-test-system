#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct Nodo
{
	string nombre, area;
	string recursos[3];
	map<string, vector<string> > adyacentes;
} Lenguaje;

// Aca deberia deberia de ir una validacion para que previo a la comparacion de string se quiten los espacios en blanco y se conviertan a minusculas/mayusculas para comparar.
//void pasarMayusculas (char cad[]){
//			int f=0;
//			while(cad[f]!='\0'){
//				if(cad[f]>='a' and cad[f]<'z'){
//					cad[f] = cad[f] - ('a'-'A')
//				}
//				f++;
//			}
//	}
//	pasarMayusculas(area);

Lenguaje inicializar(string nombreLenguaje, string area)
{
	string recursosWeb[3] = {"freeCodeCamp.org", "Youtube: freeCodeCamp Espa�ol", "Visita developer.mozilla.org"};
	string recursosMovil[3] = {"Para desarrollo Android: learndigital.withgoogle.com", "Para desarrollo IOS: developer.apple.com", "Para desarrollo Windows: learn.microsoft.com en sus cursos de desarrollo para W10"};
	string recursosVideojuegos[3] = {"Coursera.org ofrece cursos gratuitos", "domestika.org ofrece cursos de paga accesibles", "Udemy.com ofrece cursos especializados a un precio m�s elevado"};

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
//		cout << "" << it->first << endl;
//		for (int i = 0; i < it->second.size(); i++)
//		{
//			cout << "" << it->second[i].nombre << endl;
//		}
//	}
//}

/*
void agregar(Lenguaje *nodoBase, vector<Lenguaje> nodosAdyacentes, string nodoPadre)
{
	for (int i = 0; i < nodosAdyacentes.size(); i++)
	{
		nodoBase->adyacentes[nodoPadre].push_back(nodosAdyacentes[i]);
	}

	for (int i = 0; i < nodoBase->adyacentes[nodoPadre].size(); i++)
	{
		cout << nodoBase->adyacentes[nodoPadre][i].nombre << endl;
	}
}
*/

void agregar(Lenguaje *base, vector<string> nodosAdyacentes){
	for (int i = 0; i < nodosAdyacentes.size(); i++)
	{
		base->adyacentes[base->nombre].push_back(nodosAdyacentes[i]);
		cout << "Nodo agregado con exito" << endl;
		cout << "Nodo padre: " << base->nombre << endl;
		cout << "Nodo hijo: " << nodosAdyacentes[i] << endl;
	}
}
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct Nodo
{
	string nombre, area;
	string recursos[3];
	map<string, vector<string> > adyacentes;
} Lenguaje;

// Aca deberia deberia de ir una validacion para que previo a la comparacion de string se quiten los espacios en blanco y se conviertan a minusculas/mayusculas para comparar.
// void pasarMayusculas (char cad[]){
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

void agregar(Lenguaje *base, vector<string> nodosAdyacentes)
{

	for (int i = 0; i < nodosAdyacentes.size(); i++)
	{
		base->adyacentes[base->nombre].push_back(nodosAdyacentes[i]);
	}

}

int indexFinal(vector<string> nodosAdyacentes)
{
	return nodosAdyacentes.size() - 1;
}

vector<string> amplitud(vector<Lenguaje> *grafo, string inicio)
{

	vector<string> visitados;
	queue<string> cola;
	vector<string> adyacentesRecorridos;

	visitados.push_back(inicio);
	cola.push(inicio);

	while (!cola.empty())
	{
		string salida = cola.front();
		adyacentesRecorridos.push_back(salida);
		cola.pop();

		for (int i = 0; i < grafo->size(); i++)
		{
			if (grafo->at(i).nombre == salida)
			{
				vector<string> adyacentes = grafo->at(i).adyacentes[salida];
				for (size_t i = 0; i < adyacentes.size(); i++)
				{
					string noVisitado = adyacentes[i];
					if (find(visitados.begin(), visitados.end(), noVisitado) == visitados.end())
					{
						visitados.push_back(noVisitado);
						cola.push(noVisitado);
					}
				}
			}
		}
	}

	return adyacentesRecorridos;
}

//Lenguaje amplitud2(vector<Lenguaje> *grafo, Lenguaje inicio, string area)
//{
//
//	vector<Lenguaje> visitados;
//	queue<Lenguaje> cola;
//	vector<string> adyacentesRecorridos;
//	Lenguaje miNodo;
//
//	visitados.push_back(inicio);
//	cola.push(inicio);
//
//	while (!cola.empty())
//	{
//		Lenguaje salida = cola.front();
//		adyacentesRecorridos.push_back(salida.nombre);
//		cola.pop();
//
//		for (int i = 0; i < grafo->size(); i++)
//		{
//			if (grafo->at(i).nombre == salida.nombre)
//			{
//				vector<string> adyacentes = grafo->at(i).adyacentes[salida.nombre];
//				for (size_t i = 0; i < adyacentes.size(); i++)
//				{
//					string noVisitado = adyacentes[i];
//					if (find(visitados.begin(), visitados.end(), noVisitado) == visitados.end())
//					{
//						string val = grafo->at(i).area;
//						if (val == area)
//						{
//							miNodo = grafo->at(i);
//							return miNodo;
//						}
//						// string a = grafo->at(i).adyacentes[salida.nombre][i];
//						visitados.push_back(grafo->at(i));
//						cola.push(grafo->at(i));
//					}
//				}
//			}
//		}
//	}
//
//	// return adyacentesRecorridos;
//}

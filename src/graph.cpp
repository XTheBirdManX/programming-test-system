#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct Nodo{
	map<string,vector<Nodo>> adyacentes;
	string nombre, area;
	string recurso[];
}Lenguaje;
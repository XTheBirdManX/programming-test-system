#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct Nodo{
	map<string,vector<Nodo>> adyacentes;
	string nombre, area;
	string recurso[3];
}Lenguaje;

void add(Lenguaje *nodoBase,vector<Lenguaje> nodosAdyacentes,string nodoPadre){
  nodoBase->adyacentes.insert({nodoPadre,nodosAdyacentes}); 
	cout << "Nodo agregado" << endl;
	for (auto it = nodoBase->adyacentes.begin(); it != nodoBase->adyacentes.end(); ++it){
		cout << it->first << endl;
		for (int i = 0; i < it->second.size(); i++){
			cout << it->second[i].nombre << endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	Lenguaje miNodo,primero,segundo,tercero;
	vector<Lenguaje> nodos = {primero,segundo,tercero};
	add(&miNodo,nodos,"nodoPadre");
	return 0;
}
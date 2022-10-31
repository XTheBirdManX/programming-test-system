#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<string> busqueda_amplitud(const Grafo &grafo, const string &origen="A")
{
    vector<string> visitados;
    queue<string> cola;
    vector<string> recorrido;

    visitados.push_back(origen);
    cola.push(origen);

    while (!cola.empty())
    {
        auto const &vertice = cola.front();
        recorrido.push_back(vertice);
        cola.pop();

        auto const &adyacentes = grafo.at(vertice);
        for (size_t i = 0; i < adyacentes.size(); i++) {
            auto const &ady = adyacentes[i];
            if (find(visitados.begin(), visitados.end(), ady) == visitados.end()) {
                visitados.push_back(ady);
                cola.push(ady);
            }
        }
    }

    return recorrido;  
}

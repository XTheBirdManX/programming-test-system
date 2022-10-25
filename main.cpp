#include <iostream>
#include <string>
#include "grafo.h"

using namespace std;

bool esValida(string); // Implentar las validaciones

int main(int argc, char const *argv[])
{

	string nivel;
	string sector;

	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "		? Bienvenido/a a tu mix de lenguajes de programcion ? " << endl;
	cout << "Tenemos unas preguntas para ti, esto con la finalidad de tener una mejor seleccion para ti ??" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	cout << "\n01.Que nivel de conocimiento tienes en el mundo de la programacion?" << endl;
	cout << "\na) Noob\n"
			 << "\nb) Principiante\n"
			 << "\nc) Intermedio\n"
			 << "\nd) Avanzado\n"
			 << "\ne) Pro\n"
			 << endl;
	cin >> nivel;

	system("cls");
	cout << "\n02.En que sector te gustaria trabajar?" << endl;

	cout << "\na) Web\n"
			 << "\nb) Movil\n"
			 << "\nc) Videojuegos\n"
			 << endl;

    //el otro metodo espera un string en lugar del un unico caracter, por eso actua extrano
    cin >> sector;
    
    system("cls");
	
	vector<Lenguaje> nodos;
	Lenguaje primero = inicializar("JavaScript", "Web");
	Lenguaje segundo = inicializar("CSharp", "Videojuegos");
	 Lenguaje tercero = inicializar("Java", "Movil");
	Lenguaje cuarto = inicializar("Cuarto", "Otro");
	nodos.push_back(primero);
	nodos.push_back(segundo);
	nodos.push_back(tercero);
	nodos.push_back(cuarto);

     //esto es para imprimir todos los valores del arreglo recursos
	// for (int i=0; i < nodos.size(); i++){
	// 	for (int j=0; j < 3; j++){
	// 		cout << nodos[i].recursos[j] << endl;
	// 	}
	// }

    //obtener el tamano del vector
	cout << nodos.size() << endl;
    //obtener el nombre del primer elemento en el vector
	cout << nodos.begin()->nombre << endl;
    //obtener el nombre del ultimo elemento en el vector    
	int last = nodos.size() - 1;
	cout << nodos[last].nombre << endl;

	return 0;
}

/// @brief Valida la entrada de la variable "area" del usuario sea valida.
/// @param entrada Entrada del usuario capturada mediante consola.
/// @return Un boolean que expresa si es o no valida.
bool esValida(string x)
//cambia el nombre de x -> entrada, es mas intuitivo ese nombre de variable. Despues de hacerlo borras este comentario.
{
	int i = 0;
	char c;
	for (i; i < x.size(); i++)
	{
		c = x[i];
		if (isalpha(c) == false)
			if (isspace(c) == false)
			{
				{
					cout << "El caracter: " << c << " No es valido\n"
							 << "ingrese solo letras" << endl;
					return false;
				}
			}
	}
}


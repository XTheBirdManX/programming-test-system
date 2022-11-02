#include <iostream>
#include <string>
// #include "algorit.h"
#include "grafo.h"

using namespace std;

bool esValida(string); // Implentar las validaciones
string obtenerNivel();
string obtenerSector();

int main(int argc, char const *argv[])
{

	string nivel;
	string sector;

	nivel = obtenerNivel();
	sector = obtenerSector();

	system("cls");

	Lenguaje cero = inicializar("Scratch", "");
	vector<string> adyacentesCero;
	adyacentesCero.push_back("Python");
	adyacentesCero.push_back("HTML");
	adyacentesCero.push_back("JAVA");

	Lenguaje uno = inicializar("Python", "Videojuegos");
	vector<string> adyacentesUno;
	adyacentesUno.push_back("Scratch");
	adyacentesUno.push_back("C#");

	Lenguaje dos = inicializar("HTML", "Web");
	vector<string> adyacentesDos;
	adyacentesDos.push_back("Scratch");
	adyacentesDos.push_back("Javascript");

	Lenguaje tres = inicializar("Java", "Videojuegos");
	vector<string> adyacentesTres;
	adyacentesTres.push_back("Scratch");
	adyacentesTres.push_back("Kotlin");

	agregar(&cero, adyacentesCero);
	agregar(&uno, adyacentesUno);
	agregar(&dos, adyacentesDos);
	agregar(&tres, adyacentesTres);

	// esto es para imprimir todos los valores del arreglo recursos
	// for (int i=0; i < nodos.size(); i++){
	// 	for (int j=0; j < 3; j++){
	// 		cout << nodos[i].recursos[j] << endl;
	// 	}
	// }

	// obtener el tamano del vector
	// cout << nodos.size() << endl;
	// obtener el nombre del primer elemento en el vector
	// cout << nodos.begin()->nombre << endl;
	// obtener el nombre del ultimo elemento en el vector
	// int last = nodos.size() - 1;
	// cout << nodos[last].nombre << endl;
	// cout << nodos[last].recursos[0] << endl;

	return 0;
}

/// @brief Valida la entrada de la variable "area" del usuario sea valida.
/// @param entrada Entrada del usuario capturada mediante consola.
/// @return Un boolean que expresa si es o no valida.
bool esValida(string x)
// cambia el nombre de x -> entrada, es mas intuitivo ese nombre de variable. Despues de hacerlo borras este comentario.
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

string obtenerNivel()
{
	string nivel;

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
	return nivel;
}

string obtenerSector()
{
	string sector;

	system("cls");
	cout << "\n02.En que sector te gustaria trabajar?" << endl;

	cout << "\na) Web\n"
			 << "\nb) Movil\n"
			 << "\nc) Videojuegos\n"
			 << endl;

	cin >> sector;
	return sector;
}

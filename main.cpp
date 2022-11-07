#include <iostream>
#include <string>
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
	vector<Lenguaje> nodos;

	if (nivel == "a" || nivel == "e")
	{
		if (nivel == "a")
		{
			cout << "Te recomendamos: Scratch, es la manera interactiva de iniciar en el mundo de la programacion sin aprender una sintaxis especial" << endl;
		}
		else if (nivel == "e")
		{
			cout << "Te recomendamos: Malbolge\nO no?... Es imposible que puedas con ello, pero... Intentalo si puedes." << endl;
		}
	}

	else
	{

		system("cls");
		
		sector = obtenerSector();

		// Inicializacion de Lenguajes y sus adyacentes

		Lenguaje cero = inicializar("Scratch", "");
		vector<string> adyacentesCero;
		adyacentesCero.push_back("Python");
		adyacentesCero.push_back("HTML");
		adyacentesCero.push_back("JAVA");

		Lenguaje uno = inicializar("Python", "Videojuegos");
		vector<string> adyacentesUno;
		adyacentesUno.push_back("Scratch");
		adyacentesUno.push_back("C#");

		Lenguaje dos = inicializar("HTML/CSS", "Web");
		vector<string> adyacentesDos;
		adyacentesDos.push_back("Scratch");
		adyacentesDos.push_back("JavaScript");

		Lenguaje tres = inicializar("Java", "Movil");
		vector<string> adyacentesTres;
		adyacentesTres.push_back("Scratch");
		adyacentesTres.push_back("Kotlin");

		Lenguaje cuatro = inicializar("C#", "Videojuegos");
		vector<string> adyacentesCuatro;
		adyacentesCuatro.push_back("Python");
		adyacentesCuatro.push_back("C++");

		Lenguaje cinco = inicializar("JavaScript", "Web");
		vector<string> adyacentesCinco;
		adyacentesCinco.push_back("HTML/CSS");
		adyacentesCinco.push_back("Ruby");
		adyacentesCinco.push_back("PHP");

		Lenguaje seis = inicializar("Kotlin", "Movil");
		vector<string> adyacentesSeis;
		adyacentesSeis.push_back("Java");
		adyacentesSeis.push_back("Swift");

		Lenguaje siete = inicializar("C++", "Videojuegos");
		vector<string> adyacentesSiete;
		adyacentesSiete.push_back("C#");
		adyacentesSiete.push_back("Malbolge");

		Lenguaje ocho = inicializar("Ruby", "Web");
		vector<string> adyacentesOcho;
		adyacentesOcho.push_back("JavaScript");
		adyacentesOcho.push_back("Malbolge");

		Lenguaje nueve = inicializar("PHP", "Web");
		vector<string> adyacentesNueve;
		adyacentesNueve.push_back("JavaScript");
		adyacentesNueve.push_back("Malbolge");

		Lenguaje diez = inicializar("Swift", "Movil");
		vector<string> adyacentesDiez;
		adyacentesDiez.push_back("Kotlin");
		adyacentesDiez.push_back("Malbolge");

		Lenguaje once = inicializar("Malbolge", "");
		vector<string> adyacentesOnce;
		adyacentesOnce.push_back("C++");
		adyacentesOnce.push_back("Ruby");
		adyacentesOnce.push_back("PHP");
		adyacentesOnce.push_back("Swift");

		// Union de Lenguajes y adyacentes como un solo objeto

		agregar(&cero, adyacentesCero);
		agregar(&uno, adyacentesUno);
		agregar(&dos, adyacentesDos);
		agregar(&tres, adyacentesTres);
		agregar(&cuatro, adyacentesCuatro);
		agregar(&cinco, adyacentesCinco);
		agregar(&seis, adyacentesSeis);
		agregar(&siete, adyacentesSiete);
		agregar(&ocho, adyacentesOcho);
		agregar(&nueve, adyacentesNueve);
		agregar(&diez, adyacentesDiez);
		agregar(&once, adyacentesOnce);

		// Insercion de Lenguajes en el vector de nodos

		nodos.push_back(cero);
		nodos.push_back(uno);
		nodos.push_back(dos);
		nodos.push_back(tres);
		nodos.push_back(cuatro);
		nodos.push_back(cinco);
		nodos.push_back(seis);
		nodos.push_back(siete);
		nodos.push_back(ocho);
		nodos.push_back(nueve);
		nodos.push_back(diez);
		nodos.push_back(once);

		 vector<string> vects = amplitud(&nodos, "Scratch");
//		Lenguaje sal = amplitud2(&nodos, nodos.at(0), "Web");
//		cout << "Te recomendamos: " << sal.nombre << endl;
//		cout << "Sector: " << sal.area<< endl;

		// Comprobacion de recorrido correcto
		// for (int i = 0; i < vects.size(); i++)
		// {
		// 	cout << vects[i] << endl;
		// }
	}

	return 0;
}

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

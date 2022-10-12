#include <iostream>
#include <string>

using namespace std;

bool esValida(string); // Implentar las validaciones

int main(int argc, char const *argv[])
{

	string nivel;
	string sector;

	// Inputs
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "		✨ Bienvenido/a a tu mix de lenguajes de programcion ✨ " << endl;
	cout << "Tenemos unas preguntas para ti, esto con la finalidad de tener una mejor seleccion para ti ��" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

	cout << "\n01. ¿Que nivel de conocimiento tienes en el mundo de la programacion?" << endl;
	cout << "\na) Noob\n"
			 << "\nb) Principiante\n"
			 << "\nc) Intermedio\n"
			 << "\nd) Avanzado\n"
			 << "\ne) Pro\n"
			 << endl;
	// getline(cin, nivel);
	cin >> nivel;
	esValida(nivel);

	system("cls");
	system("clear");
	cout << "\n02. ¿En que sector te gustaria trabajar?" << endl;

	cout << "\na) Web\n"
			 << "\nb) Movil\n"
			 << "\nc) Videojuegos\n"
			 << endl;
	// getline(cin, sector);
	cin >> sector;
	esValida(sector);

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
		if (isalpha(c) == false || isspace(c) == true) //si no es letra o es espacio entra a este bloque
				{
					cout << "El caracter: " << c << " No es valido\n"
							 << "ingrese solo letras" << endl;
					return false;
			}
	}
}

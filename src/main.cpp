#include <iostream>
#include <string>

using namespace std;

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
	cin >> nivel;

	system("cls");
	system("clear");
	cout << "\n02. ¿En que sector te gustaria trabajar?" << endl;

	cout << "\na) Web\n"
			 << "\nb) Movil\n"
			 << "\nc) Videojuegos\n"
			 << endl;
	cin >> sector;

	return 0;
}

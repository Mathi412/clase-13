#include <iostream>
#include <fstream>
using namespace std;
int main() {
 // Abre o crea el archivo en modo agregar (ios::app)
 ofstream archivo("personajes.txt", ios::app);
 if (!archivo.is_open()) {
 cout << "Error: No se pudo abrir el archivo." << endl;
 return 1;
 }
 // Se escribe usando el operador << igual que con cout
 archivo << "Guerrero 100 85" << endl;
 archivo << "Mago 70 95" << endl;
 archivo.close(); // Siempre cerrar el archivo al terminar
 cout << "Datos guardados correctamente en personajes.txt" << endl;
 return 0;
}

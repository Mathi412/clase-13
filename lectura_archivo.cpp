#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
 // Abre archivo existente exclusivamente para lectura
 ifstream archivo("personajes.txt");
 if (!archivo.is_open()) {
 cout << "Error: El archivo no existe o no se pudo abrir." << endl;
 return 1;
 }
 string linea;
 cout << "=== Lista de Personajes Guardados ===" << endl;
 // Leer linea por linea hasta el final del archivo (EOF)
 while (getline(archivo, linea)) {
 cout << "- " << linea << endl;
 }
 archivo.close(); // Liberar el recurso del archivo
 return 0;
}

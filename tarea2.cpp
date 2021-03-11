// Programa que almacena un texto digitado por pantalla y
// Despliega en pantalla el texto original y el texto invertido e indica si es palindromo o no.

#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    // Permite tíldes
    setlocale(LC_ALL, "Spanish");

    // Capacidad máxima
    const int MAX = 40;

    // Array que almacenará el texto original
    char texto[MAX];

    // Array que almacena el texto invertido
    char invertido[MAX];

    // Obteniendo texto y almacenándolo
    cout << "Ingrese un texto: ";
    cin.getline(texto, MAX);

    // Obtiene número de caracteres
    int longitud = strlen(texto);

    int i = 0;

    // Recorre cada caracter del texto y lo almacena invertido en otra variable
    while (longitud >= 0)
    {
        invertido[i] = texto[longitud - 1];
        longitud--;
        i++;
    }

    cout << endl;

    cout << invertido << endl;

    return 0;
}

// Recorre cada caracter del texto y lo almacena invertido en otra variable
void recorrerTexto(char texto[], char invertido[])
{
    // Obtiene número de caracteres
    int longitud = strlen(texto);

    int i = 0;

    while (longitud >= 0)
    {
        invertido[i] = texto[longitud - 1];
        longitud--;
        i++;
    }

}

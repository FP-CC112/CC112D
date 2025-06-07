/*
Asignación dinámica de un arreglo de estructuras
*/
#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
};

//Funcion leer Datos
void leerDatos(Estudiante* alumnos, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre: "; cin >> alumnos[i].nombre; // como utilizaria el operador -> aquí?
        cout << "Edad: "; cin >> alumnos[i].edad;
    }
 }

 //Funcion mostrar Datos
void mostrarDatos(Estudiante* alumnos, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << alumnos[i].nombre <<endl; 
        cout << "Edad: " << alumnos[i].edad << endl;
    }
 }


// Modificar los protipos de las funciones por ejemplo
//Estudiante* leerDatos(int n);


int main(){
    int n;
    cout << "Ingrese la cantidad de estudiantes:"; cin >>n;

    Estudiante* alumnos = new Estudiante[n];

    leerDatos(alumnos,n);

    mostrarDatos(alumnos,n);

    return 0; 
}
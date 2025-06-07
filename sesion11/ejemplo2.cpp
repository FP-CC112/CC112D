#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

// insertar nodo AL FINAL DE LA LISTA
void insertarNodo(Nodo* &cabeza, int valor) {
    Nodo* nuevo = new Nodo; //creamos un nodo en el Heap
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

/*
Completar implementando funciones para:
1. insertar nodo al inicio ?
2. mostrar lista
3. Eliminar un nodo por valor
4. Liberar lista

5. Buscar un valor (int)
6. Insertar un nodo en orden

** simular un problema real
Hospital: sistema que maneja la cita de los pacientes
Aeropuerto: Reserva de vuelos
cancelar vuelo?
cancelar cita?
*/

int main(){
    Nodo* lista = nullptr;

    return 0; 
}        
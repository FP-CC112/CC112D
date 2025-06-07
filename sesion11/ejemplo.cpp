#include <iostream>
using namespace std;

struct TPersona {
    char codigo[15];
    char *nombre;
    int dni;
    char direccion[50];
    double sueldo;
};


int main(){
    TPersona p;
    cout << "El tamaño de persona es " << sizeof(p) << " bytes" <<endl;

    return 0; 
}
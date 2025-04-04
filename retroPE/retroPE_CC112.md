# Retroalimentación de la Prueba de Entrada


## Utilizar funciones para resolver ejercicios
Las soluciones presentadas debe hacer uso de funciones para organizar mejor su código y evitar:  

* Código menos estructurado y difícil de leer.
* Dificultad para reutilizar partes del código en otros programas.
* Mayor complejidad en la depuración y mantenimiento.

En la sesión anterior, se abordó el tema de funciones y recursividad, por lo que es fundamental que las implementaciones se realicen utilizando funciones para mejorar la modularidad, la reutilización del código y la claridad en la resolución de problemas.


## Ejemplos de desarrollo (por mejorar)
* Errores básicos de síntaxis
* Código no legible, desordenado, sin intentacion
* Uso de caracteres especiales (tildes, ñ).

### Pregunta 1

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"introduce 3 numeros enteros: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
    if(a<=b & b<=c){
        cout<<c<<" es el mayor"<<endl;
        cout<<a<<" es el menor";
    }else{
        if(b<=c & c<=a){
        cout<<a<<" es el mayor"<<endl;
        cout<<b<<" es el menor";
        }else{
        if(c<=a & a<=b){
        cout<<b<<" es el mayor"<<endl;
        cout<<c<<" es el menor";
        }else{
         if (b<=a & a<=c){
        cout<<c<<" es el mayor"<<endl;
        cout<<b<<" es el menor";
         }else{
        if (a<=c & c<=b){
        cout<<b<<" es el mayor"<<endl;
        cout<<a<<" es el menor";
        }else{
        if(c<=b & b<=a){
        cout<<a<<" es el mayor"<<endl;
        cout<<c<<" es el menor";}else{
            if(a==b & b==c){
            cout<<"los nÃºmeros son iguales";
    }
        }
        
        }
        
    }}}} 
    
        
    return 0;
}
```

### Pregunta 2
```cpp
#include <iostream>
using namespace std;
int main()
{   int n,m;

    
    do{
        cout<<"ingresa un nÃºmero entero"<<endl;
        cin>>n;
        if (n%2==0){
            m= n/2;
            cout<<m<<endl;
        }else{if(n!=1){
            m= (3*n)+1;
            cout<<m<<endl;}
            
        }
    }while(n=!1);
    cout<<"finalizo la ejecuciÃ³n";
     return 0;
    
}
```

### Pregunta 3

```cpp
#include<iostream>
using namespace std;

int main(){

    int matriz1[2][2];
    int matriz2[2][2];
    int matriz3[2][2];

    cout<<"Rellene la primera matriz 2x2"<<endl;

    for (int i= 0; i <2;i++)
    {
        for (int j= 0; j < 2; j ++)
        {
            cout<<"Digite un numero:" <<endl;

        cin>>matriz1[i][j];
        }
        
    }
      cout<<"Rellene la segunda matriz 2x2"<<endl;

    for (int i= 0; i <2;i++)
    {
        for (int j= 0; j < 2; j ++)
        {
            cout<<"Digite un numero:" <<endl;

        cin>>matriz2[i][j];
        }
        
    }
   
   //multiplicar matrices

    matriz3[1][1]=matriz1[1][1]*matriz2[1][1]+matriz1[1][2]*matriz2[2][1];
    matriz3[1][2]=matriz2[1][2]*matriz1 [1][1]+matriz1[1][2]*matriz2[2][2];
    matriz3[2][1]=matriz1[2][1]*matriz2[1][1]+matriz1[2][2]*matriz2[2][1];
    matriz3[2][2]=matriz1[2][1]*matriz2[1][2]+matriz1[2][2]*matriz2[2][2];
    
   cout<<"La matriz resultante de la multiplicacion es:"<<endl;

       for (int i= 0; i <2;i++)
    {
        for (int j= 0; j < 2; j ++)
        {
            cout<<matriz3[i][j];
        }
        cout<<endl;
    }

    return 0;
}
```

### Pregunta 4
```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
using  namespace std;
 int main() { 
 int a,b,c,d;
 
 a=rand()%(100-1000);
cout<<"1. Consultar saldo"<<endl;
cout<<"2. Depositar dinero"<<endl;
cout<<"3. Retirar dinero"<<endl;
cout<<"4. Salir"<<endl;
cout<<"Ingrese la opcion deseada"<<endl;
cin>>b;



switch (b){
 case 1:
 	cout<<"Su saldo es: "<<a;
 	break;
 case 2:
 	cout<<"Ingrese el monto del deposito"<<endl;
 	cin>>c;
 	a=a+c;
 	break;
 case 3:
 	cout<<"Ingrese el monto a retirar"<<endl;
	 a=a-d;
	break;
 case 4: 
 	cout<<"Saliendo"<<endl;
 	break;
}}
```

## Sobre el formato de entrega de las Evaluaciones Parcial, Final y Sustitutorio.
1. Adjuntar un archivo pdf con sus datos personales y la captura de salida de sus programas

2. Adjuntar sus códigos (con extensión .cpp)


#include <iostream>
#include <vector>

//#include <C:\Users\javier.morales\Desktop\javier\unahur\algoritmos\ejercicios\EjerciciosEnCPPuno\carga_matrices.cpp>
#include <F:\UNAHUR - ALGORITMOS\EjerciciosEnCPPuno\carga_matrices.cpp>

using namespace std;

bool es_matriz_identidad(int cant, matriz matriz){
    bool diagonal = true;
    bool elementos = true;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            if(i == j && matriz[i][j] != 1){
                diagonal =  false;
            }else if( i != j && matriz[i][j] != 0){
                elementos = false;
            }
        }
        cout << endl;
    }
    return (diagonal && elementos);
}




int main(){
    int cantidad = ingresar_tamano();

    matriz matriz;
    vector <int> vector_suma;
    matriz[cantidad][cantidad];
    ingresar_datos(matriz, cantidad);

    if(es_matriz_identidad(cantidad, matriz)){
        cout <<"Es matriz identidad." << endl;
    }else{
        cout <<"No es matriz identidad." << endl;
    }
    
    return 0;
}
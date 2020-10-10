#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void bubbleSort(int *arreglo, int n){
    int i, j, aux;
    for(i = 0; i<n; i++){
        for(j = 0; j<n-1; j++){
            if(arreglo[j] > arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }
}
void insertionSort(int *arreglo, int n){
    int i, posicion, aux;
    for(i = 0; i<n; i++){
        posicion = i;
        aux = arreglo[i];
        while(posicion>0 && arreglo[posicion-1]<aux){
            arreglo[posicion] = arreglo[posicion-1];
            posicion--;
        }
        arreglo[posicion] = aux;
    }
}
void mostrarArreglo(int *arreglo, int n){
    int i;
    for(i = 0; i<n; i++){
        printf("%i ", arreglo[i]);
    }
}

int main(){
    int arreglo[10] = {10, 1, 3, 7, 2, 50, 4, 3, 200, 5};
    
    // Método Burbuja
    //bubbleSort(arreglo, 10);
    insertionSort(arreglo, 10);
    mostrarArreglo(arreglo, 10);

    return 0;
}
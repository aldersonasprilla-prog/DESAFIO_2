#include <iostream>
using namespace std;

int memoriaTotal = 0;
int iteraciones = 0;

void sumarMemoria(int bytes){ memoriaTotal += bytes; }
void contarIteracion(){ iteraciones++; }

void mostrarMetricas(){
    cout << "\n--- METRICAS ---\n";
    cout << "Memoria: " << memoriaTotal << " bytes\n";
    cout << "Iteraciones: " << iteraciones << endl;
}

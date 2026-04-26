#include "Archivo.h"
#include "Memoria.h"
#include <fstream>

void leerCSV(string nombre, Equipo*  equipos){
    ifstream f(nombre);
    string linea;
    int i=0;

    while(getline(f,linea) && i<48){
        equipos[i].crear(linea,i+1);
        i++;
        contarIteracion();
    }
}

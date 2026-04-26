#include "Partido.h"
#include <iostream>
#include <cstdlib>
using namespace std;

float calc(float GF, float GC){
    return 1.35*(0.6*GF + 0.4*GC);
}

void Partido::configurar(Equipo* a, Equipo* b){
    e1=a; e2=b;
}

void Partido::simular(){
    g1 = rand()%((int)calc(e1->GF+1,e2->GC+1)+2);
    g2 = rand()%((int)calc(e2->GF+1,e1->GC+1)+2);

    e1->GF+=g1; e1->GC+=g2;
    e2->GF+=g2; e2->GC+=g1;

    if(g1>g2) e1->puntos+=3;
    else if(g2>g1) e2->puntos+=3;
    else { e1->puntos++; e2->puntos++; }
}

Equipo* Partido::ganador(){
    if(g1>g2) return e1;
    if(g2>g1) return e2;
    return (rand()%2)?e1:e2;
}

void Partido::mostrar(){
    cout<<e1->nombre<<" "<<g1<<" - "<<g2<<" "<<e2->nombre<<endl;
}

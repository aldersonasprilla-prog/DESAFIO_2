#include "Grupo.h"
#include "Partido.h"
#include <iostream>
using namespace std;

void Grupo::init(char l){ letra=l; }

void Grupo::agregar(int i,Equipo* e){ equipos[i]=e; }

void Grupo::simular(){
    cout<<"\nGRUPO "<<letra<<endl;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            Partido p;
            p.configurar(equipos[i],equipos[j]);
            p.simular();
            p.mostrar();
        }
    }
}

void Grupo::ordenar(){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(equipos[j]->puntos > equipos[i]->puntos){
                Equipo* t = equipos[i];
                equipos[i]=equipos[j];
                equipos[j]=t;
            }
        }
    }
}

void Grupo::mostrarTabla(){
    ordenar();
    cout<<"Tabla Grupo "<<letra<<endl;
    for(int i=0;i<4;i++){
        cout<<equipos[i]->nombre<<" Pts:"<<equipos[i]->puntos<<endl;
    }
}

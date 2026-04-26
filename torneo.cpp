#include "Torneo.h"
#include "Archivo.h"
#include "Memoria.h"
#include <iostream>
using namespace std;

void Torneo::cargar(){
    equipos = new Equipo[48];
    leerCSV("C:/Users/Usuario/Documents/DESAFIO_2/equipos.csv", equipos);
}

void Torneo::crearBombos(){

    // ordenar por ranking
    for(int i=0;i<48;i++){
        for(int j=i+1;j<48;j++){
            if(equipos[j].ranking < equipos[i].ranking){
                Equipo t= equipos[i];
                equipos[i]=equipos[j];
                equipos[j]=t;
            }
        }
    }

    int k=0;
    for(int i=0;i<4;i++){
        bombos[i]= new Equipo*[12];
        for(int j=0;j<12;j++){
            bombos[i][j]= &equipos[k++];
        }
    }

    cout<<"\n--- BOMBOS ---\n";
    for(int i=0;i<4;i++){
        cout<<"Bombo "<<i+1<<endl;
        for(int j=0;j<12;j++){
            cout<<bombos[i][j]->nombre<<endl;
        }
    }
}

void Torneo::crearGrupos(){

    char letra='A';

    for(int i=0;i<12;i++)
        grupos[i].init(letra++);

    for(int b=0;b<4;b++){
        for(int g=0;g<12;g++){
            int r = rand()%12;
            grupos[g].agregar(b,bombos[b][r]);
        }
    }

    cout<<"\n--- GRUPOS ---\n";
    for(int i=0;i<12;i++){
        cout<<"Grupo "<<grupos[i].letra<<endl;
        for(int j=0;j<4;j++){
            cout<<grupos[i].equipos[j]->nombre<<endl;
        }
    }
}

void Torneo::simular(){

    for(int i=0;i<12;i++){
        grupos[i].simular();
        grupos[i].mostrarTabla();
    }
}

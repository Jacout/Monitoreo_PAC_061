#include "Procesos.h"
#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

vector<Proceso> obtenerProcesos(){
    
    vector<Proceso> listaProcesos;

    FILE* pipe = popen("tasklist /FO CSV /NH", "r");

    if (!pipe) {
        throw runtime_error("Error al obtener procesos del sistema.");
        //aqui agregar un manejo de logs
    }

    char buffer[512];

    while(fgets(buffer, sizeof(buffer), pipe))
    {
        string linea(buffer);
        stringstream ss(linea);
        string campo;

        vector<string> datos;

        while(getline(ss, campo, ',')){
            if(campo.front() == '"') campo.erase(0, 1);
            if(campo.back() == '"') campo.pop_back();
            datos.push_back(campo);
        }

        if(datos.size() >= 5){
            Proceso p;
            p.nombre = datos[0];
            p.pid = stoi(datos[1]);
            p.memoria = datos[4];

            listaProcesos.push_back(p);
        }
    }

    pclose(pipe);
    return listaProcesos;

}
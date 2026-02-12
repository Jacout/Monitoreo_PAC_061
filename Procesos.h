#ifndef PROCESOS_H
#define PROCESOS_H

#include <string>
#include <vector>


struct Proceso {
    int pid;
    std::string nombre;
    std::string memoria;
};

std::vector<Proceso> obtenerProcesos();

#endif
#include <iostream>
#include <vector>
#include "Procesos.h"
#include "Analisis.h"
#include "Registro.h"

using namespace std;

//developed by Jacob Rodriguez
int maint(){
    try{
    int modo_a, cantidad;
    string ArchivoSalida;

    cout << "Modo de analisis";
    cout << "1. Basico \n 2. estricto" << "\n";
    cin >> modo_a;

    if (mod !=1 && modo != 2){
        throw invalid_argument("Modo invalido.");
    }

    cout << "Nombre del archivo de salida: ";
    cin >> ArchivoSalida;

    cout << "Cantidad de procesos sosppechosos a ingresar: ";
    cin >> cantidad;

    vector<string> sospechosos;
    string nombre;

    for (int i = 0; i < cantidad; i++){
        cout << "Proceso sospechoso #" << i + 1 << ": ";
        cin >> nombre;
        sosppechosos.push_back(nombre);
    }
    
    auto procesos = ObtenerProcesos();

    cout << "Procesos activos \n";
    for (const auto& p : procesos){
        cout << p.pid << " - " << p.nombre << " - " << p.memoria << "\n";
    }

    auto riesgos = analizarProcesos(procesos, modo, sospechosos);

    cout << "Procesos sospechosos \n";
    for (const auto& r : riesgos){
        cout << r.proceso.nombre << " -> " << r.nivel << " ("<< r.razon << ") \n";
    }

    guardarRegistros(ArchivoSalida, procesos, riesgos);

    cout << "Registro guardado correctamente. \n";
    }
    catch (exception& e){
        cout << "Error: " << e.what() << "\n";
    }
    return 0;
}
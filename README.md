# Proyecto: Monitor de Procesos en C++
## Descripción general
Este proyecto implementa un monitor real de procesos del sistema en C++. El programa
obtiene la lista de procesos activos, analiza cuáles podrían representar un riesgo y
registra los resultados en un archivo. El proyecto está dividido en módulos para la
obtención, análisis y registro de información. Basando en la información que arroja
el sistema y un ardua investigación.
## Integrantes del equipo
- Jacob Misael Rodriguez Morales — Jacout
- Matthew Rosas Lailson — SuperCapish
- Cruz Eduardo Patiño Zuñiga — PapiCruz
- Jahir Guadalupe Salazar Esparza — 
## Instrucciones de compilación y ejecución
### Requisitos
- Sistema operativo: [Windows/Linux/macOS]
- Compilador: g++, clang o MSVC
- Librerías utilizadas:
### Compilación
```bash, command prompt
g++ main.cpp Procesos.cpp Analisis.cpp Registro.cpp -o monitor
```
Ejecución
```
./monitor
```
###Entrada esperada
Modo de análisis (1 o 2)
Nombre del archivo de salida
Lista opcional de procesos sospechosos
### Enfoque técnico
Este proyecto utiliza [API del sistema / popen() con ps / Boost.Process] para obtener
procesos reales del sistema.
### Criterios para procesos sospechosos

###Salida generada
El archivo incluye:
Fecha y hora del análisis
Lista completa de procesos
Procesos sospechosos con justificación
### Referencias

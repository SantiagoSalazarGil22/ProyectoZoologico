//
// Created by Santi on 5/04/2023.
//

#ifndef PROYECTOZOOLOGICO_ANIMAL_H
#define PROYECTOZOOLOGICO_ANIMAL_H
#include <iostream>

using namespace std;

class animal {

private:
    string nombre;
    string especie;
    string habitat;
    string dieta;
    int edad;

public:
    animal() = default;
    animal(string nombre, string especie, string habitat, string dieta, int edad);

    string getNombre();
    void setNombre(string nombre);

    string getEspecie();
    void setEspecie(string especie);

    string getHabitat();
    void setHabitat(string habitat);

    string getDieta();
    void setDieta(string dieta);

    int getEdad();
    void setEdad(int edad);
};

#endif //PROYECTOZOOLOGICO_ANIMAL_H


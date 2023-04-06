//
// Created by Santi on 5/04/2023.
//

#include "animal.h"

animal::animal(string nombre, string especie, string habitat, string dieta, int edad)
: nombre(nombre), especie(especie), habitat(habitat), dieta(dieta), edad(edad) {}

string animal::getNombre() {
    return nombre;
}

void animal::setNombre(string nombre) {
    animal::nombre = nombre;
}

string animal::getEspecie() {
    return especie;
}

void animal::setEspecie(string especie) {
    animal::especie = especie;
}

string animal::getHabitat() {
    return habitat;
}

void animal::setHabitat(string habitat) {
    animal::habitat = habitat;
}

string animal::getDieta() {
    return dieta;
}

void animal::setDieta(string dieta) {
    animal::dieta = dieta;
}

int animal::getEdad() {
    return edad;
}

void animal::setEdad(int edad) {
    animal::edad = edad;
}


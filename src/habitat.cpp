//
// Created by Santi on 5/04/2023.
//

#include "habitat.h"

habitat::habitat(string habitatt) : habitatt(habitatt) {}

string habitat::getHabitat() {
    return habitatt;
}

void habitat::setHabitat(string habitatt) {
    habitat::habitatt = habitatt;
}

//
// Created by Santi on 5/04/2023.
//

#ifndef PROYECTOZOOLOGICO_HABITAT_H
#define PROYECTOZOOLOGICO_HABITAT_H
#include <iostream>

using namespace std;

class habitat {

private:
    string habitatt;

public:
    habitat() = default;
    habitat(string habitatt);

    string getHabitat();
    void setHabitat(string habitatt);
};

#endif //PROYECTOZOOLOGICO_HABITAT_H

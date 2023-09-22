//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//

#ifndef RISKPROYECTO_TARJETA_H
#define RISKPROYECTO_TARJETA_H

#include <string>
#include "territorio.h"

using namespace std;

// Definicion de la clase Tarjeta
class Tarjeta {
private:
    string tipo;
    Territorio territorio;

public:
    // Constructor con territorio
    Tarjeta(string t, Territorio te);
    // Constructor sin territorio
    Tarjeta(string t);
    const

    string &getTipo() const;

    void setTipo(const string &tipo);

    const Territorio &getTerritorio() const;

    void setTerritorio(const Territorio &territorio);


};


#endif //RISKPROYECTO_TARJETA_H

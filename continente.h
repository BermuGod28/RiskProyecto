//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include <string>

#ifndef RISKPROYECTO_CONTINENTE_H
#define RISKPROYECTO_CONTINENTE_H

using namespace std;

// Definición de la clase Continente
class continente {
private:
    int id_contienente;
    string nombre_continente;

public:
    // Constructor de la clase Continente
    continente();
    continente(int id, string nonmbre);
    // Setters y getters

    int getIdContienente() const;

    void setIdContienente(int idContienente);

    const string &getNombreContinente() const;

    void setNombreContinente(const string &nombreContinente);
};



#endif //RISKPROYECTO_CONTINENTE_H

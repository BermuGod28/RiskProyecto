//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include "continente.h"

// Constructor de la clase Continente
continente::continente() {}
continente::continente(int id, string nombre) {
    id_contienente = id;
    nombre_continente = nombre;
}

int continente::getIdContienente() const {
    return id_contienente;
}

void continente::setIdContienente(int idContienente) {
    id_contienente = idContienente;
}

const string &continente::getNombreContinente() const {
    return nombre_continente;
}

void continente::setNombreContinente(const string &nombreContinente) {
    nombre_continente = nombreContinente;
}


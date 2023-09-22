//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include <string>
#include <list>

#ifndef RISKPROYECTO_TERRITORIO_H
#define RISKPROYECTO_TERRITORIO_H
using namespace std;

// DefiniciÃ³n de la clase Territorio
class Territorio {
private:
    int id_territorio;
    string nombre_territorio;
    int id_continente;
    list<Territorio*> territorios_alrededor;
    int unidadesDeEjercito_territorio;

public:
    // Constructor de la clase Territorio
    Territorio(string nombre, int id, int idcontinente);

    Territorio();

    int getIdTerritorio() const;

    void setIdTerritorio(int idTerritorio);

    const string &getNombreTerritorio() const;

    void setNombreTerritorio(const string &nombreTerritorio);

    int getIdContinente() const;

    void setIdContinente(int idContinente);

    const list<Territorio *> &getTerritoriosAlrededor() const;

    void setTerritoriosAlrededor(const list<Territorio *> &territoriosAlrededor);

    int getUnidadesDeEjercitoTerritorio() const;

    void setUnidadesDeEjercitoTerritorio(int unidadesDeEjercitoTerritorio);

};





#endif //RISKPROYECTO_TERRITORIO_H

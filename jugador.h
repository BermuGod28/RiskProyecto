//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include <list>
#include "tarjeta.h"
#include "territorio.h" // Agregado "territorio.h"
#include <string>


#ifndef RISKPROYECTO_JUGADOR_H
#define RISKPROYECTO_JUGADOR_H

using namespace std;

// DefiniciÃ³n de la clase Jugador
class Jugador {
private:
    string nombre_jugador;
    int id_jugador;
    string color_jugador;
    list<Tarjeta*> tarjetas_jugador;
    list<Territorio*> territorios_jugador;

public:
    // Constructor de la clase Jugador
    Jugador();
    Jugador(string n, string c, int id);

    // FunciÃ³n para jugar el turno del jugador
    int Turno();
    // FunciÃ³n para fortificar territorios
    void fortificar();
    // FunciÃ³n para atacar territorios
    void atacar();
    // FunciÃ³n para mover unidades entre territorios
    void mover();
    //setters y getters

    const string &getNombreJugador() const;

    void setNombreJugador(const string &nombreJugador);

    const int &getIdJugador() const;

    void setIdJugador(const int &idJugador);

    const string &getColorJugador() const;

    void setColorJugador(const string &colorJugador);

    const list<Tarjeta *> &getTarjetasJugador() const;

    void setTarjetasJugador(const list<Tarjeta *> &tarjetasJugador);

    const list<Territorio *> &getTerritoriosJugador() const;

    void setTerritoriosJugador(const list<Territorio *> &territoriosJugador);

};



#endif //RISKPROYECTO_JUGADOR_H

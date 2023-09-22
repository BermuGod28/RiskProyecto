//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include "continente.h"
#include "jugador.h"
#include "tarjeta.h"
#include <list>
#include <string>
#include <vector>

#ifndef RISKPROYECTO_ESTADO_JUEGO_H
#define RISKPROYECTO_ESTADO_JUEGO_H

using namespace std;

// DefiniciÃ³n de la clase EstadoJuego
class EstadoJuego {
private:
    list<Jugador> jugadores;
    list<Tarjeta> mazo;
    list<Jugador>::iterator iterador_jugadores;
public:
    const list<Tarjeta> &getMazo() const;

    void setMazo(const list<Tarjeta> &mazo);

public:
    EstadoJuego();

    EstadoJuego(list<Jugador> j, list<Tarjeta> m, list<Jugador>::iterator iteradorJugadores);

    // MÃ©todo para inicializar el juego
    void inicializar();
    // MÃ©todo para que un jugador realice su turno
    void turno(int id_jugador);

    const list<Jugador> &getJugadores() const;

    void setjugadores(const list<Jugador> &jugadores);

    const list<Tarjeta> &getmazo() const;

    void setmazo(const list<Tarjeta> &mazo);

    const list<Jugador>::iterator &getIteradorJugadores() const;

    void setIteradorJugadores(const list<Jugador>::iterator &iteradorJugadores);

};





#endif //RISKPROYECTO_ESTADO_JUEGO_H

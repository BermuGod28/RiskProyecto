//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include "estado_juego.h"

// Constructor de la clase EstadoJuego
EstadoJuego::EstadoJuego() {}
EstadoJuego::EstadoJuego(list<Jugador> j, list<Tarjeta> m, list<Jugador>::iterator iteradorJugadores) {
    jugadores = j;
    mazo = m;
    iterador_jugadores = iteradorJugadores;
}

// Método para la fase de inicialización del juego
void EstadoJuego::inicializar() {
    //juanjo
}

// Método para que un jugador realice su turno
void EstadoJuego::turno(int id_jugador) {
    // Busca al jugador con el ID especificado en el vector de jugadores
    for (Jugador jugador : jugadores) {
        if (jugador.getIdJugador() == id_jugador) {
            jugador.Turno();
            break;
        }
    }
}

const list<Jugador> &EstadoJuego::getJugadores() const {
    return jugadores;
}

void EstadoJuego::setjugadores(const list<Jugador> &j) {
    jugadores = j;
}

const list<Jugador>::iterator &EstadoJuego::getIteradorJugadores() const {
    return iterador_jugadores;
}

void EstadoJuego::setIteradorJugadores(const list<Jugador>::iterator &iteradorJugadores) {
    iterador_jugadores = iteradorJugadores;
}

const list<Tarjeta> &EstadoJuego::getMazo() const {
    return mazo;
}

void EstadoJuego::setMazo(const list<Tarjeta> &m) {
    mazo = m;
}



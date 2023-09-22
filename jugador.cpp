//
// Created by JUAN JOSE BERMUDEZ on 22/09/2023.
//
#include "jugador.h"

// Constructor de la clase Jugador
Jugador::Jugador(){}
Jugador::Jugador(string n, string c, int id) {
    nombre_jugador = n;
    color_jugador = c;
    id_jugador = id;
}


// Función para jugar el turno del jugador
int Jugador::Turno() {

}

// Función para fortificar territorios
void Jugador::fortificar() {

}

// Función para atacar territorios
void Jugador::atacar() {

}

// Función para mover unidades entre territorios
void Jugador::mover() {

}



//setters y getters
const string &Jugador::getNombreJugador() const {
    return nombre_jugador;
}

void Jugador::setNombreJugador(const string &nombreJugador) {
    nombre_jugador = nombreJugador;
}

const int &Jugador::getIdJugador() const {
    return id_jugador;
}

void Jugador::setIdJugador(const int &idJugador) {
    id_jugador = idJugador;
}

const string &Jugador::getColorJugador() const {
    return color_jugador;
}

void Jugador::setColorJugador(const string &colorJugador) {
    color_jugador = colorJugador;
}

const list<Tarjeta *> &Jugador::getTarjetasJugador() const {
    return tarjetas_jugador;
}

void Jugador::setTarjetasJugador(const list<Tarjeta *> &tarjetasJugador) {
    tarjetas_jugador = tarjetasJugador;
}

const list<Territorio *> &Jugador::getTerritoriosJugador() const {
    return territorios_jugador;
}

void Jugador::setTerritoriosJugador(const list<Territorio *> &territoriosJugador) {
    territorios_jugador = territoriosJugador;
}


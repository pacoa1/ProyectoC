/*
 * Proyecto Ficha_Med
 * Francisco Rafael Arreola Corona
 * A01706242
 * 02/12/22
 */

/**
 * Este proyecto es un programa que le ayuda a un doctor
 * Ingresando los datos básicos del paciente para poder crear 
 * Un posible tratamiento para el paciente
*/


#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Paciente: public Persona { //Clase hija de clase Persona
    private:
        float tempertura;
        string sintoma;
    public: // Metodos
        Paciente (string ,string, int, float, string);
        void setTemperatura (float);
        void setSintoma(string);
        float getTemperatura ();
        string getSintoma();
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @parametros  /string nom: el nombre del paciente, string se: el sexo del paciente
 * int ed: Edad del paciente, float tem: Temperatura del paciente, string sin: Sintomas del paciente
 * @return
*/
Paciente::Paciente(string nom,string se,int ed,float tem, string sin) : Persona (nom, se, ed){ 
    tempertura = 0;
    sintoma = "";
}

// Establecer valores a los atributos

void Paciente :: setTemperatura(float tem){
    tempertura = tem;
}

void Paciente :: setSintoma(string sin){
    sintoma = sin;
}

//Mostrar información de las variables

float Paciente::getTemperatura (){
    return tempertura;
}

string Paciente::getSintoma (){
    return sintoma;
}


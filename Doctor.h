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
#include "Personas.h"
using namespace std;


class Doctor : public Persona {
    private:
    bool certificado;
    bool disponibilidad;

    public:
    Doctor ();
    Doctor(string, string, int, bool, bool);
    bool getCertificado ();
    bool getDisponibilidad ();
    void doctor_datos ();
};

Doctor::Doctor (){

};

Doctor::Doctor(string nom,string se,int ed, bool _certificado, bool _disponibilidad) : Persona (nom, se, ed){
    certificado = _certificado;
    disponibilidad = _disponibilidad;
}

bool Doctor::getCertificado (){
    return certificado;
}

bool Doctor::getDisponibilidad (){
    return disponibilidad;
}
void Doctor:: doctor_datos (){
    cout << " DATOS DEL DOCTOR " << endl;
    cout << "Nombre: " << getPersonaName() << endl;
    cout << "Sexo: " << getPersonaSexo() << endl;
    cout << "Edad: " << getPersonaEdad() << endl;
    cout << "Certificado: " << certificado << endl;
    cout << "Disponibilidad: " << disponibilidad << endl;
}


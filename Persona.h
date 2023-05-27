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
using namespace std;

class Persona { //Atributos
    private:
        string nombre;
        string sexo;
        int edad;
    public: // Metodos
        Persona ();
        Persona (string, string, int); 
        void setNombre (string);
        void setSexo (string);
        void setEdad (int);
        string getPersonaName();
        string getPersonaSexo();
        int getPersonaEdad();
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @parametros  /string nom: el nombre del paciente, string se: el sexo del paciente
 * int ed: Edad del paciente, float tem: Temperatura del paciente, string sin: Sintomas del paciente
 * @return
*/
Persona::Persona(string nom,string se,int ed){ 
    nombre = nom;
    sexo = se;
    edad = ed;

}
/**
 * Constructor por default
 *
 * @parametros
 * @return Objeto Persona
 */
Persona::Persona(){
    nombre = "";
    sexo = "";
    edad = 0;
}

// Establecer valores a los atributos
void Persona :: setNombre(string nom){
    nombre = nom;
}

void Persona :: setSexo(string se){
    sexo = se;
}

void Persona :: setEdad(int ed){
    edad = ed;
    
}

//Mostrar información de las variables

string Persona::getPersonaName (){
    return nombre;
}

string Persona::getPersonaSexo (){
    return sexo;
}

int Persona::getPersonaEdad (){
    return edad;
}



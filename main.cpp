// Created by Alan Corona on 11/20/2022.
//
#include<iostream>
#include<string>
#include <utility>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Alumno{

private:
    string nombre;
    int edad{};
    string carrera;
    string matricula;

public:
    void setNombre(string nom) {
        nombre = std::move(nom);
    }

    void setEdad(int ed) {
        edad = ed;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    void setMatricula(string nom) {
        matricula = std::move(nom);

    }

    string getMatricula() {
        return matricula;
    }

    void setCarrera(string nom) {
        carrera = std::string(nom);
    }

    string getCarrera() {
        return carrera;
    }

    void informe() {
        cout << "Nombre: " << getNombre() << endl;
        cout << "Edad: " << getEdad() << endl;
        cout << "Matricula: " << getMatricula() << endl;
        cout << "Carrera: " << getCarrera() << endl;
    }



};

int main(void){
    string nombreUsuario;
    int edadUsuario;
    string matriculaUsuario;
    string carreraUsuario;


    cout << "Ingresa tu nombre: ";
    getline(cin, nombreUsuario);
    cout << "Ingresa tu edad: ";
    cin >> edadUsuario;
    getline(cin, matriculaUsuario);
    cout << "Ingresa tu matricula: ";
    cin >> matriculaUsuario;
    getline(cin, carreraUsuario);
    cout << "Ingresa tu carrera: ";
    cin >> carreraUsuario;

    Alumno datos;
    datos.setNombre(nombreUsuario);
    datos.setEdad(edadUsuario);
    datos.setMatricula(matriculaUsuario);
    datos.setCarrera(carreraUsuario);
    datos.informe();

    return 0;
}

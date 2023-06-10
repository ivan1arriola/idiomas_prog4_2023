#include "../../../include/system/Sistema.h"

#include <iostream>
#include <string>
#include <set>
#include <map>
#include <sstream>


#include "../../../include/classes/Usuario/Usuario.h"
#include "../../../include/classes/Usuario/Estudiante.h"
#include "../../../include/classes/Usuario/Profesor.h"

#include "../../../include/classes/Idioma.h"


#include "../../../include/datatypes/DTUsuario.h"

#include "../../../include/datatypes/DTDate.h"
#include "../../../include/datatypes/DTNotificacion.h"

using namespace std;


void Sistema::cargarDatosdePrueba() {


    //Crear Notificaciones Sueltas
    DTNotificacion* notificacion1 = new DTNotificacion("nombreCurso1", "nombreIdioma1");
    DTNotificacion* notificacion2 = new DTNotificacion("nombreCurso2", "nombreIdioma2");
    DTNotificacion* notificacion3 = new DTNotificacion("nombreCurso3", "nombreIdioma3");
    DTNotificacion* notificacion4 = new DTNotificacion("nombreCurso4", "nombreIdioma4");

    // Imprimir las Notificaciones
    cout << "Notificacion 1: " << endl << *notificacion1 << endl;
    cout << "Notificacion 2: " << endl << *notificacion2 << endl;
    cout << "Notificacion 3: " << endl << *notificacion3 << endl;
    cout << "Notificacion 4: " << endl << *notificacion4 << endl;

    // Liberar Memoria
    delete notificacion1;
    delete notificacion2;
    delete notificacion3;
    delete notificacion4;



    // Crear Idiomas
    Idioma* idioma1 = new Idioma("Español");
    Idioma* idioma2 = new Idioma("Inglés");
    Idioma* idioma3 = new Idioma("Portugués");
    Idioma* idioma4 = new Idioma("Francés");
    Idioma* idioma5 = new Idioma("Italiano");
    Idioma* idioma6 = new Idioma("Alemán");
    Idioma* idioma7 = new Idioma("Chino");
    Idioma* idioma8 = new Idioma("Japonés");
    Idioma* idioma9 = new Idioma("Ruso");
    Idioma* idioma10 = new Idioma("Coreano");
    Idioma* idioma11 = new Idioma("Árabe");
    Idioma* idioma12 = new Idioma("Hindi");
  

    // Agregar Idiomas a la Coleccion
    handlerIdioma->agregarIdioma(idioma1);
    handlerIdioma->agregarIdioma(idioma2);
    handlerIdioma->agregarIdioma(idioma3);
    handlerIdioma->agregarIdioma(idioma4);
    handlerIdioma->agregarIdioma(idioma5);
    handlerIdioma->agregarIdioma(idioma6);
    handlerIdioma->agregarIdioma(idioma7);
    handlerIdioma->agregarIdioma(idioma8);
    handlerIdioma->agregarIdioma(idioma9);
    handlerIdioma->agregarIdioma(idioma10);
    handlerIdioma->agregarIdioma(idioma11);
    handlerIdioma->agregarIdioma(idioma12);


    // Crear fechas de nacimiento
    DTDate* fechaNacimiento1 = new DTDate(11, 9, 2001);
    DTDate* fechaNacimiento2 = new DTDate(2, 2, 2002);
    DTDate* fechaNacimiento3 = new DTDate(3, 3, 2003);
    DTDate* fechaNacimiento4 = new DTDate(4, 4, 2004);

    // Crear Usuarios
    //Crear Estudiante(string nickname, string contrasenia, string nombre, string descripcion, string pais, DTDate *fechaNacimiento);
    Usuario* usuario1 = new Estudiante("nick1", "pass1", "nombre1", "descripcion1", "pais1", fechaNacimiento1);
    Usuario* usuario2 = new Estudiante("nick2", "pass2", "nombre2", "descripcion2", "pais2", fechaNacimiento2);
    Usuario* usuario3 = new Estudiante("nick3", "pass3", "nombre3", "descripcion3", "pais3", fechaNacimiento3);
    Usuario* usuario4 = new Estudiante("nick4", "pass4", "nombre4", "descripcion4", "pais4", fechaNacimiento4);

    //Crear Profesor(string nickname, string contrasenia, string nombre, string descripcion, string instituto, set<Idioma*> idiomasDeProfesor)
    set<Idioma*> idiomasDeProfesor1;
    idiomasDeProfesor1.insert(idioma1);
    idiomasDeProfesor1.insert(idioma2);
    idiomasDeProfesor1.insert(idioma3);

    set<Idioma*> idiomasDeProfesor2;
    idiomasDeProfesor2.insert(idioma4);
    idiomasDeProfesor2.insert(idioma5);
    idiomasDeProfesor2.insert(idioma6);

    set<Idioma*> idiomasDeProfesor3;    
    idiomasDeProfesor3.insert(idioma7);

    set<Idioma*> idiomasDeProfesor4;
    idiomasDeProfesor4.insert(idioma8);
    idiomasDeProfesor4.insert(idioma9);
    idiomasDeProfesor4.insert(idioma10);
    idiomasDeProfesor4.insert(idioma11);
    idiomasDeProfesor4.insert(idioma12);

    Usuario* usuario5 = new Profesor("nick5", "pass5", "nombre5", "descripcion5", "instituto1", idiomasDeProfesor1);
    Usuario* usuario6 = new Profesor("nick6", "pass6", "nombre6", "descripcion6", "instituto2", idiomasDeProfesor2);
    Usuario* usuario7 = new Profesor("nick7", "pass7", "nombre7", "descripcion7", "instituto3", idiomasDeProfesor3);
    Usuario* usuario8 = new Profesor("nick8", "pass8", "nombre8", "descripcion8", "instituto4", idiomasDeProfesor4);

    // Agregar Usuarios a la Coleccion
    handlerUsuario->agregarUsuario(usuario1);
    handlerUsuario->agregarUsuario(usuario2);
    handlerUsuario->agregarUsuario(usuario3);
    handlerUsuario->agregarUsuario(usuario4);
    handlerUsuario->agregarUsuario(usuario5);
    handlerUsuario->agregarUsuario(usuario6);
    handlerUsuario->agregarUsuario(usuario7);
    handlerUsuario->agregarUsuario(usuario8);


    //Crear vectores de Lecciones
    vector<Leccion*> lecciones1;
    vector<Leccion*> lecciones2;
    vector<Leccion*> lecciones3;
    vector<Leccion*> lecciones4;

    //Crear Lecciones
    Leccion* leccion1 = new Leccion("nombreLeccion1", "objetivoLeccion1");
    Leccion* leccion2 = new Leccion("nombreLeccion2", "objetivoLeccion2");
    Leccion* leccion3 = new Leccion("nombreLeccion3", "objetivoLeccion3");
    Leccion* leccion4 = new Leccion("nombreLeccion4", "objetivoLeccion4");
    Leccion* leccion5 = new Leccion("nombreLeccion5", "objetivoLeccion5");
    Leccion* leccion6 = new Leccion("nombreLeccion6", "objetivoLeccion6");
    Leccion* leccion7 = new Leccion("nombreLeccion7", "objetivoLeccion7");
    Leccion* leccion8 = new Leccion("nombreLeccion8", "objetivoLeccion8");

    //Agregar Lecciones a los vectores
    lecciones1.push_back(leccion1);
    lecciones1.push_back(leccion2);
    lecciones2.push_back(leccion3);
    lecciones2.push_back(leccion4);
    lecciones3.push_back(leccion5);
    lecciones3.push_back(leccion6);
    lecciones4.push_back(leccion7);
    lecciones4.push_back(leccion8);

    // Niveles
    Nivel nivel1 = PRICIPIANTE;
    Nivel nivel2 = MEDIO;
    Nivel nivel3 = AVANZADO;

    // Crear Cursos
    //Curso(string nombre, string descripcion, Nivel nivel, bool disponible, Idioma* idioma, Profesor* profesor, vector<Leccion*> lecciones)
    Curso * curso1 = new Curso("nombreCurso1", "descripcionCurso1", nivel1, true, idioma1, dynamic_cast<Profesor*>(usuario5), lecciones1);
    Curso * curso2 = new Curso("nombreCurso2", "descripcionCurso2", nivel2, true, idioma2, dynamic_cast<Profesor*>(usuario6), lecciones2);
    Curso * curso3 = new Curso("nombreCurso3", "descripcionCurso3", nivel1, true, idioma3, dynamic_cast<Profesor*>(usuario7), lecciones3);
    Curso * curso4 = new Curso("nombreCurso4", "descripcionCurso4", nivel3, true, idioma4, dynamic_cast<Profesor*>(usuario8), lecciones4);

    // Agregar Cursos a la Coleccion
    handlerCurso->agregarCurso(curso1);
    handlerCurso->agregarCurso(curso2);
    handlerCurso->agregarCurso(curso3);
    handlerCurso->agregarCurso(curso4);



    
}
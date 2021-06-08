/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Laboratorio 4 - 
 * Autores (por nombre):
 * 	Alexis Baladon 
 * 	Guillermo Toyos
 * 	Jorge Machado
 * 	Juan Jose Mangado
 * 	Mathias Ramilo
 */

#ifndef ALTAUSUARIOCONTROLLER
#define ALTAUSUARIOCONTROLLER

#include <string>
#include "dtUsuario.h"

using std::string;

class AltaUsuarioController{
private:
   DtUsuario * datos;
   string empresa, nickname, descripcion;
   AltaUsuarioController();

public:
   static AltaUsuarioController * getInstance();
   virtual void ingresarUsuario(DtUsuario);
   virtual void ingresarEmpresa(string);
   virtual void ingresarNickname(string);
   virtual void ingresarDescripcion(string);
   virtual void clearCache();
   virtual void confirmarDarDeAltaUsuario();
   ~altaUsuarioController();
};

#endif

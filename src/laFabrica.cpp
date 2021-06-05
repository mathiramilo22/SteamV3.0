/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Laboratorio 4
 * Autores (por nombre):
 * 	Alexis Baladon 
 * 	Guillermo Toyos
 * 	Jorge Machado
 * 	Juan Jose Mangado
 * 	Mathias Ramilo
 */

#include "../include/laFabrica.h"

laFabrica::laFabrica(){
   instancia = new laFabrica();
}

laFabrica laFabrica::getInstance(){
   if (instancia == NULL) 
      instancia = new laFabrica;
   return instancia;
}

IIFPartidas * laFabrica::getIFPartidasInterface(){
  IFPartidasController * IFP = IFPartidas::getInstance();
  return IFP; 
}

IVideojuego * laFabrica::getVideojuegoInterface(){
   videojuegoController * vj = videojuegoController::getInstance();
   return vjc;
}

IAltaUsuario * laFabrica::getAltaUSuarioInterface(){
   altaUsuarioController * au = altaUSuarioController::getInstance();
   return au;  
}
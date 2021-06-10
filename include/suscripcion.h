/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Laboratorio 4 - Class declaration
 * Autores (por nombre):
 * 	Alexis Baladon
 * 	Guillermo Toyos
 * 	Jorge Machado
 * 	Juan Jose Mangado
 * 	Mathias Ramilo
 */

#ifndef SuScripcion
#define SuScripcion

#include <vector>
#include "dtFechaHora.h"
#include "dtVideojuego.h"

using std::vector;

enum class TipoPago;
class Videojuego;
class Jugador;

class Suscripcion{
private:
    DtFechaHora fecha;
    TipoPago pago;
    Jugador * comprador;
    Videojuego * vj;
public:
    DtVideojuego * obtenerVideojuego();
    Jugador * getComprador();
    virtual bool esActiva()=0;
    bool esDeJugador(Jugador *);
    void eliminarAssoc();
    virtual ~Suscripcion();
protected:
    Suscripcion(DtFechaHora, TipoPago,Jugador *,Videojuego *);
};

#endif

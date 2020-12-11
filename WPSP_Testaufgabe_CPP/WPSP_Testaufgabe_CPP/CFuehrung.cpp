#include "CFuehrung.h"
#include "CPerson.h"

CFuehrung::CFuehrung(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer, e_aufgabe aufgabe)
	:CSpieler( name, vorname, alter, position, nummer ),
	aufgabe(aufgabe)
{}

void CFuehrung::print()
{

}


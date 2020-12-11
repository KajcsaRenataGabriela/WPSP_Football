#include "CSpieler.h"
#include <iostream>

CSpieler::CSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer)
	:CPerson{ name, vorname, alter },
	position(position),
	nummer(nummer)
{}

void CSpieler::print()
{
	std::cout << "Player's position and numer are:" << position << " " << nummer <<std::endl;
}
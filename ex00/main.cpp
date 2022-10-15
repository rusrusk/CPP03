#include "ClapTrap.hpp"
#include <stdio.h>


int main () {

	ClapTrap claptrapA("Ruslan");
	ClapTrap claptrapB("John Wick");


	claptrapA.attack(claptrapB.getName());
	claptrapB.takeDamage(1);
	claptrapB.beRepaired(1);
	claptrapB.attack(claptrapA.getName());
	

	
}
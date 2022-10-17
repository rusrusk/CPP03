#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap 
	:  public FragTrap, public ScavTrap {

	private : 
			std::string _name;
			virtual void Monitoring();
			DiamondTrap();

	public :
			DiamondTrap(std::string param_name);
			~DiamondTrap();
			DiamondTrap(const DiamondTrap &other);
			DiamondTrap &operator=(const DiamondTrap &other);
			void whoAmI();



};



#endif
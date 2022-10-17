#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

	private :
		/* ClapTrap base class content */
		void Monitoring();

	protected :
			enum { HIT_POINTS = 100, ENERGY_POINTS = 50, ATTACK_DAMAGE = 20};
			
	public :
			ScavTrap();
			~ScavTrap();
			ScavTrap(std::string param_name);
			ScavTrap(const ScavTrap &other);
			ScavTrap &operator=(const ScavTrap &other);
			void guardGate();
			void attack(const std::string &target);
			
			// void		setHitPoints();
			// void		setEnergyPoints( );
			// void		setAttackDamage( );


};



#endif
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	private :
				void Monitoring();

	protected :
				enum {HIT_POINTS = 100, ENERGY_POINTS = 100, ATTACK_DAMAGE = 30};

	public :
				void highFiveGuys(void);
				FragTrap(std::string param_name);
				FragTrap() {};
				FragTrap(const FragTrap &other);
				FragTrap &operator=(const FragTrap &other);
				~FragTrap();
};




#endif
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	public :
			enum { HIT_POINTS = 10, ENERGY_POINTS = 10, ATTACK_DAMAGE = 4};
			//Constructor
			ClapTrap(std::string param_name);
			ClapTrap();
			//Copy constructor
			ClapTrap(const ClapTrap &other);
			//Copy assignment operator
			ClapTrap &operator=(const ClapTrap &other);
			//Destructor
			~ClapTrap();
			//Accessors
			void 		setName(std::string name);
			const std::string getName(void) const;
			//public member functions
			void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

	private :
			//private atrributes
			std::string _name;
			int _hit_points;
			int	_energy_points;
			int _attack_damage;
};





#endif

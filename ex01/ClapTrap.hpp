#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

class ClapTrap {

	private :
			std::string _name;
			int _hit_points;
			int	_energy_points;
			int _attack_damage;
			void Monitoring();
			enum { HIT_POINTS = 10, ENERGY_POINTS = 10, ATTACK_DAMAGE = 0};

	public :
			//Constructor
			ClapTrap(std::string param_name);
			ClapTrap();
			//Copy constructor
			ClapTrap(const ClapTrap &other);
			//Copy assignment operator
			ClapTrap &operator=(const ClapTrap &other);
			//Destructor
			~ClapTrap();
	
			//public member functions
			void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

			//setters
			void 		setName(std::string param_name);
			void		setHitPoints(int param_hitpoints);
			void		setEnergyPoints(int param_energypoints);
			void		setAttackDamage(int param_attackdamage);
			
			//getters
			std::string getName(void) const;
			int getHitPoints(void) const;
			int getEnergyPoints(void) const;
			int getAttackDamage(void) const;
};

#endif

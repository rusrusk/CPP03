#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
   private:
    std::string _name;
    void Monitoring();
    DiamondTrap();

   public:
    DiamondTrap(std::string param_name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap &operator=(const DiamondTrap &other);
    void whoAmI();
};

#endif
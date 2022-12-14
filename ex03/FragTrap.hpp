#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
   private:
    virtual void Monitoring();
    FragTrap();

   protected:
    enum { HIT_POINTS = 100, ENERGY_POINTS = 100, ATTACK_DAMAGE = 30 };

   public:
    void highFivesGuys(void);
    FragTrap(std::string param_name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();
};

#endif
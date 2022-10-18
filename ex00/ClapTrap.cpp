#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string param_name)
    : _name(param_name),
      _hit_points(HIT_POINTS),
      _energy_points(ENERGY_POINTS),
      _attack_damage(ATTACK_DAMAGE) {
    std::cout << this->_name << " was created." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << this->_name << " Destructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

void ClapTrap::setName(std::string name) { this->_name = name; }

const std::string ClapTrap::getName(void) const { return this->_name; }

int ClapTrap::getHitPoints(void) const { return this->_hit_points; }

int ClapTrap::getEnergyPoints(void) const { return this->_energy_points; }

int ClapTrap::getAttackDamage(void) const { return this->_attack_damage; }

void ClapTrap::attack(const std::string &target) {
    if (this->_hit_points < 1) {
        std::cout << "ClapTrap " << this->_name;
        std::cout << " tried to attack! But " << target;
        std::cout << " has been already killed! Rest in Peace!" << std::endl;
        return;
    } else if (this->_energy_points < 1) {
        std::cout << "Holy grail! ";
        std::cout << "ClapTrap " << this->_name;
        std::cout
            << " has to confess that he is incapable to proceed because of ";
        std::cout << this->_energy_points
                  << " points left :(! Treasure it while it lasts" << std::endl;
        return;
    } else if (this->_hit_points >= 1 && this->_energy_points >= 1)

        this->_energy_points--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points < 1) {
        std::cout << "ClapTrap " << this->_name << "had ";
        std::cout << this->_hit_points << "and was fiercely obliterated"
                  << std::endl;
        return;
    }

    else if (this->_hit_points >= 1) {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " took ";
        std::cout << amount << " hit points of damage and still alive!"
                  << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points < 1) {
        std::cout << "ClapTrap " << this->_name
                  << " attempted to repair himself by ";
        std::cout << amount << " hit points, unfortunately he had ";
        std::cout << this->_hit_points
                  << " points, thereby he has been already murdered!:(";
        std::cout << std::endl;
    } else if (this->_energy_points < 1) {
        std::cout << "ClapTrap " << this->_name
                  << " attempted to repair himself by ";
        std::cout << amount << " hit points, but he has "
                  << this->_energy_points << " energy points!:(";
        std::cout << std::endl;
    }

    else if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        this->_hit_points += amount;
        if (this->_hit_points > HIT_POINTS)
            this->_hit_points = HIT_POINTS;
        else {
            std::cout << "ClapTrap " << this->_name << " repaired himself by ";
            std::cout << amount << " hit points!" << std::endl;
        }
    }
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_param)
    : _name(name_param),
      _hit_points(HIT_POINTS),
      _energy_points(ENERGY_POINTS),
      _attack_damage(ATTACK_DAMAGE) {
    std::cout << "ClapTrap " << this->_name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(){};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " was destroyed!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "The ClapTrap " << this->getName() << " wants to be the same as the ClapTrap " << other.getName() << "\n";
    *this = other; 

    }

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        std::cout << "Copy assignment operator was called!";
        std::cout << "The ClapTrap " << this->getName() << " wants to be the same as the ClapTrap " << other.getName() << std::endl;
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

void ClapTrap::setName(std::string param_name) { this->_name = param_name; }

void ClapTrap::setHitPoints(int param_hitpoints) {
    this->_hit_points = param_hitpoints;
}

void ClapTrap::setEnergyPoints(int param_energypoints) {
    this->_energy_points = param_energypoints;
}

void ClapTrap::setAttackDamage(int param_attackdamage) {
    this->_attack_damage = param_attackdamage;
}

std::string ClapTrap::getName(void) const { return this->_name; }

int ClapTrap::getHitPoints(void) const { return this->_hit_points; }

int ClapTrap::getEnergyPoints(void) const { return this->_energy_points; }

int ClapTrap::getAttackDamage(void) const { return this->_attack_damage; }

void ClapTrap::attack(const std::string &target) {
    if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target
                  << std::endl;
        Monitoring();
        // std::cout << "Amount of energy is " << this->_energy_points <<
        // std::endl; std::cout << "Amount of hit points is " <<
        // this->_hit_points << std::endl;
    } else if (this->_hit_points < 1) {
        std::cout << "ClapTrap " << this->_name;
        std::cout << " tried to attack! But " << target;
        std::cout << " has been already killed! Rest in Peace!" << std::endl;
        return;
    } else {
        std::cout << "Holy grail! ";
        std::cout << "ClapTrap " << this->_name;
        std::cout
            << " has to confess that he is incapable to proceed because of ";
        std::cout << this->_energy_points
                  << " points left :(! Treasure it while it lasts" << std::endl;
        return;
    }
}



void ClapTrap::takeDamage(unsigned int amount) {
    if (this->getEnergyPoints() >= 1) {
        this->setHitPoints(this->getHitPoints() - amount);
        Monitoring();
        std::cout << "ClapTrap " << this->getName() << " took ";
        std::cout << amount << " hit points of damage and still alive!"
                  << std::endl;
    } else {
        std::cout << "ClapTrap " << this->getName() << "had ";
        std::cout << this->getHitPoints() << "and was fiercely obliterated"
                  << std::endl;
        Monitoring();
        return;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        this->_hit_points += amount;
        Monitoring();
        if (this->_hit_points > HIT_POINTS)
            this->_hit_points = HIT_POINTS;
        else {
            std::cout << "ClapTrap " << this->_name << " repaired himself by ";
            std::cout << amount << " hit points!" << std::endl;
            Monitoring();
        }
    } else if (this->_hit_points < 1) {
        std::cout << "ClapTrap " << this->_name
                  << " attempted to repair himself by ";
        std::cout << amount << " hit points, unfortunately he had ";
        std::cout << this->_hit_points
                  << " points, thereby he has been already murdered!:(";
        std::cout << std::endl;
        Monitoring();
    } else if (this->_energy_points  < 1) {
            std::cout << "ClapTrap " << this->_name
                    << " attempted to repair himself by ";
        std::cout << amount << " hit points, but he has " << this->_energy_points
                << " energy points!:(";
        std::cout << std::endl;
     
    }
}

void ClapTrap::Monitoring() {
    std::cout << COLOR_GREEN "[HP] = " << this->_hit_points << "/" << HIT_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_YELLOW << "[EP] = " << this->_energy_points << "/" << ENERGY_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_RED "[AD] = " << this->_attack_damage << COLOR_DEFAULT;
    std::cout << std::endl;
}
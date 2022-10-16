#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string param_name) {
    this->setName(param_name);
    this->setHitPoints(HIT_POINTS);
    this->setEnergyPoints(ENERGY_POINTS);
    this->setAttackDamage(ATTACK_DAMAGE);

    std::cout << "ScavTrap " << this->getName() << " was created!"
              << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " was destroyed!"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.getName())  {
    *this = other;
    std::cout << "ScavTrap " << other.getName() << "copy was called"
              << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        this->setName(other.getName());
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (this->getHitPoints() >= 1 && this->getEnergyPoints() >= 1) {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
                  << std::endl;
		Monitoring();
        // std::cout << "Amount of energy is " << this->_energy_points <<
        // std::endl; std::cout << "Amount of hit points is " <<
        // this->_hit_points << std::endl;
    } else if (this->getHitPoints() < 1) {
        std::cout << "ScavTrap " << this->getName();
        std::cout << " tried to attack! But " << target;
        std::cout << " has been already killed! Rest in Peace!" << std::endl;
        return;
    } else {
        std::cout << "Holy grail! ";
        std::cout << "ScavTrap " << this->getName();
        std::cout
            << " has to confess that he is incapable to proceed because of ";
        std::cout << this->getEnergyPoints()
                  << " points left :(! Treasure it while it lasts" << std::endl;
        return;
    }
}

void ScavTrap::guardGate() {
	Monitoring();
    if (this->getHitPoints() >= 1 && this->getEnergyPoints() >= 1) {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << this->getName() << " is now in Gate keeper mode."
                  << std::endl;
    } else if (this->getHitPoints() < 1) {
        std::cout << this->getName()
                  << " attempted to keep his Gates protected, "
                  << "unfortunately, ";
        std::cout << this->getHitPoints();
        std::cout << " hit points left at " << this->getName()
                  << "'s disposal, thus he was murdered! :(";
    } else if (this->getEnergyPoints() < 1) {
        std::cout << this->getName()
                  << " attempted to keep his Gates protected, "
                  << "unfortunately, ";
        std::cout << this->getEnergyPoints();
        std::cout << " energy points left at " << this->getName()
                  << "'s disposal, thus he was murdered! :(";
    }
}

void ScavTrap::Monitoring() {
    std::cout << COLOR_GREEN "[HP] = " << this->getHitPoints() << "/" << HIT_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_YELLOW << "[EP] = " << this->getEnergyPoints() << "/" << ENERGY_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_RED "[AD] = " << this->getAttackDamage() << COLOR_DEFAULT;
    std::cout << std::endl;
}
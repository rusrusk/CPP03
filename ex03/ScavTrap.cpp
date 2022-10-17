#include "ScavTrap.hpp"

// ScavTrap::ScavTrap() {

//     this->setHitPoints();
//     this->setEnergyPoints();
//     this->setAttackDamage();
// }

ScavTrap::ScavTrap(std::string param_name) : ClapTrap(param_name) {

    this->_hit_points = HIT_POINTS;
    this->_energy_points = ENERGY_POINTS;
    this->_attack_damage = ATTACK_DAMAGE;

    std::cout << "ScavTrap " << this->_name << " was created!"
              << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " was destroyed!"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name)  {
    // *this = other;
        // this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    std::cout << "ScavTrap " << other._name << "copy was called"
              << std::endl;
        // *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target;
        std::cout << std::endl;
                //   << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		Monitoring();
        // std::cout << "Amount of energy is " << this->_energy_points <<
        // std::endl; std::cout << "Amount of hit points is " <<
        // this->_hit_points << std::endl;
    } else if (this->_hit_points < 1) {
        std::cout << "ScavTrap " << this->_name;
        std::cout << " tried to attack! But " << target;
        std::cout << " has been already killed! Rest in Peace!" << std::endl;
        return;
    } else {
        std::cout << "Holy grail! ";
        std::cout << "ScavTrap " << this->_name;
        std::cout
            << " has to confess that he is incapable to proceed because of ";
        std::cout << this->_energy_points
                  << " points left :(! Treasure it while it lasts" << std::endl;
        return;
    }
}

void ScavTrap::guardGate() {
	Monitoring();
    if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode."
                  << std::endl;
    } else if (this->_hit_points < 1) {
        std::cout << this->_name
                  << " attempted to keep his Gates protected, "
                  << "unfortunately, ";
        std::cout << this->_hit_points;
        std::cout << " hit points left at " << this->_name
                  << "'s disposal, thus he was murdered! :(";
    } else if (this->_energy_points < 1) {
        std::cout << this->_name
                  << " attempted to keep his Gates protected, "
                  << "unfortunately, ";
        std::cout << this->_energy_points;
        std::cout << " energy points left at " << this->_name
                  << "'s disposal, thus he was murdered! :(";
    }
}

// void ScavTrap::setHitPoints() {
//     this->_hit_points = 100;
// }
// void ScavTrap::setEnergyPoints() {
//     this->_energy_points = 50;
// }
// void ScavTrap::setAttackDamage() {
//     this->_attack_damage = 20;
// }

void ScavTrap::Monitoring() {
    std::cout << COLOR_GREEN "SCAV [HP] = " << this->_hit_points << "/" << HIT_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_YELLOW << "[EP] = " << this->_energy_points << "/" << ENERGY_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_RED "[AD] = " << this->_attack_damage << "/" << ATTACK_DAMAGE << COLOR_DEFAULT;
    std::cout << std::endl;
}
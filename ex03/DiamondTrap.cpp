#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string param_name)
    : ClapTrap(param_name + "_clap_name"),
      FragTrap(param_name),
      ScavTrap(param_name) {
    this->_name = param_name;
    this->_hit_points = FragTrap::HIT_POINTS;
    this->_energy_points = ScavTrap::ENERGY_POINTS;
    this->_attack_damage = FragTrap::ATTACK_DAMAGE;

    std::cout << "DiamondTrap " << param_name << " was created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other._name), FragTrap(other._name), ScavTrap(other._name) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " was destroyed!"
              << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is [" << COLOR_MAGENTA << this->_name
              << COLOR_DEFAULT << "], if you don't know!" << std::endl;
    std::cout << "ClapTrap    name is [" << COLOR_MAGENTA << ClapTrap::_name;
    std::cout << COLOR_DEFAULT << "], if you don't know!" << std::endl;
}

void DiamondTrap::Monitoring() {
    std::cout << COLOR_GREEN "DIAMOND [HP] = " << this->_hit_points << "/"
              << FragTrap::HIT_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_YELLOW << "[EP] = " << this->_energy_points << "/"
              << ScavTrap::ENERGY_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_RED "[AD] = " << this->_attack_damage << "/"
              << FragTrap::ATTACK_DAMAGE << COLOR_DEFAULT;
    std::cout << std::endl;
}
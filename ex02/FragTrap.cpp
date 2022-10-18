#include "FragTrap.hpp"

FragTrap::FragTrap(std::string param_name) : ClapTrap(param_name) {
    this->_hit_points = HIT_POINTS;
    this->_energy_points = ENERGY_POINTS;
    this->_attack_damage = ATTACK_DAMAGE;

    std::cout << "FragTrap " << param_name << " was created!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name) {
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;

    std::cout << "FragTrap " << other._name << " want to be the same as "
              << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "Copy assignment operator was called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->_name;
    if (this->_hit_points >= 1 && this->_energy_points >= 1) {
        this->_energy_points--;
        std::cout << " passes over HIGH FIVE without hesitation to you guys!"
                  << std::endl;
    } else if (this->_hit_points < 1) {
        std::cout << " attempted to pass over HIGH FIVE, unfortunately he had "
                  << this->_hit_points;
        std::cout << " hit points, thereby he performed severe infraction of "
                     "Excommunicado rules and he has been already murdered!:("
                  << std::endl;
        return;
    } else {
        std::cout << " attempted to pass over HIGH FIVE, but having "
                  << this->_energy_points;
        std::cout << " energy points, he was lacking the energy to perform."
                  << std::endl;
        return;
    }
}

void FragTrap::Monitoring() {
    std::cout << COLOR_GREEN "FRAG [HP] = " << this->_hit_points << "/"
              << HIT_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_YELLOW << "[EP] = " << this->_energy_points << "/"
              << ENERGY_POINTS << COLOR_DEFAULT << " * ";
    std::cout << COLOR_RED "[AD] = " << this->_attack_damage << "/"
              << ATTACK_DAMAGE << COLOR_DEFAULT;
    std::cout << std::endl;
}
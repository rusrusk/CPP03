#include "ScavTrap.hpp"

int main() {
    ClapTrap first("Ruslan");
    std::cout << "[first] name is		=	" << first.getName()
              << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getHitPoints() << " points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getEnergyPoints() << " points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getAttackDamage() << " points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;


    ScavTrap second("Habibi");
    std::cout << "[second] name is	=	" << second.getName()
              << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getHitPoints() << " points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getEnergyPoints() << " points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getAttackDamage() << " points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;

    first.attack(second.getName());
    second.takeDamage(20);
	first.attack(second.getName());
	second.takeDamage(30);


    second.attack(first.getName());
    first.takeDamage(5);
    first.attack(second.getName());
    second.takeDamage(20);

    second.guardGate();
}
#include "ScavTrap.hpp"

int main() {
    std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
    ClapTrap first("Ruslan");
    std::cout << "[first] name is		=	" << first.getName()
              << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getHitPoints() << " [HP] points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getEnergyPoints() << " [EP] points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getAttackDamage() << "  [AD] points" << std::endl;
	std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;


    ScavTrap second("Habibi");
    std::cout << "[second] name is	=	" << second.getName()
              << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getHitPoints() << " [HP] points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getEnergyPoints() << "  [EP] points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getAttackDamage() << "  [AD] points" << std::endl;
	std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

    first.attack(second.getName());
    second.takeDamage(20);
    std::cout << std::string(50, '=') << std::endl;

	first.attack(second.getName());
	second.takeDamage(30);
    std::cout << std::string(50, '=') << std::endl;

    second.attack(first.getName());
    first.takeDamage(5);
    std::cout << std::string(50, '=') << std::endl;

    first.attack(second.getName());
    second.takeDamage(20);
    std::cout << std::string(50, '=') << std::endl;
    second.guardGate();

    std::cout << std::string(50, '=') << std::endl;
    first.attack(second.getName());
    second.takeDamage(35);
    std::cout << std::string(50, '=') << std::endl;

    second.beRepaired(5);
     std::cout << std::string(50, '=') << std::endl;

    second.attack(first.getName());
     std::cout << std::string(50, '=') << std::endl;

}
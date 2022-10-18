#include "ClapTrap.hpp"

int main() {

	std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
    ClapTrap first("Ruslan");
    std::cout << "[first] name is		=	" << first.getName()
              << std::endl;
    std::cout << "[first] " << first.getName()
              << " has	=	" << first.getHitPoints() << " [HP] points"
              << std::endl;
    std::cout << "[first] " << first.getName()
              << " has	=	" << first.getEnergyPoints() << " [EP] points"
              << std::endl;
    std::cout << "[first] " << first.getName()
              << " has	=	" << first.getAttackDamage() << "  [AD] points"
              << std::endl;
    std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
    ClapTrap second("John Wick");

    first.attack(second.getName());
    second.takeDamage(1);
    second.beRepaired(1);
    second.attack(first.getName());
}
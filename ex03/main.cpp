#include "DiamondTrap.hpp"

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

    ScavTrap second("Habibi");
    std::cout << "[second] name is	=	" << second.getName()
              << std::endl;
    std::cout << "[second] " << second.getName()
              << " has	=	" << second.getHitPoints() << " [HP] points"
              << std::endl;
    std::cout << "[second] " << second.getName()
              << " has	=	" << second.getEnergyPoints() << "  [EP] points"
              << std::endl;
    std::cout << "[second] " << second.getName()
              << " has	=	" << second.getAttackDamage() << "  [AD] points"
              << std::endl;
    std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

    FragTrap third("John Wick");
    std::cout << "[third] name is	        =	" << third.getName()
              << std::endl;
    std::cout << "[third] " << third.getName()
              << " has	=	" << third.getHitPoints() << "  [HP] points"
              << std::endl;
    std::cout << "[third] " << third.getName()
              << " has	=	" << third.getEnergyPoints() << "  [EP] points"
              << std::endl;
    std::cout << "[third] " << third.getName()
              << " has	=	" << third.getAttackDamage() << "   [AD] points"
              << std::endl;
    std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

    DiamondTrap fourth("Diablo");
    std::cout << "[fourth] name is		=	" << fourth.getName()
              << std::endl;
    std::cout << "[fourth] " << fourth.getName()
              << " has	=	" << fourth.getHitPoints() << " [HP] points"
              << std::endl;
    std::cout << "[fourth] " << fourth.getName()
              << " has	=	" << fourth.getEnergyPoints() << "  [EP] points"
              << std::endl;
    std::cout << "[fourth] " << fourth.getName()
              << " has	=	" << fourth.getAttackDamage() << "  [AD] points"
              << std::endl;
    std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

    fourth.attack(first.getName());
    std::cout << std::string(50, '=') << std::endl;
    first.takeDamage(5);
    first.beRepaired(5);
    std::cout << std::string(50, '=') << std::endl;

    fourth.guardGate();
    std::cout << std::string(50, '=') << std::endl;

    fourth.highFivesGuys();
    fourth.takeDamage(100);
    fourth.whoAmI();

    // first.attack(third.getName());
    // third.takeDamage(0);
    // third.highFivesGuys();
    // third.beRepaired(2);
    // first.takeDamage(6);
    // first.attack(second.getName());
    // second.takeDamage(0);
    // second.takeDamage(10);
    // second.beRepaired(10);
    // second.attack(third.getName());
    // third.takeDamage(20);
    // third.highFivesGuys();
    // third.beRepaired(2);
    // second.attack(first.getName());
    // first.takeDamage(20);
    // first.beRepaired(4);
    // first.takeDamage(3);

    // third.highFiveGuys();
    // std::cout << std::string(50, '=') << std::endl;

    // first.attack(second.getName());
    // second.takeDamage(20);
    // std::cout << std::string(50, '=') << std::endl;

    // first.attack(second.getName());
    // second.takeDamage(30);
    // std::cout << std::string(50, '=') << std::endl;

    // second.attack(first.getName());
    // first.takeDamage(5);
    // std::cout << std::string(50, '=') << std::endl;

    // first.attack(second.getName());
    // second.takeDamage(20);
    // std::cout << std::string(50, '=') << std::endl;
    // second.guardGate();

    // std::cout << std::string(50, '=') << std::endl;
    // first.attack(second.getName());
    // second.takeDamage(35);
    // std::cout << std::string(50, '=') << std::endl;

    // second.beRepaired(5);
    //  std::cout << std::string(50, '=') << std::endl;

    // second.attack(first.getName());
    // std::cout << std::string(50, '=') << std::endl;

    // first.attack(third.getName());
    // third.takeDamage(100);
    // std::cout << std::string(50, '=') << std::endl;

    // third.highFiveGuys();
    // std::cout << std::string(50, '=') << std::endl;

    // third.beRepaired(1);
    // std::cout << std::string(50, '=') << std::endl;

    // third.attack(first.getName());
    // first.takeDamage(5);
    // std::cout << std::string(50, '=') << std::endl;

    // third.highFiveGuys();
    // std::cout << std::string(50, '=') << std::endl;
}
// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    // diamond.whoAmI();

    


    ClapTrap first("Ruslan");
    std::cout << "[first] name is		=	" << first.getName()
              << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getHitPoints() << " [HP] points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getEnergyPoints() << " [EP] points" << std::endl;
    std::cout << "[first] " << first.getName() << " has	=	"
              << first.getAttackDamage() << "  [AD] points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;


    ScavTrap second("Habibi");
    std::cout << "[second] name is	=	" << second.getName()
              << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getHitPoints() << " [HP] points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getEnergyPoints() << "  [EP] points" << std::endl;
    std::cout << "[second] " << second.getName() << " has	=	"
              << second.getAttackDamage() << "  [AD] points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;

    FragTrap third("John Wick");
    std::cout << "[third] name is	        =	" << third.getName()
              << std::endl;
    std::cout << "[third] " << third.getName() << " has	=	"
              << third.getHitPoints() << "  [HP] points" << std::endl;
    std::cout << "[third] " << third.getName() << " has	=	"
              << third.getEnergyPoints() << "  [EP] points" << std::endl;
    std::cout << "[third] " << third.getName() << " has	=	"
              << third.getAttackDamage() << "   [AD] points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;

    DiamondTrap fourth("Diablo");
    std::cout << "[fourth] name is		=	" << fourth.getName()
              << std::endl;
    std::cout << "[fourth] " << fourth.getName() << " has	=	"
              << fourth.getHitPoints() << " [HP] points" << std::endl;
    std::cout << "[fourth] " << fourth.getName() << " has	=	"
              << fourth.getEnergyPoints() << "  [EP] points" << std::endl;
    std::cout << "[fourth] " << fourth.getName() << " has	=	"
              << fourth.getAttackDamage() << "  [AD] points" << std::endl;
	std::cout << std::string(50, '=') << std::endl;

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
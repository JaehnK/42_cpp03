#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{	
	name = "UNNAMED";
	attackDamage = 30;
	energyPoint = 100;
	hitPoint = 100;
	std::cout << "FragTrap[" << name << "]: Created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
	this->name = name;
	attackDamage = 30;
	energyPoint = 100;
	hitPoint = 100;
	std::cout << "FragTrap[" << this->name << "]: Created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap[" << name << "]: Died" << std::endl;
}

FragTrap::FragTrap(FragTrap& rhs)
{
	std::cout << "FragTrap[" << rhs.name << "]: Created (Copy Construtor)" << std::endl;
	*this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "FragTrap[" << rhs.name << "]: Copy Assignment Operator Called" << std::endl;	
		this->name = rhs.name;
		this->hitPoint = rhs.hitPoint;
		this->energyPoint = rhs.energyPoint ;
		this->attackDamage = rhs.attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap[" << name << "]: Attack " << target << "." <<std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Anyone? High five?" << std::endl;
	energyPoint += 30;
}
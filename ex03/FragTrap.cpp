#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{	
	attackDamage = 30;
	energyPoint = 100;
	hitPoint = 100;
	std::cout << "FragTrap[" << name << "]: Created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
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

FragTrap::FragTrap(const FragTrap& rhs): ClapTrap(rhs)
{
	std::cout << "FragTrap[" << rhs.name << "]: Created (Copy Construtor)" << std::endl;
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "FragTrap[" << rhs.name << "]: Copy Assignment Operator Called" << std::endl;	
		this->name = rhs.name;
		this->attackDamage = rhs.attackDamage;
		this->energyPoint = rhs.energyPoint;
		this->hitPoint = rhs.hitPoint;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap[" << name << "]: Attack " << target << "." <<std::endl;
	energyPoint--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Anyone? High five?" << std::endl;
	energyPoint += 30;
}
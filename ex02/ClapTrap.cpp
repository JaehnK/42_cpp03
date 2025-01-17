#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "UNNAMED";
	std::cout << "ClapTrap[" << name << "]: Created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap[" << name << "]: Created" << std::endl;
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap[" << name << "]: Died" << std::endl;
} 

ClapTrap::ClapTrap(ClapTrap& rhs)
{
	std::cout << "ClapTrap[" << rhs.name << "]: Created (Copy Construtor)" << std::endl;
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "ClapTrap[" << rhs.name << "]: Copy Assignment Operator Called" << std::endl;	
		this->name = rhs.name;
		this->hitPoint = rhs.hitPoint;
		this->energyPoint = rhs.energyPoint ;
		this->attackDamage = rhs.attackDamage;	
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap[" << name << "]: Attack " << target << "." <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap[" << name << "]: Taken  "<< amount << " Damage" <<std::endl;
	hitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
	std::cout << "ClapTrap[" << name << "]: Repaired "<< amount << "." <<std::endl;
	hitPoint += amount;
}

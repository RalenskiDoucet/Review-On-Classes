#include "Zombie.h"

Zombie::Zombie()
{
	mHealth = 100;
	mAttackPower = 100;
}

Zombie::Zombie(int life, int power)
{
	mHealth = life;
	mAttackPower = power;
}

int Zombie::GetHealth()
{
	return mHealth;
}

int Zombie::GetAttackPower()
{
	return mAttackPower;
}

void Zombie::SetHealth(int life)
{
	mHealth = life;
}

void Zombie::SetAttackPower(int power)
{
	mAttackPower = power;
}

void Zombie::loseHealth(int life, int power)
{ 
	 int newHealth=(life-power);
}


#include "Zombie.h"
#include <iostream>
 
int main()
{
	Zombie zombie;
	Zombie zombieOne(420, 20);
	Zombie zombieTwo(840, 10);
	Zombie zombieThree(500, 15);
	Zombie zombieFour(600, 20);
	int health1 = zombieOne.GetHealth();
	int attack = zombieOne.GetAttackPower();
	int health2 = zombieTwo.GetHealth();
	int attack2 = zombieTwo.GetAttackPower();
	int health3 = zombieThree.GetHealth();
	int attack3 = zombieThree.GetAttackPower();
	int health4 = zombieFour.GetHealth();
	int attack4 = zombieFour.GetAttackPower();
		zombieOne.SetAttackPower(20);
		zombieOne.SetHealth(420);
		zombieTwo.SetHealth(840);
		zombieTwo.SetAttackPower(10);
		zombieThree.SetAttackPower(15);
		zombieThree.SetHealth(500);
		zombieFour.SetHealth(600);
		zombieFour.SetAttackPower(20);
		(zombieOne.GetHealth - zombieTwo.GetAttackPower);
		(zombieThree.GetHealth - zombieFour.GetAttackPower);
		(zombieFour.GetHealth - zombieThree.GetHealth);
	system("pause");




}
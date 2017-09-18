#pragma once
class Zombie
{
private:
	int mHealth;
	int mAttackPower;
public:
	Zombie();				//Set Health 100 and AttackPower 100.
	Zombie(int life, int power );		//Assign  Life and Power 
	int GetHealth();					//
	int GetAttackPower();				//
	void SetHealth(int life);			//
	void SetAttackPower(int power);		//
	void loseHealth(int life,int power);



};

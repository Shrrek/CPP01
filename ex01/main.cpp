#include "Zombie.hpp"

int main(void){
	Zombie *horde = zombieHorde(5, "monster");
	delete[] horde;
	return (0);
}
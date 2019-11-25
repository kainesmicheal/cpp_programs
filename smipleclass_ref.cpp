#include <iostream>
#include <string>
#define input(x) std::cout << x << std::endl


class player
{
public:
	int p_x=0;
	int p_y=0;
	int speed=0;
	
	
};

void move(player& p,int x, int y, int s)
{
	p.p_x += x * s;
	p.p_y += y * s;
}



int main() {
	player Player;
	move(Player, 10, 8, 2);
	input(Player.p_x);
	input(Player.p_y);
	
	std::cin.get();
}
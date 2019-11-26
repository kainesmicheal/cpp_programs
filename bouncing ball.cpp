#include<iostream>
class Bouncingball
{
public:
	static int bouncingBall(float h, float bounce, float window)
	{
		if (h <= 0) return -1;
		if (!(bounce > 0 && bounce < 1)) return -1;
		if (window >= h) return -1;
		int counter = 0;                        
		while ( h > window)
		{
			std::cout << "decreased value " << h << std::endl;
			if (counter == 0)                         //57, 0.9, 0.57
			{
				h = h * bounce;
				counter++;
				continue;
			}
			else if (counter >= 1)
			{
				if (h > window)
				{

					counter = counter + 2;
					std::cout << "intial count " << counter << std::endl;
				}
				else
				{
					std::cout << "breaking" << std::endl;
					break;
				}
				h = h * bounce;
				std::cout << "inside loop h " << h << std::endl;
				
			}
			
		}
		return counter;
	}

};

int main()
{
	Bouncingball a;
	int b = a.bouncingBall(57, 0.9, 0.57);
	std::cout << b << std::endl;
}
#include<iostream>
#include<vector>

class Entity
{
public:
	int a,b;
	Entity(int a, int b) : a(a), b(b) {}

	Entity(const Entity& en)
		: a(en.a), b(en.b)
	{
		std::cout << "Copied!" << std::endl;
	}
	
	void print()
	{
		std::cout << a << "," << b << std::endl;
	}
};
std::ostream& operator<<(std::ostream& stream, Entity& entity)
{
	stream << entity.a << "," << entity.b;
	return stream;
}

int main()
{
	std::vector<Entity> a;
	a.reserve(3); // allocates memory
	a.emplace_back(1,2); //created the object outside the main
	a.emplace_back(3,2);
	a.emplace_back(6,2);
	for(int i=0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

}
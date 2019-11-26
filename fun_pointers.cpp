#include<iostream>
#include<vector>

void Print(int value)
{
	std::cout << "Value : " << value << std::endl;
}

void forEach(std::vector<int>& vec, void(*print)(int))
{
	for (int values : vec)
	{
		print(values);
	}

}

int main()
{
	std::vector<int> Vector = { 1,2,3,4,5 };
	forEach(Vector,Print);
}

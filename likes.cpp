#include<iostream>
#include<vector>
#include<string>
#include<array>

std::string likes(const std::vector<std::string>& names)
{
	int size = names.size();
	if (size == 0)
	{
		return "no one likes this";
	}
	else if (size == 1)
	{
		std::string name = names[0] + " likes this";
		return name;
	}
	else if (size == 2)
	{
		std::string name = names[0] + " and " + names[1] + " like this";
		return name;
	}
	else if (size == 3)
	{
		std::string name = names[0] + ", " + names[1] + " and " + names[2] + " like this";
		return name;
	}
	else
	{
		std::string s = std::to_string(size - 2);
		std::string name = names[0] + ", " + names[1] + " and " + s + " others like this";
		return name;
	}
}

int main()
{
	std::string Result = likes({ "Jacob", "Alex","Mark","Max" });

	std::cout << Result << std::endl;

}
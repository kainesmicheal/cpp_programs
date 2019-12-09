#include<iostream>
#include<vector>

class Sort
{
public:
	std::vector<int> sortArray(std::vector<int> array)
	{
		std::vector<int> temp = array;
		std::vector<int> temp1;
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i] == 0)
			{
				temp1.push_back(temp[i]);
			}
			if (temp[i] % 2 != 0)
			{
				temp1.push_back(temp[i]);
				temp[i] = 0;
			}
		}
		int a, b;
		for (int i = 1; i < temp1.size(); i++)
		{
			a = temp1[i];
			b = i - 1;

			while (b >= 0 && temp1[b] > a && temp1[i] != 0)
			{
				temp1[b+1] = temp1[b];
				b = b - 1;
			}
			temp1[b + 1] = a;
		}
		int zero = 0;
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i] == 0)
			{
				temp[i] = temp1[zero];
				zero = zero + 1;
			}
		}

		return temp;
	}
};

int main()
{
	Sort obj;
	std::vector<int> actual = obj.sortArray({ 5, 3, 1, 8, 0 });

	for (int i = 0; i < actual.size(); i++)
	{
		std::cout << actual[i] << std::endl;
	}


}
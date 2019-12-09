#include<iostream>
#include<vector>
#include<string>
#include<array>

using namespace std;

class StockList
{
public:
	static string stockSummary(vector<string>& lstOfArt, vector<string>& categories)
	{
		int size = categories.size();
		vector<string> result;

		if (lstOfArt.size() == 0 || categories.size() == 0)
		{
			return "";
		}
		for (int i = 0; i < categories.size(); i++)
		{
			for (int j = 0; j < lstOfArt.size(); j++)
			{
				if (lstOfArt[j].substr(0, 1) == categories[i])        //(A : 0) - (B : 1290) - (C : 515) - (D : 600)
				{
					int spaceIndex=0;
					string a = lstOfArt[j];
					for (int i = 0; i < a.size(); i++)
					{
						if (a[i] == char(' '))
						{
							spaceIndex = i+1;
							break;
						}
					}
					string t = categories[i];
					string b = lstOfArt[j].substr(spaceIndex, lstOfArt.size());
					string temp ="(" + t + ": " + b + ")";
					cout << temp << endl;
					result.push_back(temp);
				}
			}
		}
		vector<int> arr;
		arr.resize(size);
		for (int j = 0; j < categories.size(); j++)
		{
			
			for (int i = 0; i < result.size(); i++)
			{
				string gh = result[i].substr(1, 2);
				if (result[i].substr(1, 1) == categories[j])
				{
					
					int spaceIndex = 0;
					string a = result[i];
					for (int i = 0; i < a.size(); i++)
					{
						if (a[i] == char(' '))
						{
							spaceIndex = i + 1;
							break;
						}
					}
					string b = result[i].substr(spaceIndex, result.size());
					int y = atoi(b.c_str());
					arr[j] = arr[j] + y;
					cout << arr[j] << endl;
				}
			}
		}
		vector<string> arr1;
		arr1.resize(size);
		for (int j = 0; j < categories.size(); j++)
		{

			for (int i = 0; i < result.size(); i++)
			{
				if (result[i].substr(1, 1) == categories[j])
				{

					int spaceIndex = 0;
					string a = result[i];
					for (int i = 0; i < a.size(); i++)
					{
						if (a[i] == ':')
						{
							spaceIndex = i -1 ;
							break;
						}
					}
					string b = result[i].substr(1,spaceIndex);
					cout << b << endl;
					arr1[j] = b;
				}
			}
		}
		string value;
		vector<string> yyy;
		yyy.resize(size);
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr1[i] == "")
			{
				arr1[i] = categories[i];
			}
			int koi = arr[i];
			string hh = to_string(koi);
			string v = "(" + arr1[i] + " : " + hh + ")";
			cout << v << endl;
			yyy[i] = v;
		}
		for (int i = 0; i < yyy.size(); i++)
		{	
			if (i == 0)
			{
				value = value + yyy[i];
			}
			else
			{
				value = value + " - " + yyy[i];
			}
		}
		return value;
	}

};


int main()
{
	vector<string> art = { "BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600" };
	vector<string> cd = { "A", "B", "C", "D" };
	StockList stock;
 	string result = stock.stockSummary(art,cd);
	cout << result << endl;
	
	//dotest(art, cd, "(A : 200) - (B : 1140)");
	//(A : 0) - (B : 1290) - (C : 515) - (D : 600)
}
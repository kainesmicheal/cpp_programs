#include<iostream>

class String
{
private:
	char* m_Buffer;
	unsigned int size;
public:
	String(const char* string)
	{
		size = strlen(string);
		m_Buffer = new char[size + 1];
		memcpy(m_Buffer, string, size);
		m_Buffer[size] = 0;
	}
	String(const String& s) : size(s.size)
	{
		m_Buffer = new char[size + 1];
		memcpy(m_Buffer, s.m_Buffer, size+1);
		
	}
	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
	~String()
	{
		delete[] m_Buffer;
	}
	friend std::ostream& operator<<(std::ostream& string, String& s);

};
std::ostream& operator<<(std::ostream& string, String& s)
{
	string << s.m_Buffer;
	return string;
}


int main()
{
	String string("Kaines");
	String copy = string;
	copy[0] = 'C';

	std::cout << string << std::endl;
	std::cout << copy << std::endl;
};
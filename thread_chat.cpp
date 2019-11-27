#include<iostream>
#include<thread>
#include<string>
#include<array>
using namespace std::literals::chrono_literals;

static bool Finish = false;
void Sender()
{
	int index = 0;
	std::array<std::string, 5> s_msg =
	{ "hey","how are you", "so then", "im just sitting", "cool" };
	while (index < 5)
	{
		std::cout << "\n" << std::endl;
		std::cout << "\t \t \t \t" <<"KATHY: "<< s_msg[index] << std::endl;
		std::cout << "\n" << std::endl;
		if (index < 5) index++;
		std::this_thread::sleep_for(4s);
	}
	
}

void Receiver()
{
	int index = 0;
	std::array<std::string, 5> r_msg =
	{ "hello...","I'm fine", "whats up", "ok then!", "bye....." };
	while (index < 5)
	{
		std::this_thread::sleep_for(2s);
		std::cout << "\t \t \t \t \t \t \t " << r_msg[index] << " :ELAINE" << std::endl;
		if(index < 5) index++;
		std::this_thread::sleep_for(2s);
		
	}

}

int main()
{
	std::thread send(Sender);
	std::thread receive(Receiver);

	send.join();
	receive.join();

	
}
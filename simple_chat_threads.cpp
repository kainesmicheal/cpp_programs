#include<iostream>
#include<thread>

static bool fin = false;

void work()
{
	using namespace std::literals::chrono_literals;

	while(!fin)
	{
		std::this_thread::sleep_for(2s);
		std::cout << "Hello..." << std::endl;
		std::cin.get();
	}
}

int main()
{
	std::cout << "Conversation starts .." << std::endl;
	std::cin.get();

	std::thread worker(work);

	//std::cin.get();
	std::cout << "Hey!" << std::endl;
	std::cin.get();
	fin = true;

	worker.join();
	std::cout << "Conversation ends!..." << std::endl;

	std::cin.get();
}
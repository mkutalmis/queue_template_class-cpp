#include<iostream>
#include"Queue.h"

struct time
{
	std::string name;
	double secs;
	double mins;
	double hours;
	time()
	{
	}
	time(std::string nm)
	{
		this->name = nm;
		secs = 0;
		mins = 0;
		hours = 0;
	}
};

/* Driver Program */
int main()
{
	Queue<int> q_int;
	Queue<std::string> q_string;
	Queue<time> q_time;
	Queue<char> q_char;

	std::cout << "int Queue" << std::endl;
	std::cout << "Size of the Queue : " << q_int.size() << std::endl;
	std::cout << "Pushing 1,2,3 " << std::endl;
	q_int.enqueue(1);
	q_int.enqueue(2);
	q_int.enqueue(3);
	std::cout << "Size of the Queue : " << q_int.size() << std::endl;
	std::cout << "Peek : " << q_int.peek() << std::endl;
	std::cout << "Dequeue : " << q_int.dequeue() << std::endl;
	std::cout << "Peek : " << q_int.peek() << std::endl;
	std::cout << "Dequeue : " << q_int.dequeue() << std::endl;
	std::cout << "Peek : " << q_int.peek() << std::endl;
	std::cout << "Size of the Queue : " << q_int.size() << std::endl;
	std::cout << "Clear function" << std::endl;
	q_int.clear();
	std::cout << "Size of the Queue : " << q_int.size() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "String Queue" << std::endl;
	std::cout << "Size of the Queue : " << q_string.size() << std::endl;
	std::cout << "Pushing \"Hello\",\"World\",\"C++\"" << std::endl;
	q_string.enqueue("Hello");
	q_string.enqueue("World");
	q_string.enqueue("C++");
	std::cout << "Size of the Queue : " << q_string.size() << std::endl;
	std::cout << "Peek : " << q_string.peek().c_str() << std::endl;
	std::cout << "Dequeue : " << q_string.dequeue().c_str() << std::endl;
	std::cout << "Peek : " << q_string.peek().c_str() << std::endl;
	std::cout << "Dequeue : " << q_string.dequeue().c_str() << std::endl;
	std::cout << "Peek : " << q_string.peek().c_str() << std::endl;
	std::cout << "Size of the Queue : " << q_string.size() << std::endl;
	std::cout << "Clear function" << std::endl;
	q_string.clear();
	std::cout << "Size of the Queue : " << q_string.size() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "Struct Time Queue" << std::endl;
	struct time t1("time1");
	struct time t2("time2");
	struct time t3("time3");
	std::cout << "Size of the Queue : " << q_time.size() << std::endl;
	std::cout << "Pushing time t1, t2, t3" << std::endl;
	q_time.enqueue(t1);
	q_time.enqueue(t2);
	q_time.enqueue(t3);
	std::cout << "Size of the Queue : " << q_time.size() << std::endl;
	std::cout << "Peek : " << q_time.peek().name.c_str() << std::endl;
	std::cout << "Dequeue : " << q_time.dequeue().name.c_str() << std::endl;
	std::cout << "Peek : " << q_time.peek().name.c_str() << std::endl;
	std::cout << "Dequeue : " << q_time.dequeue().name.c_str() << std::endl;
	std::cout << "Peek : " << q_time.peek().name.c_str() << std::endl;
	std::cout << "Size of the Queue : " << q_time.size() << std::endl;
	std::cout << "Clear function" << std::endl;
	q_time.clear();
	std::cout << "Size of the Queue : " << q_time.size() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "Char Queue" << std::endl;
	std::cout << "Size of the Queue : " << q_char.size() << std::endl;
	std::cout << "Pushing a,b,c " << std::endl;
	q_char.enqueue('a');
	q_char.enqueue('b');
	q_char.enqueue('c');
	std::cout << "Size of the Queue : " << q_char.size() << std::endl;
	std::cout << "Peek : " << q_char.peek() << std::endl;
	std::cout << "Dequeue : " << q_char.dequeue() << std::endl;
	std::cout << "Peek : " << q_char.peek() << std::endl;
	std::cout << "Dequeue : " << q_char.dequeue() << std::endl;
	std::cout << "Peek : " << q_char.peek() << std::endl;
	std::cout << "Size of the Queue : " << q_char.size() << std::endl;
	std::cout << "Clear function" << std::endl;
	q_char.clear();
	std::cout << "Size of the Queue : " << q_char.size() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;
	return 0;
}
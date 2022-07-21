/*
 * EventGenerator.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "EventGenerator.h"
#include <chrono>
#include <iostream>



EventGenerator::EventGenerator(int freq) : frequency(freq),GeneratorThread(nullptr),Manager(EventManager::CreateObj())  {



}
EventsBase* EventGenerator::Factorygenerator (int rand_event)
{

	if (rand_event == HW_SENDPACKET )
	{
		HardwareSendPacket * obj = new HardwareSendPacket ;
		return obj;
	}
	else if (rand_event == HW_RECEIVEPACKET )
	{
		HardwareReceivePacket * obj = new HardwareReceivePacket ;
		return obj;
	}
	else if (rand_event == SYS_SLEEP )
	{
		SystemSleep * obj = new SystemSleep ;
		return obj;
	}
	else if (rand_event == SYS_WAKEUP )
	{
		SystemWakeup * obj = new SystemWakeup ;
		return obj;
	}
	else if (rand_event == SYS_SHUTDOWN )
	{
		SystemShutdown * obj = new SystemShutdown ;
		return obj;
	}
	return nullptr;

}
void  EventGenerator::generate()
{

    using Clock = std::chrono::steady_clock;
    std::chrono::time_point<std::chrono::steady_clock> start, now;
    std::chrono::milliseconds duration;

    start = Clock::now(); // Setting start time
	while (1)
	{
			now = Clock::now();//Recording now time
			duration = std::chrono::duration_cast<std::chrono::milliseconds>(now - start);	/*Calculating Duration*/

			if (duration.count() >= frequency)
			{
				start = Clock::now(); 							/*Updating Start Time*/
				int rand_event = 1 + rand() % 5;				/*Generating Random number */
				std::cout << "-----------------------------------" <<std::endl;
				std::cout << "Event Generated..  "<<std::endl ;
				EventsBase* obj = static_cast<EventsBase*> (Factorygenerator(rand_event));/*Casting to EventsBase Statically.. */
				Manager.postEvent(obj); 					/*Adding Event to Queue*/

			}
	}
}




void EventGenerator::generationStart()
{
	GeneratorThread = new std::thread(&EventGenerator::generate,this);

}
void EventGenerator::generationStop()
{
	GeneratorThread->join();
	delete GeneratorThread;
}


EventGenerator::~EventGenerator() {
	/*if (GeneratorThread != nullptr)
		delete GeneratorThread;*/
	std::cout << "Generator DCTOR CALLED\n";
}



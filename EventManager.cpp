/*
 * EventManager.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "EventManager.h"


void EventManager::startHandlingEvents()
{
	ManagerThread = new std::thread(&EventManager::iterate,this);
}
EventManager::EventManager(): ManagerThread(nullptr) {

	std::cout<<"Manager CTOR Called \n";
	this->startHandlingEvents();
}
void EventManager::postEvent(EventsBase* obj)
{
	List.push(obj);

}
void EventManager::iterate()
{
while (1)
	{

		if (!List.empty())
		{
		  List.top()->executeEvent();
		  List.pop();
		}
	}
}


void EventManager::stopHandlingEvents()
{

	ManagerThread->join();
	delete ManagerThread;
}

EventManager& EventManager::CreateObj()
{
	static EventManager object;
	return object;
}

EventManager::~EventManager() {
	if (ManagerThread != nullptr)
	{
		delete ManagerThread;

	}
	std::cout << "Manager DCTOR CALLED\n";
}


/*
 * EventManager.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTMANAGER_H_
#define EVENTMANAGER_H_
#include <queue>
#include <vector>
#include <thread>
#include <iostream>
#include "EventBase/EventsBase.h"
#include "Comparator.h"






/*-----------Singleton Class-----------*/
class EventManager {
	EventManager(const EventManager& ) = delete;

private :
	std::thread* ManagerThread ;
	EventManager();
	std::priority_queue< EventsBase* , std::vector<EventsBase*> , Comparator > List;
public:

	static EventManager& CreateObj();
	void startHandlingEvents();			/*Initiates the Thread only...*/
	void stopHandlingEvents();			/*Terminates the Thread only...*/
	void postEvent(EventsBase*);		/*Add Objects To The Queue*/
	void iterate();						/*Iterates over the Queue and Execute it's */
	virtual ~EventManager();


};

#endif /* EVENTMANAGER_H_ */

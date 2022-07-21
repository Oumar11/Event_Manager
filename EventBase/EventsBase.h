/*
 * EventsBase.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_EVENTSBASE_H_
#define EVENTBASE_EVENTSBASE_H_

#include "Configuration.h"
/*-------------------------Our Basic Abstract (Interface) Class -------------------------*/

class EventsBase {
	protected :
		Priority_t priority;			 /*Enum created to define Types of priorities*/
	public:
		EventsBase();

		virtual void EventType()= 0; /* PVF for be inherited by [SystemEvents/HardwareEvents]*/
		virtual void executeEvent() = 0 ; /* PVF to be inherited To the Events themselves [SendPacket/ReceivcePacket/SystemSleep/ etc..]*/
		virtual ~EventsBase();

		Priority_t getPriority() const ;
};

#endif /* EVENTBASE_EVENTSBASE_H_ */

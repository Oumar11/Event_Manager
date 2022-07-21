/*
 * SystemEvents.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_SOFTWAREEVENTS_SYSTEMEVENTS_H_
#define EVENTBASE_SOFTWAREEVENTS_SYSTEMEVENTS_H_

#include "../EventsBase.h"
#include "../Configuration.h"

class SystemEvents : public EventsBase{
	private :
		Event_t type;
		void SetupSytem();  /*Function Required to be implemented with that Specific name...*/

	public:
		SystemEvents(Event_t); /*parameterized CTOR to be called at Children CTOR */

		virtual void executeEvent() = 0 ; /*PVF to be overridden by the Children Events*/
		void EventType()override ;/*Inherited function so we could use the [ setupHardware() / setupSystem()] according to the child  */
								  /*Being called*/

		virtual ~SystemEvents();
};

#endif /* EVENTBASE_SOFTWAREEVENTS_SYSTEMEVENTS_H_ */

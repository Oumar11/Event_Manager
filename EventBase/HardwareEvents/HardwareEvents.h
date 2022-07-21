/*
 * HardwareEvents.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_HARDWAREEVENTS_HARDWAREEVENTS_H_
#define EVENTBASE_HARDWAREEVENTS_HARDWAREEVENTS_H_

#include "../EventsBase.h"
#include "../Configuration.h"


class HardwareEvents : public EventsBase {

	private :
		Event_t type;
		void setupHardware();


	public:

		HardwareEvents(Event_t  );
		virtual void executeEvent() = 0 ;
		void EventType() override ;

		virtual ~HardwareEvents();
};

#endif /* EVENTBASE_HARDWAREEVENTS_HARDWAREEVENTS_H_ */

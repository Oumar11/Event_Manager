/*
 * SystemShutdown.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_SOFTWAREEVENTS_SYSTEMSHUTDOWN_H_
#define EVENTBASE_SOFTWAREEVENTS_SYSTEMSHUTDOWN_H_

#include "SystemEvents.h"

class SystemShutdown :public SystemEvents {
	private:
		int priority ;
	public:
		SystemShutdown();


		void executeEvent() override ;


		virtual ~SystemShutdown();
};

#endif /* EVENTBASE_SOFTWAREEVENTS_SYSTEMSHUTDOWN_H_ */

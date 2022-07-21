/*
 * SystemSleep.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_SOFTWAREEVENTS_SYSTEMSLEEP_H_
#define EVENTBASE_SOFTWAREEVENTS_SYSTEMSLEEP_H_

#include "SystemEvents.h"


class SystemSleep : public SystemEvents {


public:
	SystemSleep();
	void executeEvent() override ;
	virtual ~SystemSleep();
};

#endif /* EVENTBASE_SOFTWAREEVENTS_SYSTEMSLEEP_H_ */

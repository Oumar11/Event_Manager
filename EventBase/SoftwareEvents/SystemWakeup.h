/*
 * SystemWakeup.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_SOFTWAREEVENTS_SYSTEMWAKEUP_H_
#define EVENTBASE_SOFTWAREEVENTS_SYSTEMWAKEUP_H_

#include "SystemEvents.h"

class SystemWakeup : public SystemEvents  {
public:
	SystemWakeup();
	void executeEvent() override ;
	virtual ~SystemWakeup();
};

#endif /* EVENTBASE_SOFTWAREEVENTS_SYSTEMWAKEUP_H_ */

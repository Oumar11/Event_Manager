/*
 * SystemEvents.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "SystemEvents.h"
#include <iostream>


SystemEvents::SystemEvents(Event_t val) : type(val)  {

	if (type == SYS_SLEEP)  /*If called from a SystemSleep Event.. Priority will be Set as required*/
		priority = HIGH;

	else if (type == SYS_WAKEUP ) /*If called from a SystemWakeup Packet Event.. Priority will be Set as required*/
		priority = MEDIUM;

	else if (type == SYS_SHUTDOWN) /*If called from a SystemeShutdown Event.. Priority will be Set as required*/
		priority = LOW;

}


void SystemEvents::SetupSytem()
{
	std::cout << "System Setup Called\n";

}
void SystemEvents::EventType() /* Overridden so we could either call [ hardwareSetup / softwareSetup ] */
{
	 SystemEvents::SetupSytem();
}

SystemEvents::~SystemEvents() {
}


/*
 * SystemWakeup.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "SystemWakeup.h"
#include <iostream>
SystemWakeup::SystemWakeup() : SystemEvents::SystemEvents(SYS_WAKEUP) {

}
void SystemWakeup::executeEvent()
{
	this->EventType();								/* Calling Which  is being called [Hardware/System] */
	std::cout<< "System Wake up is Executing\n";	/*Event Execution*/
}

SystemWakeup::~SystemWakeup() {

}


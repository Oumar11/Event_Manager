/*
 * SystemShutdown.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "SystemShutdown.h"
#include <iostream>


SystemShutdown::SystemShutdown() : SystemEvents::SystemEvents(SYS_SHUTDOWN)  {


}

void SystemShutdown::executeEvent()
{
	this->EventType();								/* Calling Which  is being called [Hardware/System] */
	std::cout<< "System ShutDown is Executing\n"; 	/*Event Execution*/
}

SystemShutdown::~SystemShutdown() {

}


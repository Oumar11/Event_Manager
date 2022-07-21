/*
 * SystemSleep.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "SystemSleep.h"
#include <iostream>
SystemSleep::SystemSleep() : SystemEvents::SystemEvents(SYS_SLEEP)	 {


}
void SystemSleep::executeEvent()
{
	this->EventType();								/* Calling Which  is being called [Hardware/System] */
	std::cout<< "System Sleep is Executing\n"; 		/*Event Execution*/
}

SystemSleep::~SystemSleep() {

}


/*
 * HardwareEvents.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "HardwareEvents.h"
#include <iostream>

HardwareEvents::HardwareEvents(Event_t val) : type(val) {

	if (type == HW_SENDPACKET )
		priority = HIGH;
	else if (type == HW_RECEIVEPACKET )
		priority = LOW;

}
void HardwareEvents::setupHardware()
{
	std::cout<< "Setup Hardware Executing\n";
}
void HardwareEvents::EventType()
{
	HardwareEvents::setupHardware();
}
HardwareEvents::~HardwareEvents() {

}


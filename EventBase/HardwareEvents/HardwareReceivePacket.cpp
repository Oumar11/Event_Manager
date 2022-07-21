
/*
 * HardwareReceivePacket.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
*/

#include "HardwareReceivePacket.h"
#include <iostream>

HardwareReceivePacket::HardwareReceivePacket() : HardwareEvents::HardwareEvents(HW_RECEIVEPACKET) {


}

void HardwareReceivePacket::executeEvent()
{
	this->EventType(); /* Calling Which  is being called [Hardware/System] */
	std::cout<< "HardWare Receive Packet is Executing\n";
}

HardwareReceivePacket::~HardwareReceivePacket() {

}



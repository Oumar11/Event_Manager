/*
 * HardwareSendPacket.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "HardwareSendPacket.h"
#include <iostream>
HardwareSendPacket::HardwareSendPacket() : HardwareEvents::HardwareEvents(HW_SENDPACKET) {


}
void HardwareSendPacket::executeEvent()
{
	this->EventType(); 									/* Calling Which  is being called [Hardware/System] */
	std::cout<< "HardWare Send Packet is Executing\n";	/*Event Execution*/
}

HardwareSendPacket::~HardwareSendPacket() {

}


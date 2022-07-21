/*
 * HardwareSendPacket.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_HARDWAREEVENTS_HARDWARESENDPACKET_H_
#define EVENTBASE_HARDWAREEVENTS_HARDWARESENDPACKET_H_

#include "HardwareEvents.h"

class HardwareSendPacket:public HardwareEvents {
	public:
		HardwareSendPacket();

		void executeEvent() override ; /* Overridden here*/

		virtual ~HardwareSendPacket();
};

#endif /* EVENTBASE_HARDWAREEVENTS_HARDWARESENDPACKET_H_ */

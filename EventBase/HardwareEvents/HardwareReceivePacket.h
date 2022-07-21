/*
 * HardwareReceivePacket.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_HARDWAREEVENTS_HARDWARERECEIVEPACKET_H_
#define EVENTBASE_HARDWAREEVENTS_HARDWARERECEIVEPACKET_H_

#include "HardwareEvents.h"

class HardwareReceivePacket : public HardwareEvents {
	public:

		HardwareReceivePacket();

		void executeEvent() override ; /* Overridden here*/

		virtual ~HardwareReceivePacket();
};

#endif /* EVENTBASE_HARDWAREEVENTS_HARDWARERECEIVEPACKET_H_ */

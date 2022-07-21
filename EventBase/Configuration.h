/*
 * Configuration.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTBASE_CONFIGURATION_H_
#define EVENTBASE_CONFIGURATION_H_


enum Priority_t
{
	//NAN=-1,/* Only for initialization  CTORs of the parent Classes */
	LOW,
	MEDIUM,
	HIGH
};
 enum Event_t
{
	HW_SENDPACKET = 1,
	HW_RECEIVEPACKET,
	SYS_SLEEP,
	SYS_WAKEUP,
	SYS_SHUTDOWN
};

#endif /* EVENTBASE_CONFIGURATION_H_ */

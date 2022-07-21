/*
 * EventGenerator.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef EVENTGENERATOR_H_
#define EVENTGENERATOR_H_
#include <thread>

#include "EventBase/EventsBase.h"
#include "EventBase/Configuration.h"
#include "EventBase/HardwareEvents/HardwareSendPacket.h"
#include "EventBase/HardwareEvents/HardwareReceivePacket.h"
#include "EventBase/SoftwareEvents/SystemShutdown.h"
#include "EventBase/SoftwareEvents/SystemSleep.h"
#include "EventBase/SoftwareEvents/SystemWakeup.h"
#include "EventManager.h"
/*-------------------------------------------------------------------------------------------------------------------*/


class EventGenerator {
	private :
		int frequency;
		std::thread* GeneratorThread ;
		EventManager& Manager; /* Manager class instance */


	public:

		EventGenerator(int );

		EventsBase* Factorygenerator (int); /*--> Factory Function to Create Objects of Events Based on the Int passed to it*/
		void generationStart();	 			/*--> Function to Start the Thread only.. */
		void generationStop(); 				/*-->Function to Stop Thread only..*/
		void generate(); 					/*Generate a Random number --> Pass it to Factory generator --> Pass an random event
						   	   	      	  	  ---> PostEvent (EventManager Function ) to be added to the Queue */

		virtual ~EventGenerator();
};

#endif /* EVENTGENERATOR_H_ */

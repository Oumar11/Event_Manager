/*
 * Mini Project.cpp
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar
 */

#include <iostream>
#include <string>
#include <thread>

#include "EventGenerator.h"
#include "EventManager.h"
#include "EventBase/HardwareEvents/HardwareSendPacket.h"

int main ()
{

	EventGenerator Generator(1000);
	Generator.generationStart();

	while (1);


return 0 ;
}



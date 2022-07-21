/*
 * EventsBase.cpp
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#include "EventsBase.h"

EventsBase::EventsBase(): priority(LOW) {


}
Priority_t EventsBase::getPriority() const {
		return priority;
	}
EventsBase::~EventsBase() {

}


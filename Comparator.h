/*
 * Comparator.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar
 */

#ifndef COMPARATOR_H_
#define COMPARATOR_H_
#include "EventBase/EventsBase.h"

class Comparator
{
public :
	bool operator()(EventsBase* ob1,EventsBase* ob2)
	{
		return ob1->getPriority() < ob2->getPriority();
	}

};



#endif /* COMPARATOR_H_ */

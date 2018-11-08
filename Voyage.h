/*
 * Voyage.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef VOYAGE_H_
#define VOYAGE_H_

#include <iostream>
using namespace std;

#include "Ligne.h"
#include <list>

template <class To, class Td >
class Voyage {
	To *origine;
	Td *destination;
	list<Ligne <Moyen,To,Td>*> ListeLigne;

public:

	Voyage(To *_origine,Td *_destination,list<Ligne <Moyen,To,Td>*> _ListeLigne){
		origine=_origine;
		destination=_destination;

	}
	virtual ~Voyage();
};

#endif /* VOYAGE_H_ */

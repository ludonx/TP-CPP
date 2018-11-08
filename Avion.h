/*
 * Avion.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef AVION_H_
#define AVION_H_

#include "Moyen.h"

class Avion: public Moyen {
public:
	Avion(double _capacite=1000, double _vitesse=250, double _empreinte=1.5);
	virtual ~Avion();
};

#endif /* AVION_H_ */

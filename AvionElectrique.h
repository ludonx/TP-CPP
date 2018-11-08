/*
 * AvionElectrique.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef AVIONELECTRIQUE_H_
#define AVIONELECTRIQUE_H_

#include "Moyen.h"

class AvionElectrique: public Moyen {
public:
	AvionElectrique(double _capacite=100, double _vitesse=400, double _empreinte=6);
	virtual ~AvionElectrique();
};

#endif /* AVIONELECTRIQUE_H_ */

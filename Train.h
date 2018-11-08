/*
 * Train.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef TRAIN_H_
#define TRAIN_H_

#include "Moyen.h"

class Train: public Moyen {
public:
	Train(double _capacite=150, double _vitesse=700, double _empreinte=18);
	virtual ~Train();
};

#endif /* TRAIN_H_ */

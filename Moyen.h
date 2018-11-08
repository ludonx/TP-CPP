/*
 * Moyen.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef MOYEN_H_
#define MOYEN_H_

class Moyen {
public:
	double capacite;
	double vitesse;
	double empreinte;
public:
	Moyen(double _capacite, double _vitesse, double _empreinte);
	virtual ~Moyen();
};

#endif /* MOYEN_H_ */

/*
 * Ligne.h
 *
 *  Created on: 5 nov. 2018
 *      Author: ludovik
 */

#ifndef LIGNE_H_
#define LIGNE_H_
#include "Moyen.h"
//#include "Terminal.h" !!!!
//// !!!!!!
template <class Tm, class To, class Td >
class Ligne {
public:
	Tm *moyen;
	To *origine;
	Td *destination;
	double frequence;
	double distance;// la distance entre l'origine et la destination

public:
	Ligne(Tm *_moyen ,To *_origine,Td *_destination,double _frequence=0,double _distance=0)
	{

		moyen=_moyen;
		origine=_origine;
		destination=_destination;
		frequence=_frequence;
		distance=_distance;

	};
	//virtual ~Ligne();
};

#endif /* LIGNE_H_ */

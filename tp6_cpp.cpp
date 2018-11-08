//============================================================================
// Name        : tp6_cpp.cpp
// Author      : ludovik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Moyen.h"
#include "Avion.h"
#include "AvionElectrique.h"
#include "Train.h"

#include "Ligne.h"

int main() {
	Moyen *a= new Avion();
	Moyen *b= new AvionElectrique();
	Moyen *c= new Train();


	Ligne <Moyen,Moyen,Moyen> x(a,b,c,10,40);
	Ligne <Moyen,Moyen,Moyen> *y=new Ligne <Moyen,Moyen,Moyen>(a,b,c,10,40) ;


	cout<< x.destination->capacite;
	cout<< y->destination->capacite;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

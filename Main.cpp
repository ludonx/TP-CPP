#include "Tests.h"

int main()
{
  if(testMobile1())
    std::cout << "--TestMobile1 reussi" << std::endl << std::endl;
  else
    std::cout << "--TestMobile1 rate" << std::endl << std::endl;

  if(testMobile2())
    std::cout << "--TestMobile2 reussi" << std::endl << std::endl;
  else
    std::cout << "--testMobile2 rate" << std::endl << std::endl;

  if(testSimulation1())
    std::cout << "--testSimulation1 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSimulation1 rate" << std::endl << std::endl;

  if(testSimulation2())
    std::cout << "--testSimulation2 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSimulation2 rate" << std::endl << std::endl;

  if(testSimulation3())
    std::cout << "--testSimulation3 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSimulation3 rate" << std::endl << std::endl;

  if(testSimulation4())
    std::cout << "--testSimulation4 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSimulation4 rate" << std::endl << std::endl;

  if(testVecteur3D())
    std::cout << "--testVecteur3D reussi" << std::endl << std::endl;
  else
    std::cout << "--testVecteur3D rate" << std::endl << std::endl;

  if(testTerre())
    std::cout << "--testTerre reussi" << std::endl << std::endl;
  else
    std::cout << "--testTerre rate" << std::endl << std::endl;

  if(testSatellite1())
    std::cout << "--testSatellite1 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSatellite1 rate" << std::endl << std::endl;

  if(testSatellite2())
    std::cout << "--testSatellite2 reussi" << std::endl << std::endl;
  else
    std::cout << "--testSatellite2 rate" << std::endl << std::endl;

  if(testLune())
    std::cout << "--testLune reussi" << std::endl << std::endl;
  else
    std::cout << "--testLune rate" << std::endl << std::endl;
  return 0;
}

#include "CPPAtrSet_01.h"

UCPPAtrSet_01::UCPPAtrSet_01(){
	InitHealth_01(120000); // Init + property name works because of having macros 
	InitShield_01(800000); // Init + property name works because of having macros 
	//InitMagic_01(); // Init + property NOT works because of no macros 
	//InitSuperMagic_01(); // Init + property NOT works because of no macros 

}

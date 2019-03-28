//C-Storm, an extensive library for C.
//This header file is a part of C-Storm project.
#include <math.h>
int getBinaryToDecimal(long binaryNumber){
	int decimalNumber=0, count, rem;

	for(count=0;binaryNumber>0;count++){
		rem = binaryNumber%10;
		decimalNumber += pow(2,count)*rem;
		binaryNumber /= 10;
	}
	return decimalNumber;
}

//******************************************************************************

long getDecimalToBinary(int decimalNumber){
	int power, count, rem;
	long binaryNumber=0;

	for(count=0;decimalNumber>0;count++){
		power = pow(10,count);
		rem = decimalNumber%2;
		binaryNumber += rem*power;
		decimalNumber /= 2;
	}
	return binaryNumber;

}

//******************************************************************************

int getDecimalToOctal(int decimalNumber){
	int octalNumber=0, count, rem;

	for(count=0;decimalNumber>0;count++){
		rem = decimalNumber%8;
		octalNumber += rem*pow(10,count);
		decimalNumber /= 8;
	}
	return octalNumber;
}

//******************************************************************************

int getOctalToDecimal(int octalNumber){
	int decimalNumber=0, count, rem;

	for(count=0;octalNumber>0;count++){
		rem = octalNumber%10;
		decimalNumber += rem*pow(8,count);
		octalNumber /= 10;
	}
	return decimalNumber;
}

//******************************************************************************

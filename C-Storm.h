//C-Storm, a open soure project by Students for Students...
/*contributors at a glance: Arnab Maji(GitHub: arnabmaji19)
*/

#include <math.h>

//*******************************************************************************************************************************************

long getFactorial(int num){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	if(num<0) return -1;

	if(num<=1) return 1;

	long fact=1;
	int i;

	for(i=1;i<=num;i++){
		fact *= i;
	}

	return fact;
}

//*******************************************************************************************************************************************

int isPrime(int num){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	if(num<2) return -1;

	int isPrime = 1;

	int lim = sqrt(num);
	int i;

	for(i=2;i<=lim;i++){
		if(num%i==0){
			isPrime = 0;
			break;
		}
	}

	return isPrime;


}

//*******************************************************************************************************************************************

void swap(int *num1, int *num2){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int c;
	c = *num1;
	*num1 = *num2;
	*num2 = c;
}

//*******************************************************************************************************************************************

int binaryToDecimal(long binaryNumber){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int decimalNumber=0, count, rem;

	for(count=0;binaryNumber>0;count++){
		rem = binaryNumber%10;
		decimalNumber += pow(2,count)*rem;
		binaryNumber /= 10;
	}
	return decimalNumber;
}

//*******************************************************************************************************************************************

long decimalToBinary(int decimalNumber){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
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

//*******************************************************************************************************************************************

int decimalToOctal(int decimalNumber){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int octalNumber=0, count, rem;

	for(count=0;decimalNumber>0;count++){
		rem = decimalNumber%8;
		octalNumber += rem*pow(10,count);
		decimalNumber /= 8;
	}
	return octalNumber;
}

//*******************************************************************************************************************************************

int octalToDecimal(int octalNumber){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int decimalNumber=0, count, rem;

	for(count=0;octalNumber>0;count++){
		rem = octalNumber%10;
		decimalNumber += rem*pow(8,count);
		octalNumber /= 10;
	}
	return decimalNumber;
}

//*******************************************************************************************************************************************

void getHeart(){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int row=19, ptr, col;
	for(col=1;col<=13;col++){
		if(col>=1 && col<=4){
			for(ptr=1;ptr<=row;ptr++){
				if((ptr>=(3-(col-1)) && ptr<=(7+(col-1))) || (ptr>=(13-(col-1)) && ptr<=(17+(col-1)))){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		else{
			for(ptr=1;ptr<=row;ptr++){
				if(ptr<=(col-4) || ptr>(row-(col-4))){
						printf(" ");
						}
				else{
						printf("*");
					}
				}
			}
		printf("\n");
	}
}

//*******************************************************************************************************************************************

int getReversedNumber(int num) { //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int numRev=0, i=1, temp, pw, rem, digSum=0;

	while(num > pow(10,i)){
		i++;
	}

	i--;
	temp = num;

	while(temp > 0){
		pw = pow(10,i--);
		rem = temp / pw;
		digSum += (++rem);
		numRev += rem*pw;
		temp %= pw;
	}

	return numRev;
}

//*******************************************************************************************************************************************

int getDigitalRoot(int number){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int rem, digSum=0;

	while(number>0){
		rem = number%10;
		digSum += rem;
		number /= 10;
		if(number == 0){
			if(digSum>9){
				number = digSum;
				digSum = 0;
			}
		}
	}

	return digSum;
}

//*******************************************************************************************************************************************

void numberToWord(int num){ //Contributed By Arnab Maji(GitHub: arnabmaji19)
	int temp, digit, count=0, pw;

	temp = num;

	while(temp > 0){
		temp /= 10;
		count++;
	}
	temp = num;
	while(temp > 0){
		pw = pow(10,--count);
		digit = temp/pw;
			switch(digit){
			case 0: printf("zero ");
				break;
			case 1: printf("one ");
				break;
			case 2: printf("two ");
				break;
			case 3: printf("three ");
				break;
			case 4: printf("four ");
				break;
			case 5: printf("five ");
				break;
			case 6: printf("six ");
				break;
			case 7: printf("seven ");
				break;
			case 8: printf("eight ");
				break;
			case 9: printf("nine ");
				break;
		}
		temp %= pw;
	}

}

//*******************************************************************************************************************************************

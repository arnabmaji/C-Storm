//C-Storm, an extensive library for C.
//This header file is a part of C-Storm project.
#include <math.h>

long getFactorial(int num){
	if(num<0) return -1;

	if(num<=1) return 1;

	long fact=1;
	int i;

	for(i=1;i<=num;i++){
		fact *= i;
	}

	return fact;
}

//******************************************************************************

int isPrime(int num){
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

//******************************************************************************

int isAutomorphic(int number){
	int power, sqNumber, digits, rem;

	sqNumber = number * number;

	digits = log10(number) + 1;
	power = pow(10,digits);

	rem = sqNumber % power;

	if(rem == number)
		return 1;

	return 0;
}

//******************************************************************************

void getFibonacciSeries(int limit){
	int count=2, digit1=0,digit2=1, nextDigit;

	printf("Fibonacci Series:\n");

	if(limit == 1){
		printf("%d",digit1);
	}
	else {
		printf("%d %d ",digit1,digit2);

		for(count=3;count<=limit;count++){
			nextDigit = digit1 + digit2;
			printf("%d ",nextDigit);
			digit1 = digit2;
			digit2 = nextDigit;
		}
	}
}

//******************************************************************************

void swap(int *num1, int *num2){
	int c;
	c = *num1;
	*num1 = *num2;
	*num2 = c;
}

//******************************************************************************

int getReversedNumber(int num) {
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

//******************************************************************************

int getDigitalRoot(int number){
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

//******************************************************************************

void printNumberToWord(int num){
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

//******************************************************************************

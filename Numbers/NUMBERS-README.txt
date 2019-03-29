# This file contains all the functions' details used in the "Numbers.h" header.
# SPECILA NOTE FOR LINUX USERS: ALWAYS LINK MATH WHILE USING THIS HEADER FILE EVEN WHEN YOU DON'T USE ANY MATH FUNCTIONS,
BECAUSE SOME OF THE INCLUDED FUNCTIONS ARE USING STANDARD MATH FUNCTIONS.

1.long getFactorial(int)

	//Returns factorial of a number.

	argument-type: int
	return-type: long

	**returns -1 for invalid numbers.

2. int isPrime(int)

	//Returns 1 if number is prime else 0.

	argument-type: int
	return-type: int

	**returns -1 for invalid numbers.

3. void swap(int*)

	//swaps value of two numbers.

	**use '&' while sending parameters.

	argument-type: int*
	return-type: void

4. int isAutomorphic(int)

	//Returns 1 if a number is Automorphic, 0 otherwise.

argument-type: int
return-type: int

5. void getFibonacciSeries(int)

	//Prints Fibonacci Series upto a certain limit

	argument-type: int
	return-type: void

6. int getReversedNumber(int)

	//Reverses a number and returns it

	argument-type: int
	return-type: int

7. int getDigitalRoot(int)

	//Returns digital root of given number

	argument-type: int
	return-type: int

8. void printNumberToWord(int)

	//Prints given number to word

	argument-type: int
	return-type: void

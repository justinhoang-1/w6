/*
	==================================================
	Workshop #6 (Part-1):
	==================================================
	Name   : Justin Hoang
	ID     : 021569132
	Email  : jhoang11@myseneca.ca
	Section: NCC
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>

// User Libraries
#include "w6p1.h"

	// 1. Get user input of int type and validate for a positive non-zero number
	//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* test)
{
	int posIntNumber;
	test = &posIntNumber;
	int a = 0;

		do
		{
			scanf("%d", test);
			if (test > 0)
			{
				a++;
			}
			else
			{
				printf("ERROR: Enter a positive value: ");
			}
			
		} while (a < 1);
		return posIntNumber;
}

	// 2. Get user input of double type and validate for a positive non-zero number
	//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* numDouble)
{
	double posDoubleNumber = 0.0;
	int a = 0;
	do
	{
		scanf("%lf", &posDoubleNumber);
		if (posDoubleNumber > 0)
		{
			a++;
			
		}
		else
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (a < 1);


	return posDoubleNumber;
}
	// 3. Opening Message (include the number of products that need entering)
void openingMessage(void)
{
	printf("===========================\n");
	printf("Starting Main Program Logic\n");
	printf("===========================\n\n");

	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
	printf("Enter the details for 3 dry food bags of product data for analysis.\n");
	printf("NOTE: A 'serving' is 64g");
}

// 4. Get user input for the details of cat food product


// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}
// 6. Display a formatted record of cat food data


// 7. Logic entry point
int start(void)
{
	int i;
	int num;
	int numDouble;
	printf("For each of these tests, enter the following\n");
	printf("three values(space delimited) : -1 0 24\n");

	getIntPositive(&num);
	getDoublePositive(&numDouble);

	
	openingMessage();

	return 0;
}
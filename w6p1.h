/*
	==================================================
	Workshop #6 (Part-1):
	==================================================
	Name   :Justin Hoang
	ID     :021569132
	Email  :jhoang11@myseneca.ca
	Section:NCC
*/

#define MAX_PRODUCT 3
#define SUGGESTED_SERVING 64
// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
	int sku;
	double productPrice;
	int caloriesPerServing;
	double productWeight;
};


// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* positiveInt);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* positiveDouble);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(void);

// 4. Get user input for the details of cat food product


// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data


	// 7. Logic entry point






/*
Chawon White - 000833921
CS441 - Software Engineering
Group Project - Ingredient Class
Ingredient.h - Ingredient class file with defined functions.
*/

#include <iostream>
using std::cout;
using std::endl;
#ifndef _INGREDIENT_
#define _INGREDIENT_

/*
Enumeration for Price:
Price of ingredient is represented by low, mid, or high.
As of 10/07/2019, price is not represented by a dollar 
amount.
*/
enum price
{
	low = 1;
	mid = 2;
	high = 3;
}

/*
Enumeration for Type:
Type of ingredient is either liquid or garnish.
*/
enum type
{
	liquid, garnish;
}

/*
Ingredient Class:
The ingredient class is one of the base classes for the
project. This class is used by other classes.
*/
class Ingredient
{
private:
	string name;
	type iType;
	int proof;
	price iPrice;
public:
	Ingredient(string newN, type newT, int newI, price newP);
	void setIngredient(string newN, type newT, int newI, price newP);
	string getName();
	type getType();
	int getProof();
	price getPrice();
}

/*
Ingredient():
The ingredient constructor- for now, we assume that an ingredient
will get all of the necessary parts at creation. To make one code
path, this constructor calls setIngredient().
*/
Ingredient::Ingredient(string newN, type newT, int newI, price newP)
{
	this->setIngredient(newN, newT, newI, newP);
}

/*
void setIngredient():
The main function in the ingredient class. Each piece of data is 
passed in when an instance of this class is created.
*/
void Ingredient::setIngredient(string n, type t, int i, price p)
{
	this->name = n;
	this->iType = t;
	this->proof = i;
	this->iPrice = p;
}

/*
string getName():
Returns the name of the ingredient.
*/
string Ingredient::getName()
{
	return this->name;
}

/*
type getType():
Returns the type enumeration.
*/
type Ingredient::getType()
{
	return this->iType;
}

/*
int getProof():
Returns the proof as an int.
*/
int Ingredient::getProof()
{
	return this->proof;
}

/*
price getPrice()
Returns the price enumeration.
*/
price Ingredient::getPrice()
{
	return this->iPrice;
}


#endif
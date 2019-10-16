#include <iostream>
#include <string>
#include "Ingredient.h"
#include "Cabinet.h"
#include "Recipe.h"
#include "User.h"
#include "Drink.h"

int main()
{
createDrink();
return 0;
}

void createDrink()
{
string testName;
std::cout << "Enter a drink name:" << endl;
std::cin >> testName;

string i1,i2,i3;
std::cout << "Enter three ingredients: " << endl;
std::cin >> i1;
std::cin >> i2;
std::cin >> i3;

vector <std::string> i;
i.push(i1);
i.push(i2);
i.push(i3);

vector <std::string> t;
t.push("Throw it in a bowl");
t.push("Stir it up");
t.push("Burn it");
Recipe testRecipe();
testRecipe.setRecipe(t);
Drink test(testName, i, t);
std::cout << test.getName() << endl;
test.getIngredients();
test.getRecipe();
}
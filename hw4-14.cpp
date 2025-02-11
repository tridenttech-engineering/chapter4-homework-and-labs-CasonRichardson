// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {

double smallPizzas = 0.0;
double mediumPizzas = 0.0;
double largePizzas = 0.0;
double familyPizzas = 0.0;
double totalPizzas = 0.0;

double smallPercentage = 0.0;
double mediumPercentage = 0.0;
double largePercentage = 0.0;
double familyPercentage = 0.0;

cout << "ENTER SMALL PIZZAS SOLD: ";
cin >> smallPizzas;
cout << "ENTER MEDIUM PIZZAS SOLD: ";
cin >> mediumPizzas;
cout << "ENTER LARGE PIZZAS SOLD: ";
cin >> largePizzas;
cout << "ENTER FAMILY PIZZAS SOLD: ";
cin >> familyPizzas;

totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;
smallPercentage = (smallPizzas / totalPizzas) * 100;
mediumPercentage = (mediumPizzas / totalPizzas) * 100;
largePercentage = (largePizzas / totalPizzas) * 100;
familyPercentage = (familyPizzas / totalPizzas) * 100;

cout << "Total Pizzas Sold: " << totalPizzas << endl;
cout << "Percentage of Small Pizzas sold: " << smallPercentage << endl;
cout << "Percentage of Medium Pizzas sold: " << mediumPercentage << endl;
cout << "Percentage of Large Pizzas sold: " << largePercentage << endl;
cout << "Percentage of Family Pizzas sold: " << familyPercentage << endl;

return 0;
} // end of main function

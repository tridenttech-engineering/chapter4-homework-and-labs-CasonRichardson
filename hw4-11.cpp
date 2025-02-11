// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {

  double salePrice = 0.0;
  double taxRate = 0.0;
  double salesTax = 0.0;
  double cost = 0.0;

  cout << "Enter the sale price: ";
  cin >> salePrice;
  cout << "Enter the sales tax rate: ";
  cin >> taxRate;

  salesTax = salePrice * taxRate;

  cost = salePrice + salesTax;

  cout << "Cost: $" << cost << endl;
  
return 0;
} // end of main function

make test_hw4-11
./test_files/test_hw4-11

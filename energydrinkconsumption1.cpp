/*
File name: energydrinkconsumption1.cpp
Date: 9/18/2025
purpose:A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks.
Write a program that displays the following: The approximate number of customers in the survey who purchase
one or more energy drinks per week. The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
*/


#include <iostream>
using namespace std;


int main()
{
    int totalCustomers = 16500;
    double energyDrinkPerWeekPercentage = 0.15;
    double citrusFlavorPercentage = 0.58;

    int energyDrinkCustomers = totalCustomers * 0.15;
    int citrusFlavorCustomers = energyDrinkCustomers * 0.58;

    cout << "number of customers who purchase one or more energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "number of customers who prefer citrus-flavored energy drinks: " << citrusFlavorCustomers << endl;

    return 0;
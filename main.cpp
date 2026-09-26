// This program estimates energy drink purchasing preferences from survey data.

#include <iostream>
using namespace std;

int main() {

    const int TOTAL_CUSTOMERS = 16500;
    const double ENERGY_DRINK_PERCENT = 0.15;
    const double CITRUS_PERCENT = 0.58;

    int energyDrinkCustomers = TOTAL_CUSTOMERS * ENERGY_DRINK_PERCENT;
    int citrusCustomers = energyDrinkCustomers * CITRUS_PERCENT;

    cout << "Customers who purchase energy drinks: " << energyDrinkCustomers << endl;
    cout << "Customers who prefer citrus energy drinks: " << citrusCustomers << endl;

    return 0;

}
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Cleaning Service" << endl;
    cout << "===================" << endl;

    cout << "Charges\nSmall Room : $20\nLarge Room: $30\nSales Tax: 6%\n\n" << endl;

    cout << "Number of Small Room you want to clean: ";
    short int small_room_to_clean{0};
    cin >> small_room_to_clean;

    cout << "\nNumber of Large Room you want to clean: ";
    short int large_room_to_clean{0};
    cin >> large_room_to_clean;

    double small_room_charge{25};
    double large_room_charge{35};
    double small_room_cost = small_room_charge * small_room_to_clean;
    double large_room_cost = large_room_charge * large_room_to_clean;

    long double total_cost = small_room_cost + large_room_cost;

    double tax_rate = 0.06;
    long double tax = total_cost * tax_rate;

    long double estimate_cost = tax + total_cost;
    short int service_validity = 30;

    cout << "==============================" << endl;
    cout << "Small Room : " << small_room_to_clean << " X " << small_room_charge << " = " << small_room_cost << endl;
    cout << "Large Room : " << large_room_to_clean << " X " << large_room_charge << " = " << large_room_cost << endl;
    cout << "==============================" << endl;
    cout << "Cost: " << total_cost << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total Estimated Cost: " << estimate_cost << endl;
    cout << "Service is valid for " << service_validity << endl;


}
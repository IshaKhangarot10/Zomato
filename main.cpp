#include <iostream>
#include <windows.h>
#include "ZomatoApp.h"
using namespace std;

int main() {
    ZomatoApp* zomato = new ZomatoApp();
// in terminal, i have to run chcp 65001 first for correct rupee symbol
    
    User* user = new User(101, "Aditya", "Delhi");
    cout << "User: " << user->getName() << " is active." << endl;

    // User searches for restaurants by location
    vector<Restaurant*> restaurantList = zomato->searchRestaurants("Delhi");

    if (restaurantList.empty()) {
        cout << "No restaurants found!" << endl;
        return 0;
    }
    cout << "Found Restaurants:" << endl;
    for (auto restaurant : restaurantList) {
        cout << " - " << restaurant->getName() << endl;
    }
    zomato->selectRestaurant(user, restaurantList[0]);

    cout << "Selected restaurant: " << restaurantList[0]->getName() << endl;

    zomato->addToCart(user, "P1");
    zomato->addToCart(user, "P2");

    zomato->printUserCart(user);

    // User checkout the cart
    Order* order = zomato->checkoutNow(user, "Delivery", new UpiPaymentStrategy("1234567890"));
    
    // User pay for the cart. If payment is success, notification is sent.
    zomato->payForOrder(user, order);

    // Cleanup Code.
    delete zomato;
    delete user;
    
    return 0;
}
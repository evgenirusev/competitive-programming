#include <bits/stdc++.h>
using namespace std;

int main() {
    int ridesCount, mTicketRidesCount, priceForOneRide, mTicketPrice; 
    cin >> ridesCount;
    cin >> mTicketRidesCount;
    cin >> priceForOneRide;
    cin >> mTicketPrice;

    if (((double)mTicketPrice / (double)mTicketRidesCount) > priceForOneRide) {
        cout << priceForOneRide * ridesCount;
    } else {
        int divisionResult = ridesCount / mTicketRidesCount;

        if (ridesCount % mTicketRidesCount == 0) {
            cout << divisionResult * mTicketPrice;
        } else {
            int leftOver = ridesCount % mTicketRidesCount;
            int priceFromMTickets = (divisionResult * mTicketPrice);

            if (leftOver * priceForOneRide < mTicketPrice) {
                cout << priceFromMTickets + (leftOver * priceForOneRide);
            } else {
                cout << priceFromMTickets + mTicketPrice;
            }
        }
    }
}

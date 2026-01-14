#include <iostream>
using namespace std;
int main() {
    int totalSeats, reservedSeat;
    char choice;
    int seat[100] = {0}; 
    cout << "Enter total number of seats in cinema: ";
    cin >> totalSeats;
    do {
        cout << "\nAvailable seats:\n";
        for (int i = 1; i <= totalSeats; i++) {
            if (seat[i] == 0) 
                cout << "[" << i << "] ";
        }
        cout << "\n\nWhich seat number do you want to reserve? ";
        cin >> reservedSeat;
        if (reservedSeat < 1 || reservedSeat > totalSeats) {
            cout << "Invalid seat number!\n";
        } 
        else if (seat[reservedSeat] == 1) {
            cout << "Seat " << reservedSeat << " is already reserved!\n";
        } 
        else {
            seat[reservedSeat] = 1;
            cout << "\nSeat " << reservedSeat << " has been reserved!\n";
        }
        cout << "\nUpdated seat map (available seats only):\n";
        for (int i = 1; i <= totalSeats; i++) {
            if (seat[i] == 0)
                cout << "[" << i << "] ";
        }
        cout << "\n\nDo you want to reserve another seat? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "\nThank you for booking!\n";
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

void displayOriginalArt();
void displayHotAirBalloon();
void exitProgram();

int main() {
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Display Original Art" << endl;
        cout << "2. Display Hot Air Balloon" << endl;
        cout << "3. Exit" << endl;
        cout << "Input your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayOriginalArt();
                break;
            case 2:
                displayHotAirBalloon();
                break;
            case 3:
                exitProgram();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

void displayOriginalArt() {
    cout << "               ____" << endl;
    cout << "              /    \\" << endl;
    cout << "             /      \\" << endl;
    cout << "             /   U   \\" << endl;
    cout << "             |   I   |" << endl;
    cout << "             |   C   |" << endl;
    cout << "             |       |" << endl;
    cout << "             \\      /" << endl;
    cout << "              \\     /" << endl;
    cout << "               \\   /" << endl;
    cout << "               =====" << endl;
    cout << "              \\ || /" << endl;
    cout << "                ||" << endl;
    cout << "                ####" << endl;
    cout << "                ####" << endl;
}

void displayHotAirBalloon() {
    int size;
    cout << "Enter the size of the hot air balloon (2 or above): ";
    cin >> size;

    int row = 0;

    while (row < size) {
        cout << setw(size - row) << setfill(' ') << "";
        cout << setw(2 * row + 1) << setfill('_') << "" << endl;
        row++;
    }

    int midRows = size * 2;
    int midCol = size * 2;
    int midCount = 0;

    while (row < midRows + size) {
        cout << setw(size - 1) << setfill(' ') << "";
        cout << "/";

        if (midCount < size) {
            if (midCount == size / 2) {
                cout << setw(midCol - 3) << setfill(' ') << "UIC";
            } else {
                cout << setw(midCol - 1) << setfill(' ') << "";
            }
            midCount++;
        } else {
            cout << setw(midCol - 1) << setfill(' ') << "";
        }

        cout << "\\" << endl;
        row++;
    }

    cout << setw(size - 1) << setfill(' ') << "";
    cout << setw(2 * size + 1) << setfill('=') << "" << endl;

    int basketRow = 0;
    while (basketRow < size) {
        cout << setw(size - 1) << setfill(' ') << "";
        cout << setw(2 * size + 1) << setfill('#') << "" << endl;
        basketRow++;
    }

    cout << setw(size - 1) << setfill(' ') << "";
    cout << "\\" << setw(2 * size - 1) << setfill(' ') << "" << "/" << endl;
}

void exitProgram() {
    cout << "Exiting..." << endl;
}

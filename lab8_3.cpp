#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age > 60) {
        cout << "Your character = Brook" << endl;
    } else if (age > 25) {
        int bounty;
        cout << "Enter your bounty: ";
        cin >> bounty;

        if (bounty > 500000000) {
            cout << "Your character = Jinbe" << endl;
        } else {
            cout << "Your character = Franky" << endl;
        }
    } else {
        int height;
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100) {  
            cout << "Your character = Chopper" << endl;
        } else if (height >= 100 && height < 180) {  
            cout << "Your character = Usopp" << endl;
        } else { 
            int bounty;
            cout << "Enter your bounty: ";
            cin >> bounty;

            if (bounty > 1100000000) {
                cout << "Your character = Zoro" << endl;
            } else {
                cout << "Your character = Sanji" << endl;
            }
        }
    }

    return 0;
}

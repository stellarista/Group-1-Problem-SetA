#include <iostream>
#include <string>
#include <iomanip>
#include "SodaCan.h"

using namespace std;

int main(){
	SodaCan can;
	string brand;
	int size;
	int contents;
	int choice;

	cout << "Welcome to Miyabi's Vending Machine!" << endl;
	cout << "Please plays your order! Your wish is my command!" <<endl;

    cout << "Please choose a number" << endl;
    cout << "1. Buy a drink" << endl;
    cout << "2. Combine drinks" << endl;
    cout << "3. Subtract the drink amount" << endl;
    cout << "4. Drink" << endl;
    cout << "5. Exit" << endl;
    cin >> choice;

			if(choice == 1){
				cout << "Type the brand: ";
				cin >> brand;
				cout << "Type the amount: ";
				cin >> contents;
				cout << "What size would you like?\n";
				cout << "1. Small\n";
				cout << "2. Medium\n";
				cout << "3. Large\n";
				cout << "Choose a number: ";
				cin >> size;
				can.setBrand(brand);
				can.pourInSoda(contents);
				can.setSize(size);

				cout << "Here's your drink! Enjoy~\n";
				cout << can.getContents() << " mL of " << can.getBrand();
				if(size == 1) cout << " in a small size cup.\n";
				else if(size == 2) cout << " in a medium size cup.\n";
				else if(size == 3) cout << " in a large size cup.\n";
			}
			else if(choice == 4)
            {
				int amount;
				cout << "How much do you want to drink? ";
				cin >> amount;
				can.drink(amount);

			}
			else if (choice == 5)
            {
				cout << "Thank You for coming! Come back soon!" << endl;
				break;
			}
            else
			{
				cout << "Please choose a number.\n";
			}

	return 0;
}

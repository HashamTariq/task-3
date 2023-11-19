#include <iostream>

// Function to calculate and display cost for slab 1
void costSlab1(int units) {
    int unitCost = 10;
    int slab1Units = units ;
    int cost = slab1Units * unitCost;

    std::cout << "Cost for slab 1: Rs." << cost << std::endl;
}

// Function to calculate and display cost for slab 2
void costSlab2(int units) {
    int unitCost = 15;
    int slab2Units = units ; 
    int cost = slab2Units * unitCost;

    std::cout << "Cost for slab 2: Rs." << cost << std::endl;
}

// Function to calculate and display cost for slab 3
void costSlab3(int units) {
    int unitCost = 20;
    int slab3Units = units;
    int cost = slab3Units * unitCost;

    std::cout << "Cost for slab 3: Rs." << cost << std::endl;
}

int main() {
    int studentID=1; // Assuming you have a variable for student ID

    // Display student ID at the top of the menu
    std::cout << "Student ID: " << studentID << std::endl;

    char choice;
    do {
        // Display menu options
        std::cout << "Menu:\n";
        std::cout << "1. Display the bill of slab 1 and slab 2\n";
        std::cout << "2. Display the bill of slab 3\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                // Get number of units from the user
                int units;
                std::cout << "Enter the number of units: ";
                std::cin >> units;

                // Calculate and display cost for slab 1 and slab 2
                if(units<=100){
                	costSlab1(units);
				}
                else if(units>100 && units<=200 )
                {
				costSlab2(units);
			}
			else
			{
				 std::cout << "limit exceed/recede \n";
				 break;
		    }
                break;

            case '2':
                // Get number of units from the user
                std::cout << "Enter the number of units: ";
                std::cin >> units;

                // Calculate and display cost for slab 3
               if(units>200 && units<=300) 
               {
				 costSlab3(units);
			}
                else
			     {
				 std::cout << "limit exceed/recede \n";
			
		        }
                break;

            case '3':
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != '3');

    return 0;
}


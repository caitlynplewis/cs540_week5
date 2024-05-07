/*
Skeleton code for External storage management
*/
/*
Caitlyn Lewis    # 932829852 cookcai@oregonstate.edu
*/

#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes-5.h"
using namespace std;


int main(int argc, char* const argv[]) {

    // Initialize the Storage Manager Class with the Binary .dat file name we want to create
    StorageManager manager("EmployeeRelation.dat");

    // Assuming the Employee.CSV file is in the same directory, 
    // we want to read from the Employee.csv and write into the new data_file
    manager.createFromFile("Employee-3.csv");

    // Searching for Employee IDs Using [manager.findAndPrintEmployee(id)]
    /***TO_DO***/ 
    int targetID = -1;
    while(true) {
        cout << "Enter an employee ID to find, or 0 to quit: ";
        cin >> targetID;
        if(targetID == 0){
            break;
        }
        manager.findAndPrintEmployee(targetID);
    }
    
    return 0;
}

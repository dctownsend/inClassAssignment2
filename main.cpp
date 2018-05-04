//
//  main.cpp
//  homework
//
//  Created by dakota townsend on 5/1/18.
//  Copyright © 2018 dakota townsend. All rights reserved.
//

#include <iostream>
#include "DayOfYear.hpp"

using namespace std;

int main() {
    int dayNumber;
    
    cout << "enter a day number between 1-365: ";
    cin >> dayNumber;
    
    while(dayNumber < 1 || dayNumber > 365) {
        cout << "invalid entry. enter any number between 1-365: ";
        cin >> dayNumber;
    }
    
    DayOfYear day(dayNumber);
    day.setEndOfMonths();
    
    day.setMonth();
    day.print();
    
    return 0;
}

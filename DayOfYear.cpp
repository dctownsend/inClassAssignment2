//
//  DayOfYear.cpp
//  homework
//
//  Created by dakota townsend on 5/3/18.
//  Copyright © 2018 dakota townsend. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class DayOfYear {
    public:
    DayOfYear(int day);
    DayOfYear(string month, int days);
    
    void print();
    DayOfYear& operator ++();
    DayOfYear& operator --();
    
    private:
    int day_year;
    int day_month;
    string month_name;
};

string month_names(int month_number) {
    string month_names[] = { "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December" };
    return month_names[month_number];
}

int month_days(int month_number){
    int months_days[] = {31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31 };
    return month_days[month_number];
};

DayOfYear:: DayOfYear(int day) {
    day_year = day;
    day_month = day_month;
    int i = 0;
    
    while(1) {
        if (day_month <= month_days(i)) {
            month_name = month_names(i);
            break;
        
    } else {
        day_month = day_month - month_days(i++);
        i = i % 12;
    }
  }
}

DayOfYear:: DayOfYear(string month, int day) {
    for(int i = 0; i <12; i++)
    if(month_names(i) == month){
        if(day > 0 && day <= month_days(i)) {
            month_name = month;
            day_month = day;
            day_year = 0;
            for(int j = 0; j < 12; j++) {
                day_year += month_days(j);
                day_year += day;
            }
        } else {
            cout << "incorrect date";
            exit(0);
        }
    }
}

void DayOfYear:: print() {
    cout "Day " << day_year << " would be " << month_name
    << "" << day_month << "\n";
}

DayOfYear& DayOfYear:: operator++() {
    day_month = day_month + 1;
    day_year = day_year + 1;
    for (int i = 0; i < 12; i++)
    if(month_name == month_names(i)) {
        if (day_month > month_name(i)) {
            day_month = 1;
            month_name = month_names((i + 1) % 12);
            if(i == 11)
            day_year = 1;
        }
        break;
    }
    return *this;
}

//
//  DayOfYear.hpp
//  homework
//
//  Created by dakota townsend on 5/1/18.
//  Copyright © 2018 dakota townsend. All rights reserved.
//

#ifndef DayOfYear_hpp
#define DayOfYear_hpp

#include <stdio.h>
#include<string>
using namespace std;

class DayOfYear {
private:
    int days;
    string months[12];
    int endOfMonths[13];
    static string dayMonth;
    static int restDays;
    
public:
    DayOfYear(int day);
    void print();
    void setEndOfMonths();
    void setMonth();
};

#endif /* DayOfYear_hpp */

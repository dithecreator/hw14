//
//  var.hpp
//  hw14
//
//  Created by Дима on 30.09.23.
//

#ifndef var_hpp
#define var_hpp
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Var{
 int myInt;
 double myDouble;
 char myChar;
 string myString;
    int type;
public:
    Var();
    Var(int);
    Var(double);
//    Var(char);
    Var(string);
    int toInt(Var& obj) const;
    double toDouble(Var& obj) const;
//    char toChar(Var& obj) const;
    string toString(Var& obj) const;
    Var operator=(const Var& obj);
    Var& operator=(const int& n);
    Var operator+(Var obj);
    Var operator-(Var obj);
    Var operator*(Var obj);
    Var operator/(Var obj);
    bool operator<(Var obj);
    bool operator>(Var obj);
    bool operator>=(Var obj);
    bool operator<=(Var obj);
    bool operator==(Var obj);
    bool operator!=(Var obj);
    Var& operator-=(Var& obj);
    Var& operator+=(Var& obj);
    Var& operator/=(Var& obj);
    Var& operator*=(Var& obj);
    void print();
};

#endif /* var_hpp */

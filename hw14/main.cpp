//
//  main.cpp
//  hw14
//
//  Created by Дима on 30.09.23.
//

#include <iostream>
#include <string>
#include "var.hpp"

using namespace std;
int main() {
//
    Var a = 15;
    Var b("Hello");
    
    if (a == b){
        cout << "a == b" << endl;
    }
    if(a != b){
        cout << "a < b" << endl;
    }
    Var c = 7.8;
    Var d("50");
    Var e = a + d;
    b = a + d;
    e.print(); // Выведет 65
}

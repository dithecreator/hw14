//
//  var.cpp
//  hw14
//
//  Created by Дима on 30.09.23.
//

#include "var.hpp"
#include <string>
#include <iostream>
using namespace std;

Var:: Var(){
    myInt = 0;
    myDouble = 0;
//    myChar = NULL;
    myString = ' ';
    type = 0;
    
}

Var:: Var(int v){
    myInt = v;
    type = 1;
}

Var:: Var(double v){
    myDouble = v;
    type = 2;
}

//Var:: Var(char v){
//    myChar = v;
//    type = 3;
//}

Var:: Var(string v){
    myString = v;
    type = 4;
}

int Var:: toInt(Var& obj) const{
    switch(type){
        case 1:
            return myInt;
            break;
        case 2:
            return (int)myDouble;
            break;
//        case 3:
//            return static_cast<int>(myChar);
//            break;
        case 3:
            return stoi(myString);
            break;
    }

    return 0;
}

double Var:: toDouble(Var& obj) const{
    switch(type){
        case 1:
            return (double)myInt;
            break;
        case 2:
            return myDouble;
            break;
//        case 3:
//            return static_cast<int>(myChar);
//            break;
        case 3:
            return stoi(myString);
            break;
    }

    return 0;
}

//char Var:: toChar(Var& obj) const{
//    switch(type){
//        case 1:
//            return static_cast<char>('0' + myInt);
//            break;
//        case 2:
//            return static_cast<char>('0' + static_cast<int>(myDouble));
//            break;
//        case 3:
//            return myChar;
//            break;
//     }
//
//    return NULL;
//}

string Var:: toString(Var& obj) const{
    switch(type){
        case 1:
           return to_string(myInt);
            break;
        case 2:
            return  to_string(myDouble);
            break;
        case 3:
            return string(myString);
            break;
     }

    return " ";
}

Var Var:: operator=(const Var& obj){
    if(this != &obj){
        switch (type) {
            case 1:
                myInt = 0;
                break;
                
            case 2:
                myDouble = 0;
                break;
//            case 3:
//                myChar = NULL;
//                break;
//
            case 3:
                myString = ' ';
                break;
        }
    }
    else{
        switch(type){
            case 1:
                myInt = obj.myInt;
                break;
            case 2:
                myDouble = obj.myDouble;
                break;
//            case 3:
//                myChar = obj.myChar;
//                break;
            case 3:
                myString = obj.myString;
                break;
        
    }
    }
    return *this;
}

Var& Var::operator=(const int& n){
    switch(type) {
    case 1:
        myInt = 0;
        break;
    case 2:
        myDouble = 0;
        break;
//    case 3:
//        myChar = NULL;
//        break;
    case 3:
            myString = ' ';
            break;
    }
    myInt = n;
    return *this;
}

Var Var:: operator+(Var obj){
    switch(type){
        case 1:
            return Var(myInt + toInt(obj));
            break;
            
        case 2:
            return Var(myDouble + toDouble(obj));
            break;
            
//        case 3:
//           return Var(myChar + toChar(obj));
//            break;
//
        case 3:
            return Var(myString + toString(obj));
            break;
        }

    return *this;
}

Var Var:: operator*(Var obj){
    switch(type){
        case 1:
            return Var(myInt * toInt(obj));
            break;
            
        case 2:
            return Var(myDouble * toDouble(obj));
            break;
            
    }
    return *this;
}


Var Var:: operator/(Var obj){
    switch(type){
        case 1:
            return Var(myInt / toInt(obj));
            break;
            
        case 2:
            return Var(myDouble / toDouble(obj));
            break;
  
   


}
    return *this;
}






Var& Var::operator+=(Var& obj){
    switch(type){
case 1:
    myInt += toInt(obj);
            return *this;
    break;

case 2:
    myDouble += toDouble(obj);
            return *this;
    break;

case 3:
    myString += toString(obj);
            return *this;
    break;
    }
    return *this;
    
}

Var& Var::operator/=(Var& obj){
    switch(type){
case 1:
    myInt /= toInt(obj);
            return *this;
    break;

case 2:
    myDouble /= toDouble(obj);
            return *this;
    break;


    
}
    
    return *this;
}
  
Var& Var::operator*=(Var& obj){
    switch(type){
case 1:
    myInt *= toInt(obj);
            return *this;
    break;

case 2:
    myDouble *= toDouble(obj);
            return *this;
    break;
    }
    
    return *this;


}
  


Var Var:: operator-(Var obj){
    switch(type){
        case 1:
            return Var(myInt - toInt(obj));
            break;
            
        case 2:
            return Var(myDouble - toDouble(obj));
            break;
    }
  
    return *this;
}
    
    Var& Var::operator-=(Var& obj){
        switch(type){
    case 1:
        myInt -= toInt(obj);
                return *this;
        break;

    case 2:
        myDouble -= toDouble(obj);
                return *this;
        break;

        }
        return *this;
        
    }


bool Var:: operator<(Var obj){
    switch(type){
        case 1:
            if(myInt < toInt(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
        case 2:
            if(myDouble < toDouble(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
            
        case 3:
            if(myString < toString(obj)){
            cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
    
 
    }
  
    return false;
}


bool Var:: operator>(Var obj){
    switch(type){
        case 1:
            if(myInt > toInt(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
        case 2:
            if(myDouble > toDouble(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
//        case 3:
//            if(myChar > toChar(obj)){
//            cout << "true" << endl;
//            }
//            else{
//                cout << "false" << endl;
//            }
//            break;
        case 3:
            if(myString > toString(obj)){
            cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
    
    }
    return false;
}
    
    
    bool Var:: operator>=(Var obj){
        switch(type){
            case 1:
                if(myInt >= toInt(obj)){
                    cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
                
            case 2:
                if(myDouble >= toDouble(obj)){
                    cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
                
//            case 3:
//                if(myChar >= toChar(obj)){
//                cout << "true" << endl;
//                }
//                else{
//                    cout << "false" << endl;
//                }
//                break;
                
            case 3:
                if(myString >= toString(obj)){
                cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
        
        }
        return false;
    }



bool Var:: operator<=(Var obj){
    switch(type){
        case 1:
            if(myInt <= toInt(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
        case 2:
            if(myDouble <= toDouble(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
//        case 3:
//            if(myChar <= toChar(obj)){
//            cout << "true" << endl;
//            }
//            else{
//                cout << "false" << endl;
//            }
//            break;
//
    
      case 3:
    if(myString <= toString(obj)){
    cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    break;
}
    return false;
}

    
    bool Var:: operator==(Var obj){
        switch(type){
            case 1:
                if(myInt == toInt(obj)){
                    cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
                
            case 2:
                if(myDouble == toDouble(obj)){
                    cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
                
//            case 3:
//                if(myChar == toChar(obj)){
//                cout << "true" << endl;
//                }
//                else{
//                    cout << "false" << endl;
//                }
//                break;
//
                
            case 3:
                if(myString == toString(obj)){
                cout << "true" << endl;
                }
                else{
                    cout << "false" << endl;
                }
                break;
        }
        return false;
    }



bool Var:: operator!=(Var obj){
    switch(type){
        case 1:
            if(myInt != toInt(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
        case 2:
            if(myDouble != toDouble(obj)){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
            
//        case 3:
//            if(myChar != toChar(obj)){
//            cout << "true" << endl;
//            }
//            else{
//                cout << "false" << endl;
//            }
//            break;
//
            
        case 3:
            if(myString != toString(obj)){
            cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
            break;
    }
    return false;
}

 void Var:: print(){
    switch (type) {
        case 1:
            cout << myInt << endl;
            break;
        case 2:
            cout << myDouble << endl;
            break;
//        case 3:
//            cout << myChar << endl;
//            break;
            
        case 3:
            cout << myString << endl;
            break;
        
        }
    
}



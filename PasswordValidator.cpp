//
//  main.cpp
//  Password Validator
//
//  Created by Jennifer Luna on 9/17/24.
//

#include <iostream>
#include <cassert>

using namespace std;

string validate (string password) {
    if(password.length() < 8){
        return "You need at least 8 characters!";
    }
    
    int numbersInPassword = 0;
    
    for(int i=0; i<password.length(); i++){
        char character = password[i];
        int charValue = character;
        
        //cout << "Value of character: " << charValue << endl;
        if(charValue >= 48 && charValue <= 57){
            // This is a number
            //cout << "Is number";
            numbersInPassword += 1;
        }
    }
    
    if(numbersInPassword < 2){
        return "You need at least 2 numbers!";
    }
    int UppercaseInPassword = 0;
    
    for(int i=0; i<password.length(); i++){
        char character = password[i];
        int charValue = character;
        
        //cout << "Value of character: " << charValue << endl;
        if(charValue >= 65 && charValue <= 90){
            // This is a number
        
            UppercaseInPassword += 1; }}
    
    if(UppercaseInPassword <1 ){
        return "You need at least one uppercase";
    }
    
    int specialCharInPassword = 0;
    
    for(int i=0; i<password.length(); i++){
        char character = password[i];
        int charValue = character;
        
        //cout << "Value of character: " << charValue << endl;
        if(charValue >= 33 && charValue <= 47){
            specialCharInPassword += 1;
        }
    }
    
    if(specialCharInPassword < 1){
        return "You need at least one special character.";
    }
    
    return "Password is valid.";
}

int main () {
    cout << "starting the test suite" << endl;
    
    assert (validate ("") == "You need at least 8 characters!");
    assert(validate("abcabcabc") == "You need at least 2 numbers!");
    assert (validate ("abcabc123") == "You need at least one uppercase");
    assert(validate("ABC123DEFG") == "You need at least one special character.");
    assert(validate("ABC123DEFG!") == "Password is valid.");
    
    cout << "All of the test passed!" << endl;
    
    return 0;
}

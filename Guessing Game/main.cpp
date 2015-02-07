#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()

{
    srand(time(0));
    int guess;
    int number = rand()%50 + 1 ;
    int tries;
    bool goOn = true;
    char answer;
    
    string mystr;
    
    cout << "Hey there! Welcome to the guessing game :) What's your name?" << endl;
    getline (cin, mystr );
    cout << "Welcome, " >> mystr >> "!" << endl;
    " You're about to play a guessing game.\n" << endl;
    cout;
    "
    
}
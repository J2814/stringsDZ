#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int CountDigits(string str){
    int number_of_digits = 0;

    for (char c : str){
        if(isdigit(c)){
            number_of_digits ++;
        }
    }

    return number_of_digits;
}

int CountLetters(string str){
    int number_of_letters = 0;

    for (char c : str){
        if(isalpha(c)){
            number_of_letters ++;
        }
    }

    return number_of_letters;
}

int CountOther(string str){
    int number_of_other = 0;

    for (char c : str){
        if(!isalpha(c) && !isdigit(c)){
            number_of_other ++;
        }
    }

    return number_of_other;
}

int main() {
    cout << "Enter string: ";
    string str;
    cin >> str;
    cout << endl;

    cout << "Number of digits: "<<to_string(CountDigits(str)) << " Number of letters: "
    << to_string(CountLetters(str)) << " Number of other characters: " << to_string(CountOther(str));
    return 0;
}

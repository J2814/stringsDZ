#include <iostream>

#include <string>

using namespace std;

//задание1
string Remove_char_at_pos(string str, int pos) {

    string new_string = str.substr(0, pos);
    string end = str.substr(pos+1);

    new_string.append(end); //s.append();


    return new_string;
}
int Count_instances_of_char(string str, char c);
//задание2
string Remove_every_instance_of_char(string str, char c){
    int unwanted_char_count = Count_instances_of_char(str, c);


    string temp = str;
    for (int i = 0; i < unwanted_char_count; i++){
        auto pos = temp.find(c);
        temp = temp.substr(0, pos) + temp.substr(pos + 1);
    }

    return temp;
}

//задание3
string Insert_char_at_pos(string str, char c, int pos){
    string new_string = str.substr(0, pos);
    string end_string = c + str.substr(pos);
    new_string.append(end_string);
    return new_string;
}

//задание4
string Replace_charA_with_charB(string str, char A, char B){

    string new_string = "";
    for (char c : str){
        if (c == A){
            new_string += B;
        }else{
            new_string += c;
        }
    }
    return new_string;
}

//задание5
int Count_instances_of_char(string str, char c){
    int number_of_c = 0;
    for (char i : str){
        if (i == c){
            number_of_c++;
        }
    }
    return number_of_c;
}

int main() {
    return 0;
}

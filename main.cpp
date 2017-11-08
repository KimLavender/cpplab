//
// Created by Lavender on 2017/11/8.
//

#include <iostream>

using namespace std;

class Student {
public:
    int number;
    int score;

    Student(int Number, int Score) : number(Number), score(Score) {}
};

Student student[5] = {
        Student(001, 85),
        Student(002, 93),
        Student(003, 81),
        Student(004, 79),
        Student(005, 88)
};

Student max();


int main(){
    cout << "The greatest student's number is " << max().number << endl;
}

Student max(){
    Student temp = student[0];
    for(int i = 1; i <5; i++){
        if(temp.score > student[i].score){
            continue;
        }
        else {
            temp = student[i]; }
    }
    return temp;
}
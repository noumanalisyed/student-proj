#include <iostream>
using namespace std;

class Student{
public:
    Student(){
        id = 0;
        name = "";
        cout<<"Student -- Default constructor called .."<<endl;
    }
    void display(){
        cout<<"Id = "<<id<<", Name = "<<name<<endl;
    }
    int id;
    string name;
};
int main() {
    int id[] = {100,200,300,400,500};
    string name[] = {"Ahmad","Shahid","Zahid","Muhammad","Ali"};
    const int size = 5;
    Student s[size];
   /* s[0].id = 100;
    s[0].name = "Ahmad";

    s[1].id = 200;
    s[1].name = "Shahid";*/
   for(int j = 0; j < size; j++){
       s[j].id = id[j];
       s[j].name = name[j];
   }
    for (int i = 0; i<size; i++) {
        s[i].display();
    }
    return 0;
}

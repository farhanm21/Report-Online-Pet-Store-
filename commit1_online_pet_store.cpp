#include <iostream>
#include <string>

using namespace std;

class Pet{

string name;
int age;
string vaccination_record;

public :
void EnterName(){
    cout<<" Enter Pet name : "<<endl; // I may use vector or array of objects in switch case 
    cin>>name;
}

void EnterAge(){
    cout<<" Enter Pet age : "<<endl;
    cin>>age;
}

void VaccinationRecord(){
    cout<<"Enter vaccination data  : "<<endl;
    cin>>vaccination_record;
}
};

class Cat : public Pet{

string breed;
string fur_colour;
int price;

public :

void EnterBreed(){
    cout<<"Enter Breed : "<<endl;   // I can use switch case to ask user and then create object of that pet class 
    cin>>breed;
}


void EnterFurColour(){
    cout<<" Enter Fur Colour : "<<endl;
    cin>>fur_colour;
}


};
class Dog : public Pet{

string breed;
string fur_colour;
int price;

public :

void EnterBreed(){
    cout<<"Enter Breed : "<<endl;   // I can use switch case to ask user and then create object of that pet class 
    cin>>breed;
}


void EnterFurColour(){
    cout<<" Enter Fur Colour : "<<endl;
    cin>>fur_colour;
}



};
class Bird : public Pet{

string breed;
string fur_colour;
int price;

public :

void EnterBreed(){
    cout<<"Enter Breed : "<<endl;   // I can use switch case to ask user and then create object of that pet class 
    cin>>breed;
}


void EnterFurColour(){
    cout<<" Enter Fur Colour : "<<endl;
    cin>>fur_colour;
}

};
class Fish : public Pet{

string breed;
string fur_colour;
int price;

public:

void EnterBreed(){
    cout<<"Enter Breed : "<<endl;   // I can use switch case to ask user and then create object of that pet class 
    cin>>breed;
}


void EnterFurColour(){
    cout<<" Enter Fur Colour : "<<endl;
    cin>>fur_colour;
}

};


int main(){


cout<<" 1. CAT 2 .DOG 3 . BIRD 4. FISH "<<endl;

int petType;
cout<<" Which Data do u want to enter : "<<endl;
cin>>petType;

switch (petType){

}


}
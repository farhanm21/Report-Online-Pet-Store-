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
    cout<<" Enter Pet age : "<<endl; // I have to create array of objects to store data 
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
 
//  SHOULD I USE IF/ELSE OUTSIDE TO ADD ANIMAL NUMBER 
cout<<" 1. CAT 2 .DOG 3 . BIRD 4. FISH "<<endl;

int petType;
cout<<" Which Data do u want to enter : "<<endl;
cin>>petType;

// FOR OWNER TO ADD DATA

switch (petType)
{
case 1 :{ // Make an array inside switch case 
int catNum;
cout<<"Enter How many Cat's Data You wish to enter : "<<endl;
cin>>catNum;

Cat *c1 = new Cat [catNum];

for(int i = 0 ; i < catNum ; i++){
    c1->EnterName();
    c1->EnterAge();
    c1->EnterBreed();
    c1->EnterFurColour();
    c1->VaccinationRecord();
}
break;
}
case 2 :{ 
int DogNum;
cout<<" Enter how many dog's data you wish to enter : "<<endl;
cin>>DogNum;
Dog *d1 = new Dog[DogNum];
for(int i = 0 ; i < DogNum ; i++){
    d1->EnterName();
    d1->EnterAge();
    d1->EnterBreed();
    d1->EnterFurColour();
    d1->VaccinationRecord();
}
break;
}
case 3:{ 
int BirdNum;
cout<<" Enter how many dog's data you wish to enter : "<<endl;
cin>>BirdNum;
Bird *b1 = new Bird[BirdNum];
for(int i = 0 ; i < BirdNum ; i++){
    b1->EnterName();
    b1->EnterAge();
    b1->EnterBreed();
    b1->EnterFurColour();
    b1->VaccinationRecord();
}
break;
}
case 4 :{ 
int FishNum;
cout<<" Enter how many dog's data you wish to enter : "<<endl;
cin>>FishNum; 
Fish *f1 = new Fish[FishNum];
for(int i = 0 ; i < FishNum ; i++){
   f1->EnterName();
   f1->EnterAge();
   f1->EnterBreed();
   f1->EnterFurColour();
   f1->VaccinationRecord();
}

break;
}

}
 
}
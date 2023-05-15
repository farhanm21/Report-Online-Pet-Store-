#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet { // Parent Class 
protected:
    string name;
    int age;
    string breed;
public:
   Pet(){}
   Pet(string name, int age, string breed) : name(name), age(age), breed(breed) {}
  
    void enterName() {
        cout << "Enter pet name: ";
        cin >> name;
    }

    void enterAge() {
        cout << "Enter pet age: ";
        cin >> age;
    }

    virtual void displayInfo() = 0;
};

class Cat : public Pet {
private:
    string breed;

public:
  Cat(){}
  Cat(string name, int age, string breed) : Pet(name, age, breed) {}
    void enterBreed() {
        cout << "Enter cat breed: ";
        cin >> breed;
    }

    void displayInfo() {
        cout << "Cat" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
    }
};

class Dog : public Pet {
private:
    string breed;

public:
 Dog(){}
 Dog(string name, int age, string breed) : Pet(name, age, breed) {}
    void enterBreed() {
        cout << "Enter dog breed: ";
        cin >> breed;
    }

    void displayInfo() {
        cout << "Dog" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl; 
        cout << "Breed: " << breed << endl;
    }
};

class Fish : public Pet {
private:
    string type;

public:
 Fish(){}
 Fish(string name, int age, string breed) : Pet(name, age, breed) {}
    void enterType() {
        cout << "Enter fish type: ";
        cin >> type;
    }

    void displayInfo() {
        cout << "Fish" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl; 
        cout << "Type: " << type << endl;
    }
};

class Bird : public Pet {
private:
    string species;

public:
 Bird (){}
 Bird(string name, int age, string breed) : Pet(name, age, breed) {}
    void enterSpecies() {
        cout << "Enter bird species: ";
        cin >> species;
    }

    void displayInfo() {
        cout << "Bird" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Species: " << species << endl;
    }
};

class PetStore {
private:
    vector<Pet*> pets;

public:
    void addPet(Pet* pet) {
        pets.push_back(pet);
    }

    void displayAllPets() {
        if (pets.empty()) {
            cout << "No pets available in the store." << endl;
        } else {
            cout << "----- Available Pets -----" << endl;
            for (Pet* pet : pets) {
                pet->displayInfo();
                cout << "--------------------------" << endl;
            }
        }
    }

    void buyPet(int index) {
        if (index >= 0 && index < pets.size()) {
            cout << "You bought the following pet:" << endl;
            pets[index]->displayInfo();
            delete pets[index];
            pets.erase(pets.begin() + index);
        } else {
            cout << "Invalid pet index." << endl;
        }
    }
};





int main() {
    
    int option;
    cout<<" WELCOME TO ONLINE PET STORE "<< endl;
    cout<<" PLEASE SELECT AN OPTION : "<<endl;
    cout<<"1) Trader "<<endl;
    cout<<"2) Buyer "<<endl;
    cin>>option;
    if (option == 1){
    vector<Pet*> pets;

    

    while (true) {
        cout << "1. Cat  2. Dog  3. Fish  4. Bird  5. Display All New Pets   6. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Cat* cat = new Cat();
                cat->enterName();
                cat->enterAge();
                cat->enterBreed();
                pets.push_back(cat);
                break;
            }
            case 2: {
                Dog* dog = new Dog();
                dog->enterName();
                dog->enterAge();
                dog->enterBreed();
                pets.push_back(dog);
                break;
            }
            case 3: {
                Fish* fish = new Fish();
                fish->enterName();
                fish->enterAge();
                fish->enterType();
                pets.push_back(fish);
                break;
            }
            case 4: {
                Bird* bird = new Bird();
                bird->enterName();
                bird->enterAge();
                bird->enterSpecies();
                pets.push_back(bird);
                break;
            }
            case 5: {
                cout << "----- All Pets -----" << endl;
                for (Pet* pet : pets) {
                    pet->displayInfo();
                    cout << endl;
                }
                break;
            }
            case 6: {
                cout << "Exiting..." << endl;
                // Clean up memory
                // Ranged-for loop
                for (Pet* pet : pets) {
                    delete pet;
                    break;
                }
                default:
                cout << "Invalid choice. Try again." << endl;
                break;
            }
         
        }
   
     
}
    }
if (option == 2){
 // Create a pet store
    PetStore petStore;
    
    cout<<" THESE ARE OUR CURRENT PETS "<<endl;

    // Add pets to the store
    petStore.addPet(new Cat("koko", 3, "Persian"));
    petStore.addPet(new Dog("daisy", 5, "Labrador"));
    petStore.addPet(new Fish("Nemo", 1, "Clownfish"));
    petStore.addPet(new Bird("rio", 2, "Parakeet"));

    // Display all the pets in the store
    petStore.displayAllPets();

    // Buy a pet
    int petIndex;
    cout << "Enter the index of the pet you want to buy from 0-4 : ";
    cin >> petIndex;
    petStore.buyPet(petIndex);

    // Display the updated list of pets
    petStore.displayAllPets();
}

}
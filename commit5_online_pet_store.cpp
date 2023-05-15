#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet {
protected:
    string name;
    int age;

public:
    void enterName() {
        cout << "Enter pet name: ";
        cin >> name;
    }

    void enterAge() {
        cout << "Enter pet age: ";
        cin >> age;
    }

    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Cat : public Pet {
private:
    string breed;

public:
    void enterBreed() {
        cout << "Enter cat breed: ";
        cin >> breed;
    }

    void displayInfo() {
        cout << "Cat" << endl;
        Pet::displayInfo();
        cout << "Breed: " << breed << endl;
    }
};

class Dog : public Pet {
private:
    string breed;

public:
    void enterBreed() {
        cout << "Enter dog breed: ";
        cin >> breed;
    }

    void displayInfo() {
        cout << "Dog" << endl;
        Pet::displayInfo();
        cout << "Breed: " << breed << endl;
    }
};

class Fish : public Pet {
private:
    string type;

public:
    void enterType() {
        cout << "Enter fish type: ";
        cin >> type;
    }

    void displayInfo() {
        cout << "Fish" << endl;
        Pet::displayInfo();
        cout << "Type: " << type << endl;
    }
};

class Bird : public Pet {
private:
    string species;

public:
    void enterSpecies() {
        cout << "Enter bird species: ";
        cin >> species;
    }

    void displayInfo() {
        cout << "Bird" << endl;
        Pet::displayInfo();
        cout << "Species: " << species << endl;
    }
};

int main() {
    vector<Pet*> pets;

    while (true) {
        cout << "1. Cat  2. Dog  3. Fish  4. Bird  5. Exit" << endl;
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
                cout << "Exiting..." << endl;
                // Clean up memory
                for (Pet* pet : pets) {
                    delete pet;
                }
                return 0;
            }
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    }
}
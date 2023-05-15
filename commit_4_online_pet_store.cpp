#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet {
public:
    string name;
    int age;
    string breed;
    bool isAdopted;

    Pet(string n, int a, string b, bool i) {
        name = n;
        age = a;
        breed = b;
        isAdopted = i;
    }

    void print() {
        cout << name << " (" << breed << "), Age: " << age << ", Adopted: " << isAdopted << endl;
    }
};

class PetStore {
public:
    vector<Pet> pets;

    void addPet(Pet pet) {
        pets.push_back(pet);
    }

    void printPets() {
        for (int i = 0; i < pets.size(); i++) {
            pets[i].print();
        }
    }

    void adoptPet(string name) {
        for (int i = 0; i < pets.size(); i++) {
            if (pets[i].name == name) {
                pets[i].isAdopted = true;
                break;
            }
        }
    }
};

int main() {
    PetStore store;

    Pet pet1("Buddy", 3, "Golden Retriever", false);
    Pet pet2("Luna", 2, "Siamese Cat", false);
    Pet pet3("Rocky", 4, "Labrador Retriever", false);

    store.addPet(pet1);
    store.addPet(pet2);
    store.addPet(pet3);

    cout << "Welcome to the pet store! Here are our current pets:" << endl;
    store.printPets();

    cout << endl << "Let's adopt a pet. Enter the name of the pet you would like to adopt: ";
    string adoptedPetName;
    cin >> adoptedPetName;

    store.adoptPet(adoptedPetName);

    cout << endl << "Congratulations on adopting " << adoptedPetName << "!" << endl;
    cout << "Here are our current pets:" << endl;
    store.printPets();

    return 0;
}
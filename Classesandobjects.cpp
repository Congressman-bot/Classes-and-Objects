/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Program to output the features of a car 
// using classes

#include <iostream>
using namespace std;

// Creating a class named car
class Car {// Public members of the class car
    public: string brand;
            string model;
            float price;
            int mileage;

// Creating a function to display the features 
// of the car
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Mileage: " << mileage << endl;
    }

// Creating a function to culculate the mileage
// of the car
    void drive(int distance) {
        mileage += distance;
        cout << "UpdatedMileage: " << mileage << endl;
    }
};

// The main function
int main()
{ 
    // Assigning the features to the members of the classes
    Car personal;
    personal.brand = "Toyota";
    personal.model = "Corolla";
    personal.price = 20000;
    personal.mileage = 5000;
    personal.display();
    
    // Increasing the mileage by the distance
    personal.drive(150);
    personal.drive(300);
    
    return 0;
}
// End of the program

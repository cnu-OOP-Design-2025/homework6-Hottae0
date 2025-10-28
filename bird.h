#pragma once

#include <iostream>


class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0;

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};


using namespace std;

class Duck : public Bird{
    public :

    Duck() : Bird("Duck"){
        cry();
    }

    ~Duck(){
        cry();
    }
    
    void cry () override{
        cout <<  "Quack!" << endl;
    }
};

class Penguin : public Bird{
    public : 

    Penguin() : Bird("Penguin"){
        string species = "Penguin";
        cry();
    }   

    void cry() override{
        cout << "Squawk!" << endl;
    }

    void fly() override{
        cout << "This bird can't fly." << endl;
    }

    ~Penguin() {
        cry();
    }
};

class Eagle : public Bird{
    public : 

    Eagle() : Bird("Eagle"){
        string species = "Eagle";
        cry();
    }   

    void cry() override{
        cout << "Screech!" << endl;
    }

    void swim() override{
        cout << "This bird can't swim." << endl;
    }

    ~Eagle() {
        cry();
    }
};


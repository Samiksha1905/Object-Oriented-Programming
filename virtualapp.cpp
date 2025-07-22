#include <iostream>
using namespace std;

// Base class
class Event {
public:
    virtual void showDetails() {
        cout << "General Event: Details will be shared soon." << endl;
    }
};

// Derived class 1
class TechTalk : public Event {
public:
    void showDetails() override {
        cout << "Tech Talk: Exploring startup ideas using DSA & SQL." << endl;
    }
};

// Derived class 2
class CulturalFest : public Event {
public:
    void showDetails() override {
        cout << "Cultural Fest: Music, food, and Gen Z vibes!" << endl;
    }
};

int main() {
    Event* e;
    TechTalk t;
    CulturalFest c;

    e = &t;
    e->showDetails(); // Calls TechTalk's version

    e = &c;
    e->showDetails(); // Calls CulturalFest's version

    return 0;
}
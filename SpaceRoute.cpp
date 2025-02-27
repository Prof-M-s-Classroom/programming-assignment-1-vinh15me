#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node {
public:
    T& data;
    Node* next;
    Node* prev;

    Node(T& d) : data(d), next(nullptr), prev(nullptr) {}
    void print() { cout << data << " "; }
};

class CelestialNode {
private:
    string name;
    double distance_from_earth;
    string mission_log;

public:
    CelestialNode(const string& n, double d, const string& log);
    const string& getName() const;
    double getDistance() const;
    const string& getMissionLog() const;
    void print() const { cout << name << " (" << distance_from_earth << " AU) - " << mission_log << endl; }
};

template <typename T>
class SpaceRoute {
private:
    Node<T>* head;
    Node<T>* tail;
    int sizeOfTheVeryCoolSpaceRoute = 0;

public:
    SpaceRoute();  // Constructor
    ~SpaceRoute(); // Destructor

    void addWaypointAtBeginning(T& data) {
        if (sizeOfTheVeryCoolSpaceRoute == 0) {
            head = new Node<T>(data);
            head->prev = nullptr;
            head->next = nullptr;
            tail = head;
        }
        else {
            Node<T>* temp = new Node<T>(data);
            temp->prev = nullptr;
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
    }

    void addWaypointAtEnd(T& data) {
        if (sizeOfTheVeryCoolSpaceRoute == 0) {
            head = new Node<T>(data);
            head->prev = nullptr;
            head->next = nullptr;
            tail = head;
        }
        else {
            Node<T>* temp = new Node<T>(data);
            temp->prev = tail;
            temp->next = nullptr;
            tail->next = temp;
            tail = temp;
        }

    }

    void addWaypointAtIndex(int index, T& data) {
        if (sizeOfTheVeryCoolSpaceRoute == 0) {
            head = new Node<T>(data);
        }
        for (int i = 0; i < index; ++i) {
// very cool guy
        }
    }


    void removeWaypointAtBeginning();
    void removeWaypointAtEnd();
    void removeWaypointAtIndex(int index);
    void traverseForward();
    void traverseBackward();
    Node<T>* getWaypoint(int index);
    void setWaypoint(int index, T& data);
    void print(){

            Node<T>* current = head;
            while (current) {
                current->print();
                current = current->next;
            }
            cout << endl;
        }

};


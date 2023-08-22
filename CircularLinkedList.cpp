// CircularLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void display1(Node* head) {
    if (head==nullptr) {
        return;
    }
    cout << head->data << endl;
    for (Node* temp = head->next; temp != head; temp=temp->next) {
        cout << temp->data << endl;
    }
}

void display0(Node* head) {
    Node* temp = head;
    while (temp->next != head) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}

void display2(Node* head) {
    Node* temp = head;
    if (temp==nullptr) {
        return;
    }
    do {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp!=head);
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    display0(head);
    cout << "-------" << endl;
    display1(head);
    cout << "-------" << endl;
    display2(head);
    cout << "-------" << endl;
    return 0;

}
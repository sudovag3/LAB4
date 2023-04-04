#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>

class MyStack {
private:
    struct Element {
        void* item;
        Element* next;
        Element(void* p_item, Element* p_next) : item(p_item), next(p_next) {}
    };
    Element* top;

public:
    MyStack() : top(nullptr) {}
    MyStack(const MyStack& other) = delete;
    MyStack& operator=(const MyStack& other) = delete;
    ~MyStack() {
        while (!Empty()) {
            pop();
        }
    }

    bool Empty() const {
        return top == nullptr;
    }

    void* getTop() const {
        if (!Empty()) {
            return top->item;
        } else {
            return nullptr;
        }
    }

    void push(void* p) {
        top = new Element(p, top);
    }

    void pop() {
        if (!Empty()) {
            Element* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

#endif

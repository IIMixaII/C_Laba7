#pragma once
#include <iostream>
using namespace std;
// Структура узла (для цепной реализации)
struct Node {
    int data;
    Node* next;
};

// Структура для представления цепной очереди
struct TQueue {
    Node* Head;
    Node* Tail;
};

// Структура для представления сплошной очереди
struct ArrayQueue {
    int* data;
    int capacity;
    int size;
    int front;
    int rear;
};

void InitializeQueue(TQueue& Q);
void Enqueue(TQueue& Q, int value);
int Dequeue(TQueue& Q);
void PrintQueue(const TQueue& Q);
void InitializeQueue(ArrayQueue& Q, int capacity);
void Enqueue(ArrayQueue& Q, int value);
int Dequeue(ArrayQueue& Q);
void PrintQueue(const ArrayQueue& Q);
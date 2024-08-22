#pragma once
#include <iostream>
using namespace std;
// ��������� ���� (��� ������ ����������)
struct Node {
    int data;
    Node* next;
};

// ��������� ��� ������������� ������ �������
struct TQueue {
    Node* Head;
    Node* Tail;
};

// ��������� ��� ������������� �������� �������
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
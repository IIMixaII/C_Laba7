#include "Header.h"

// Функция создания пустой цепной очереди
void InitializeQueue(TQueue& Q) {
    Q.Head = Q.Tail = nullptr;
}

// Функция добавления нового элемента в конец цепной очереди
void Enqueue(TQueue& Q, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (Q.Tail == nullptr) {
        Q.Head = Q.Tail = newNode;
    }
    else {
        Q.Tail->next = newNode;
        Q.Tail = newNode;
    }
}

// Функция извлечения первого элемента из цепной очереди
int Dequeue(TQueue& Q) {
    if (Q.Head == nullptr) {
        cout << "Очередь пуста" << endl;
        return -1;
    }

    int value = Q.Head->data;
    Node* temp = Q.Head;

    if (Q.Head == Q.Tail) {
        Q.Head = Q.Tail = nullptr;
    }
    else {
        Q.Head = Q.Head->next;
    }

    delete temp;
    return value;
}

// Функция вывода элементов цепной очереди на экран
void PrintQueue(const TQueue& Q) {
    Node* current = Q.Head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    cout << std::endl;
}


//////////////////////////////////////////////
// Функция создания пустой сплошной очереди
void InitializeQueue(ArrayQueue& Q, int capacity) {
    Q.data = new int[capacity];
    Q.capacity = capacity;
    Q.size = 0;
    Q.front = Q.rear = -1;
}

// Функция добавления нового элемента в конец сплошной очереди
void Enqueue(ArrayQueue& Q, int value) {
    if ((Q.rear + 1) % Q.capacity == Q.front) {
        cout << "Очередь переполнена" << endl;
        return;
    }

    if (Q.front == -1) {
        Q.front = Q.rear = 0;
    }
    else {
        Q.rear = (Q.rear + 1) % Q.capacity;
    }

    Q.data[Q.rear] = value;
    Q.size++;
}

// Функция извлечения первого элемента из сплошной очереди
int Dequeue(ArrayQueue& Q) {
    if (Q.front == -1) {
        cout << "Очередь пуста" << endl;
        return -1;
    }

    int value = Q.data[Q.front];

    if (Q.front == Q.rear) {
        Q.front = Q.rear = -1;
    }
    else {
        Q.front = (Q.front + 1) % Q.capacity;
    }

    Q.size--;
    return value;
}

void PrintQueue(const ArrayQueue& Q) {
    int current = Q.front;
    for (int i = 0; i < Q.size; ++i) {
        cout << Q.data[current] << " ";
        current = (current + 1) % Q.capacity;
    }
    cout << std::endl;
}

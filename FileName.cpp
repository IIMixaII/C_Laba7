#include "Header.h"
int main() {
    int choice;
    int capacity;
    setlocale(LC_ALL, "rus");

    do {
        cout << "Выберите реализацию:\n"
            "1. Цепное представление\n"
            "2. Сплошное представление\n"
            "3. Выйти\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int action;
            TQueue myQueueChain;
            InitializeQueue(myQueueChain);
            do {
                cout << "1. Добавить новый элемент\n"
                    "2. Удалить элемент по значению\n"
                    "3. Вывод и извлечение пяти начальных элементов\n"
                    "4. Вывести элементы\n"
                    "5. Выйти\n";
                cout << "Выберите действие: ";
                cin >> action;

                switch (action) {
                case 1:
                    cout << "Введите элемент который хотите добавить ";
                    int value;
                    cin >> value;
                    Enqueue(myQueueChain, value);
                    break;
                case 2:
                    value = Dequeue(myQueueChain);
                    if (value != -1) {
                        cout << "Удаление: " << value << endl;
                    }
                    break;
                case 3:
                    cout << " Вывод и извлечение пяти начальных элементов ";
                    for (int i = 0; i < 5; ++i) {
                        value = Dequeue(myQueueChain);
                        if (value != -1) {
                            cout << "Извлечен элемент: " << value << endl;
                        }
                    }
                case 4:
                    
                    cout << " Элементы очереди: ";
                    PrintQueue(myQueueChain);
                case 5:
                    cout << "Выход из цепного представления.\n";
                    break;
                default:
                    cout << "Неверный выбор. Повторите ввод.\n";
                }
            } while (action != 5);

            break;
        }
        case 2: {
            int action, value;
            ArrayQueue myQueueArray;
            int capacity = 9999999999;
            InitializeQueue(myQueueArray, capacity);
            do {
               
                cout << "1. Добавить новый элемент\n"
                    "2. Удалить элемент по значению\n"
                    "3. Вывод и извлечени пяти начальных элементов\n"
                    "4. Вывести элементы\n"
                    "5. Выйти\n";
                cout << "Выберите действие: ";
                cin >> action;

                switch (action) {
                case 1:
                    
                   
                    cout << "Введите значение элемента: ";
                    cin >> value;

                    Enqueue(myQueueArray, value);
                    break;
                 
                case 2:
                     value = Dequeue(myQueueArray);
                    if (value != -1) {
                        cout << "Dequeued: " << value << endl;
                    }
                    break;
                case 3:
                    cout << " Вывод и извлечение пяти начальных элементов ";
                    for (int i = 0; i < 5; ++i) {
                         value = Dequeue(myQueueArray);
                        if (value != -1) {
                            cout << "Извлечен элемент: " << value << endl;
                        }
                    }
                    break;
                case 4:
                    PrintQueue(myQueueArray);
                    break;
                case 5:
                    cout << "Выход из сплошного представления.\n";
                    break;
                default:
                    cout << "Неверный выбор. Повторите ввод.\n";
                }
            } while (action != 5);

            break;
        }
        case 3:
            cout << "Программа завершена.\n";
            break;
        default:
            cout << "Неверный выбор. Повторите ввод.\n";
        }
    } while (choice != 3);

  

    return 0;
}

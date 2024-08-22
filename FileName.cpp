#include "Header.h"
int main() {
    int choice;
    int capacity;
    setlocale(LC_ALL, "rus");

    do {
        cout << "�������� ����������:\n"
            "1. ������ �������������\n"
            "2. �������� �������������\n"
            "3. �����\n";
        cout << "��� �����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int action;
            TQueue myQueueChain;
            InitializeQueue(myQueueChain);
            do {
                cout << "1. �������� ����� �������\n"
                    "2. ������� ������� �� ��������\n"
                    "3. ����� � ���������� ���� ��������� ���������\n"
                    "4. ������� ��������\n"
                    "5. �����\n";
                cout << "�������� ��������: ";
                cin >> action;

                switch (action) {
                case 1:
                    cout << "������� ������� ������� ������ �������� ";
                    int value;
                    cin >> value;
                    Enqueue(myQueueChain, value);
                    break;
                case 2:
                    value = Dequeue(myQueueChain);
                    if (value != -1) {
                        cout << "��������: " << value << endl;
                    }
                    break;
                case 3:
                    cout << " ����� � ���������� ���� ��������� ��������� ";
                    for (int i = 0; i < 5; ++i) {
                        value = Dequeue(myQueueChain);
                        if (value != -1) {
                            cout << "�������� �������: " << value << endl;
                        }
                    }
                case 4:
                    
                    cout << " �������� �������: ";
                    PrintQueue(myQueueChain);
                case 5:
                    cout << "����� �� ������� �������������.\n";
                    break;
                default:
                    cout << "�������� �����. ��������� ����.\n";
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
               
                cout << "1. �������� ����� �������\n"
                    "2. ������� ������� �� ��������\n"
                    "3. ����� � ��������� ���� ��������� ���������\n"
                    "4. ������� ��������\n"
                    "5. �����\n";
                cout << "�������� ��������: ";
                cin >> action;

                switch (action) {
                case 1:
                    
                   
                    cout << "������� �������� ��������: ";
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
                    cout << " ����� � ���������� ���� ��������� ��������� ";
                    for (int i = 0; i < 5; ++i) {
                         value = Dequeue(myQueueArray);
                        if (value != -1) {
                            cout << "�������� �������: " << value << endl;
                        }
                    }
                    break;
                case 4:
                    PrintQueue(myQueueArray);
                    break;
                case 5:
                    cout << "����� �� ��������� �������������.\n";
                    break;
                default:
                    cout << "�������� �����. ��������� ����.\n";
                }
            } while (action != 5);

            break;
        }
        case 3:
            cout << "��������� ���������.\n";
            break;
        default:
            cout << "�������� �����. ��������� ����.\n";
        }
    } while (choice != 3);

  

    return 0;
}

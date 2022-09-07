#include <iostream>
using namespace std;

void print_bin(unsigned short a) {
    unsigned short mask = 0b1000000000000000;
    string out = "";
    for (int i = 0; i < 16; i++) {
        if (mask & a)
            out += '1';
        else
            out += '0';
        mask >>= 1;
    }
    cout << out;
}

void task1() {
    unsigned short a = 0x0000;
    unsigned short mask = 0b0101010101010101;
    a |= mask;
    cout << a << "     ";
    print_bin(a);
}

void task2() {
    cout << "Enter number: ";
    unsigned short a;
    cin >> a;
    unsigned short mask = 0b1111010101111111;
    a &= mask;
    cout << a << "     ";
    print_bin(a);
}

void task3() {
    cout << "Enter number: ";
    unsigned short a;
    cin >> a;
    unsigned short mask = 4;
    a <<= mask;
    cout << a << "     ";
    print_bin(a);
}

void task4() {
    cout << "Enter number: ";
    unsigned short a;
    cin >> a;
    unsigned short mask = 4;
    a >>= mask;
    cout << a << "     ";
    print_bin(a);
}

void task5() {
    cout << "Enter number: ";
    unsigned short a;
    cin >> a;
    unsigned short n;
    cout << "Enter n: ";
    cin >> n;
    unsigned short mask = 0b0000000000000001;
    a &= ~(mask<<n);
    cout << a << "     ";
    print_bin(a);

}




int main()
{
    cout << "Choose task: ";
    int task;
    cin >> task;
    switch(task)
    {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    case 5:
        task5();
    }
}

#include <iostream>
using namespace std;

void swap(int* a, int* b) { //присваеваем переменным иницилизацию с помощью указателей
    a = b;
    b = a;
}

int main() {

    int a = 10, b = 15;
    swap(a, b); //заносим переменные
    cout << "a = " << a << ", b = " << b << endl; // значения переменных в результате должны поменяться 

}
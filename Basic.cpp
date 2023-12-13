#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int a[10];  // массив константного размера, занимает место в памяти во время выполнения всей программы

void arrays()
{
    int b[10]; // массив константного размера, расположен на стеке, заполнен случайными значениями

    int* c = new int[10]; // массив в куче, не обязательно размер известен заранее

    array<int, 4> d = {1, 2, 3}; // контейнер STL, эквивалентен обычному массиву


    pair<int, double> p = { 7, 3.1415 }; // хранит пару из переменных (first, second)

    tuple<int, double, float> coords = {1, 2.5, 3.0f}; // кортеж
}

// иногда удобнее создать структуры вместо кортежей
struct Point {
    double x, y, z;

    Point operator+(Point other) {
        return {x + other.x, y + other.y, z + other.z};
    }
};

int main() {
    arrays();
    return 0;
}
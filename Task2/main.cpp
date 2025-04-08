#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator> 

int main() {
    std::vector<int> V = { 1, 2, 3, 4, 5 }; // Вектор c нечетным количеством элементов
    std::deque<int> D = { 1, 2, 3, 4, 5 }; // Дек c нечетным количеством элементов
    std::list<int> L = { 1, 2, 3, 4, 5 }; // Список c нечетным количеством элементов

    // Удвоение значений первого, среднего и последнего элемента вектора
    V.front() *= 2;
    V.back() *= 2;  
    V[V.size() / 2] *= 2; 

    // Удвоение значений первого, среднего и последнего элемента дека
    D.front() *= 2;
    D.back() *= 2; 
    D[D.size() / 2] *= 2; 

    // Удвоение значений первого, среднего и последнего элемента списка
    L.front() *= 2; 
    L.back() *= 2; 
    std::list<int>::iterator mid = L.begin(); 
    std::advance(mid, L.size() / 2); 
    *mid *= 2;

    std::cout << "Vector: ";
    for (int x : V) std::cout << x << " ";
    std::cout << std::endl;
    std::cout << "Deque: ";
    for (int x : D) std::cout << x << " ";
    std::cout << std::endl;
    std::cout << "List: ";
    for (int x : L) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
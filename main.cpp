#include <iostream>
#include <cmath>

using namespace std;

void simon(int); // прототип функции для simon

int main()
{
//    double area;
//    cout << "Enter the floor area, in square feet, of your home: ";
//    cin >> area;
//
//    double side;
//    side = sqrt(area);
//
//    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
//    cout << "How fascinating!" << endl;

    simon(3); // Вызов функции simon
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count); // Вызываем ее еще раз
    cout << "Done!" << endl;

    return 0;
}

void simon (int n) // Определяем функцию simon
{
    cout << "Simon says touch your toes " << n << " times" << endl;
}


#include <iostream>
using namespace std;

// Программа преобразовывает стоуны в фунты

int stoneToLb(int); // Прототип функции

int main()
{
    int stone;

    cout << "Enter the weight in stone: ";
    cin >> stone;

    int pounds = stoneToLb(stone); // Вызов функции и передача параметра

    cout << stone << " stone = " << pounds << " pounds" << endl;

    return 0;
}

int stoneToLb(int sts)
{
    return 14 * sts;
}
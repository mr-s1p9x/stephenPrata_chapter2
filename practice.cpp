#include <iostream>
using namespace std;

// Задание 3
void miceAmount();
void miceRun();
// Задание 4
int celsiusToFahrenheit(int c);
// Задание 5
double astroUnits(double u);
// Задание 6
string timeFull(string h, string m);

int main() {
    // 1. Напишите программу на С++, которая отобразит вашу фамилию и почтовый
    //адрес на экране монитора.

//    cout << "Artem" << endl;
//    cout << "temazex777@gmail.com" << endl;
//
//    cout << endl << endl;

// ############################################################################################

//    2. Напишите программу на С++, которая выдает запрос на ввод расстояния в фарлонгах
//    и преобразовывает его в ярды. (Один фарлонг равен 220 ярдам)
//    int furLong, yards;
//
//    cout << "Enter furlong to convert it into yards" << endl;
//    cout << "Enter furlong amount: ";
//    cin >> furLong;
//
//    yards = furLong * 220;
//    cout << furLong << " furlong equals " << yards << " yards" << endl;
//
//    cout << endl << endl;

// ############################################################################################

//    3. Напишите программу н а С++, которая использует три определяемых пользователем
//    функции ( включая main () ) , и результатом ее выполнения является следующий
//    вывод:
//    Three blind mice
//    Three blind mice
//    See how they run
//    See how they run
//    Одна функция , вызываемая два раза, должна генерировать первые две строки ,
//    а вторая функция , также вызываемая два раза, должна генерировать оставшиеся
//    строки.

//    miceAmount();
//    miceAmount();
//    miceRun();
//    miceRun();
//
//    cout << endl << endl;

// ############################################################################################

//    4. Напишите программу, в которой функция main () вызывает определяемую пользователем
//    функцию, которая в качестве аргумента принимает значение температуры
//    по Цельсию и возвращает эквивалентное значение температуры по
//    Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
//    отобразить следующий результат:
//    Please enter Celsius value : 20
//    20 degrees Celsius is 68 degrees Fahrenheit.

//    int celsius, fahrenheit;
//
//    cout << "Please enter Celsius value: ";
//    cin >> celsius;
//
//    // Вызов функции
//    fahrenheit = celsiusToFahrenheit(celsius);
//
//    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << endl;

// ############################################################################################

//    5. Напишите программу, в которой функция main() вызывает определяемую пользователем
//    функцию, которая в качестве аргумента принимает расстояние в световых
//    годах и возвращает расстояние в астрономических единицах. Программа
//    должна выдать запрос на ввод значения светового года и отобразить следующий
//    результат:
//    Enter the number of light years: 4.2
//    4.2 light years = 265608 astronomical units.
//            Астрономическая единица равна среднему расстоянию Земли от Солнца (около
//    150 000 000 км, или 93 000 000 миль), а световой год соответствует расстоянию,
//    пройденному лучом света за один земной год (примерно 10 триллионов километров,
//    или б триллионов миль).
//    (Ближайшая звезда после Солнца находится
//    на расстоянии 4. 2 световых года.) Используйте тип double (как в листинге 2.4)
//    и следующий коэффициент преобразования:
//    1 световой год = 63.240 астрономических единиц

//    double lightYears, astronimicalUnits;
//
//    cout << "Enter the number of light years: ";
//    cin >> lightYears;
//    // Вызов функции
//    astronimicalUnits = astroUnits(lightYears);
//    cout << lightYears << " light years = " << astronimicalUnits << " astronomical units" << endl;

// ############################################################################################
//    6. Напишите программу, которая выдает запрос на ввод значения часов и значения
//    минут. Функция main () должна передать эти два значения функции, имеющей
//    тип void, которая отображает эти два значения в следующем виде:
//    Enter the number of hours: 9
//    Enter the number of minutes: 28
//    Time: 9:28

//    string hours, minutes, time;
//
//    cout << "Enter amount of hours: ";
//    cin >> hours;
//    cout << "Enter amount of minutes: ";
//    cin >> minutes;
//
//    time = timeFull(hours, minutes);
//
//    cout << time << endl;

// ############################################################################################
}

// Задание 3
void miceAmount()
{
    cout << "Three blind mice" << endl;
}
// Задание 3
void miceRun()
{
    cout << "See how they run" << endl;
}

// Задание 4
int celsiusToFahrenheit(int c)
{
    return (c * 9 / 5) + 32;
}

// Задание 5
double astroUnits(double u)
{
    return u * 63240;
}

// Задание 6
string timeFull(string h, string m)
{
    return h + ":" + m;
}
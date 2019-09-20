#include <iostream>

using namespace std;


/*
 * Город содержит целое поле – число жителей и вещественное воле – площадь,
 * занимаемую городом. Реализовать метод, вычисляющий плотность населения в
 * городе.  Основной класс страна имеет три поля типа город, вещественное поле –
 * площадь, не занятая городами и целое поле – число жителей, живущих не в этих
 * городах. Реализовать  метод, вычисляющий среднюю плотность населения в стране и
 * метод, вычисляющий не самый плотно заселенный город и не самый менее плотно
 * заселенный из трех городов.
 */

class town{
private:
    int population;
    double square;
public:
    void set(){
        cout << "input population: ";
        cin >> population;
        cout << "input square: ";
        cin >> square;
    }

    double density(){
        return 1.0 * population / square;
    }
};

class country{
private:
    double square;
    int population;
    town city1, city2, city3;
public:

        double density(){
        double avgD = city1.density() + city2.density() + city3.density();
        avgD /= 3;
        return (avgD + 1. * population / square) / 2;
    }

    void set(){
        cout << "Set all of 3 town`s parametrs";
        city1.set();
        city2.set();
        city3.set();
        cout << "input population of other towns: ";
        cin >> population;
        cout << "input square of other towns: ";
        cin >> square;
    }

};

int main()
{
    country Russia;
    Russia.set();
    cout << Russia.density();
    return 0;
}

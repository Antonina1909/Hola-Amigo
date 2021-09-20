#include "Tour.h"
#include <iostream>
#include <string>
#include <string_view>

using namespace std;


    int main()

    {
        setlocale(LC_ALL, "Russian");

        Tour t;
        t.cinTour(); // Просим пользователя ввести данные
        t.print(); //вывод данных на экран

       

        return 0;
    };

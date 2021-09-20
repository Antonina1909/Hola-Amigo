#pragma once
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// Создаем класс отель
class Hotel // Описываем поля класса (наименование отеля, количество звезд, страна).
{
protected:
    string country; //страна
    string nameHotel; //наименование отеля
    int level; //количество звезд   

public:
    Hotel() {} // Конструктор по умолчанию

    Hotel(string country, string nameHotel, int level) // Конструктор с параметрами
    {
        this->country = country;
        this->nameHotel = nameHotel;
        this->level = level;
    }

};

// Создаем класс клиент
class Client
{
protected:
    string name;//имя
    string surname;//фамилия
    string mobilephone;//мобильный телефон
    string passport;//паспорт

public:
    Client() {}
    Client(string name, string surname, string mobilephone, string passport)

    {
        this->name = name;
        this->surname = surname;
        this->mobilephone = mobilephone;
        this->passport = passport;

    }
    
};

//Создаем класс тур

class Tour : public Hotel, public Client
{
private:
    string startDate; //дата заезда
    string finishDate; //дата отъезда

public:
    Tour() {}
    Tour(string startDate, string finishDate)
    {
        this->startDate;
        this->finishDate;
    };


    void cinTour()
    {
        cout << "Введите дату заезда и дату отъезда в формате DD.MM.YYYY" << endl;
        cin >> (this->startDate) >> (this->finishDate);
        cout << "Введите имя, фамилию, мобильный телефон и номер паспорт" << endl;
        cin >> (this->name) >> (this->surname) >> (this->mobilephone) >> (this->passport);
        cout << "Введите страну, наименование отеля, количество звезд" << endl;
        cin >> (this->country) >> (this->nameHotel) >> (this->level);
    }

    void print()
    {
        cout << "Дата заезда " << startDate << "\n";
        cout << "Дата отъезда " << finishDate << "\n";
        cout << "Имя " << name << "\n";
        cout << "Фамилия " << surname << "\n";
        cout << "Мобильный телефон " << mobilephone << "\n";
        cout << "Паспорт " << passport << "\n";
        cout << "Страна " << country << "\n";
        cout << "Наименование отеля " << nameHotel << "\n";
        cout << "Количество звезд " << level << "\n";
    }

};
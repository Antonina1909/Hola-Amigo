#pragma once
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// ������� ����� �����
class Hotel // ��������� ���� ������ (������������ �����, ���������� �����, ������).
{
protected:
    string country; //������
    string nameHotel; //������������ �����
    int level; //���������� �����   

public:
    Hotel() {} // ����������� �� ���������

    Hotel(string country, string nameHotel, int level) // ����������� � �����������
    {
        this->country = country;
        this->nameHotel = nameHotel;
        this->level = level;
    }

};

// ������� ����� ������
class Client
{
protected:
    string name;//���
    string surname;//�������
    string mobilephone;//��������� �������
    string passport;//�������

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

//������� ����� ���

class Tour : public Hotel, public Client
{
private:
    string startDate; //���� ������
    string finishDate; //���� �������

public:
    Tour() {}
    Tour(string startDate, string finishDate)
    {
        this->startDate;
        this->finishDate;
    };


    void cinTour()
    {
        cout << "������� ���� ������ � ���� ������� � ������� DD.MM.YYYY" << endl;
        cin >> (this->startDate) >> (this->finishDate);
        cout << "������� ���, �������, ��������� ������� � ����� �������" << endl;
        cin >> (this->name) >> (this->surname) >> (this->mobilephone) >> (this->passport);
        cout << "������� ������, ������������ �����, ���������� �����" << endl;
        cin >> (this->country) >> (this->nameHotel) >> (this->level);
    }

    void print()
    {
        cout << "���� ������ " << startDate << "\n";
        cout << "���� ������� " << finishDate << "\n";
        cout << "��� " << name << "\n";
        cout << "������� " << surname << "\n";
        cout << "��������� ������� " << mobilephone << "\n";
        cout << "������� " << passport << "\n";
        cout << "������ " << country << "\n";
        cout << "������������ ����� " << nameHotel << "\n";
        cout << "���������� ����� " << level << "\n";
    }

};
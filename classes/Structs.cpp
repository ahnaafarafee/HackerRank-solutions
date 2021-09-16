#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student student;

    student.age = age;
    student.first_name = first_name;
    student.last_name = last_name;
    student.standard = standard;

    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard << endl;

    return 0;
}
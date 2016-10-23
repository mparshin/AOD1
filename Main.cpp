#include <iostream>
#include "Pupils.h"

int main()
{
    Pupils pupil;

    std::string name;
    std::string second_name;

   
    std::cout << "Name: ";//Имя с клавиатуры
    getline(std::cin, name);

    
    std::cout << "Second name: ";//Фамилия с клавиатуры
    getline(std::cin, second_name);

    pupil.set_name(name);//Созранение имени и фамилии
    pupil.set_second_name(second_name);

    int scores[5];//Оценки
    int sum = 0;//Сумма оценок 

    // Ввод оценок
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];// Сложение 
    }

    
    pupil.set_scores(scores);//Сохранение оценок 
    float medium_mark = sum / 5.0;// Подсчет средней оценки
    pupil.set_medium_mark(medium_mark);// Средняя оценка
    std::cout << "Medium mark of " << pupil.get_name() << " "
         << pupil.get_second_name() << " is "
         << pupil.get_medium_mark() << std::endl;//Итог данных по студенту

    return 0;
}

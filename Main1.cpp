#include <iostream>
#include "Pupil1.h"

int main()
{
    Pupil1 pupil;

    std::string name;
    std::string second_name;

   
    //std::cout << "Name: ";//Имя с клавиатуры
    //getline(std::cin, name);

    //std::cout << "Second name: ";//Фамилия с клавиатуры
    //getline(std::cin, second_name);
	std::cin>>name;
	std::cin>>second_name;
	
    pupil.setName(name);//Созранение имени и фамилии
    pupil.setSecondName(second_name);

    int scores[5];//Оценки
    int sum = 0;//Сумма оценок 

    // Ввод оценок
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];// Сложение 
    }   
    pupil.setScores(scores);//Сохранение оценок 
    float medium_mark = sum / 5.0;// Подсчет средней оценки
    pupil.setMediumMark(medium_mark);// Средняя оценка
    std::cout << "Medium mark of " << pupil.getName() << " "
         << pupil.getSecondName() << " is "
         << pupil.getMediumMark() << std::endl;//Итог данных по студенту

    return 0;
}

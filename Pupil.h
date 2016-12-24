#include <string>

class Pupil {
    public:
        void setName(std::string pupil_name)//Установка имени
        {
            name = pupil_name;
        }
        
        std::string getName()//Получение имени
        {
            return name;
        }
        void setSecondName(std::string pupil_second_name)//Установка фамилии
        {
            second_name = pupil_second_name;
        }
        std::string getSecondName()//Получение фамилии
        {
            return second_name;
        }
        void setScores(int pupil_scores[])//Установка оценок
        {
            for (int i = 0; i < 5; ++i) {
                scores[i] = pupil_scores[i];
            }
        }
        void setMediumMark(float medium_mark)//Средний балл 
        {
            medium_mark = mark;
        }
        float getMediumMark()//Получение среднего балла 
        {
            return medium_mark;
        }
       

    private:
        int scores[5];//Оценки
        float medium_mark; //Средняя оценка
        std::string name;//Имя
        std::string second_name;//Фамилия
};

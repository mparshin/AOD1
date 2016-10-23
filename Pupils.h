#include <string>

class Pupils {
    public:
        void set_name(std::string pupil_name)//Установка имени
        {
            name = pupil_name;
        }
        
        std::string get_name()//Получение имени
        {
            return name;
        }
        void set_second_name(std::string pupil_second_name)//Установка фамилии
        {
            second_name = pupil_last_name;
        }
        std::string get_second_name()//Получение фамилии
        {
            return second_name;
        }
        void set_scores(int pupil_scores[])//Установка оценок
        {
            for (int i = 0; i < 5; ++i) {
                scores[i] = pupil_scores[i];
            }
        }
        void set_medium_mark(float mark)//Средний балл 
        {
            medium_mark = mark;
        }
        float get_medium_mark()//Получение среднего балла 
        {
            return medium_mark;
        }

    private:
        int scores[5];//Оценки
        float average_mark; //Средняя оценка
        std::string name;//Имя
        std::string last_name;//Фамилия
};


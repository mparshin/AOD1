#include <iostream>
#include "Pupil1.h"
using namespace std;
void setName(std::string pupil_name)//Onoaiiaea eiaie
        {
            name = pupil_name;
        }
        std::string getName()//Iieo?aiea eiaie
        {
            return name;
        }
        void setSecondName(std::string pupil_second_name)//Onoaiiaea oaieeee
        {
            second_name = pupil_second_name;
        }
        std::string getSecondName()//Iieo?aiea oaieeee
        {
            return second_name;
        }
        void setScores(int pupil_scores[])//Onoaiiaea ioaiie
        {
        for (int i = 0; i < 5; ++i) {
               scores[i] = pupil_scores[i];
        }
        }
        void setMediumMark(float medium_mark)//N?aaiee aaee 
        {
            medium_mark = mark;
        }
        float getMediumMark()//Iieo?aiea n?aaiaai aaeea 
        {
            return medium_mark;
        };

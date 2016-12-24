
#include "Pupil1.h"

void Pupil1::setName(std::string pupil_name)//Onoaiiaea eiaie
{
    name = pupil_name;
}

std::string Pupil1::getName()//Iieo?aiea eiaie
        {
            return name;
        }
        void Pupil1::setSecondName(std::string pupil_second_name)//Onoaiiaea oaieeee
        {
            second_name = pupil_second_name;
        }
        std::string Pupil1::getSecondName()//Iieo?aiea oaieeee
        {
            return second_name;
        }
void Pupil1::setScores(int pupil_scores[])//Onoaiiaea ioaiie
{
    for (int i = 0; i < 5; ++i) 
	{
        scores[i] = pupil_scores[i];
    }
}
        void Pupil1::setMediumMark(float medium_mark)//N?aaiee aaee 
        {
            this->medium_mark = medium_mark;
        }
        float Pupil1::getMediumMark()//Iieo?aiea n?aaiaai aaeea 
        {
            return medium_mark;
        };

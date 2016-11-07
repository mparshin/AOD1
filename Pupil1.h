#include <string>
using std::string;

class Pupil1 {
    public:
        void setName(string pupil_name);//Onoaiiaea eiaie
       // {
            //name = pupil_name;
       // }
        string getName();//Iieo?aiea eiaie
       // {
        //    //return name;
       // }
        void setSecondName(std::string pupil_second_name);//Onoaiiaea oaieeee
       // {
        //    //second_name = pupil_second_name;
       // }
        std::string getSecondName();//Iieo?aiea oaieeee
       // {
        //    //return second_name;
       // }
       void setScores(int pupil_scores[]);//Onoaiiaea ioaiie
        //{
         //   //for (int i = 0; i < 5; ++i) {
          //    //  scores[i] = pupil_scores[i];
            //}
        //}
        void setMediumMark(float medium_mark);//N?aaiee aaee 
        //{
            //medium_mark = mark;
        //}
        float getMediumMark();//Iieo?aiea n?aaiaai aaeea 
       // {
            //return medium_mark;
    private:
        int scores[5];//Ioaiee
        float medium_mark; //N?aaiyy ioaiea
        std::string name;//Eiy
        std::string second_name;//Oaieeey
};
